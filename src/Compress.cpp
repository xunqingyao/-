///**
// * @author qingyao
// * @Date 2022/5/7 18:01
// * @coding utf-8
//*/
//
//#include "Compress.h"
//
//int Compress::ReadBMP(string filename, BMPHeader &ih, unsigned char **&data) {
//    FILE * fp;
//    fp = fopen(filename.c_str(), "rb");
//    if (fp == NULL) {
//        return 0;
//    }
////为所需信息赋值：
//    fread(&ih.BF, sizeof(BITMAPFILEHEADER), 1, fp);			//如果没有读取头文件会导致 biBitCount直接成为40—— 位图信息头大小（40byte）
//    fread(&ih.BI, sizeof(BITMAPINFOHEADER), 1, fp);
//    fread(&ih.rgb, sizeof(int), 256, fp);
////只能打开256色位BMP图像：
//    if (ih.BI.biBitCount != 8) {
//        printf("文件打开失败，请选择正确文件格式!\n");
//        return 0;
//    }
//
//    data = new unsigned char*[ih.BI.biHeight];
//    int row_width = ih.BI.biWidth + (4 - ih.BI.biWidth % 4);
//    for (int i = 0; i < ih.BI.biHeight; i++) {
//        data[i] = new unsigned char[ih.BI.biWidth];
//    }
//    for (int i = 0; i < ih.BI.biHeight; i++) {
//        for (int j = 0; j < ih.BI.biWidth; j++) {
//            fread(&data[i][j], 1, 1, fp);//data赋值——将位图中每一个像素点的信息提取保存起来，作为数据的一部分。
//        }
//        if (ih.BI.biWidth % 4 > 0) {//偏移量定位
//            fseek(fp, 4 - ih.BI.biWidth % 4, SEEK_CUR);
//        }
//    }
//    fclose(fp);
//    return 1;
//}
//
//int Compress::CreateHFTree(HFTNode *HFTNodes, int *weights) {
//    for (int i = 0; i < 256; i++) {
//        HFTNodes[i].left =HFTNodes[i].right = -1;
//        HFTNodes[i].weight = weights[i];
//        HFTNodes[i].inrange = 0;
//    }//结点初始化
//    int range = 256;//初始化搜索范围：前256个叶子结点
//
//    while (1) {		//循环构树
//        int lc = SelectMinW(HFTNodes, range);	//寻找构树节点
//        if (lc == -1) {		//说明到达了根结点处，哈夫曼树已经构建完毕
//            break;
//        }
//        int rc = SelectMinW(HFTNodes, range);
//        if (rc == -1) {
//            break;
//        }
//        HFTNodes[range].left = lc;
//        HFTNodes[range].right = rc;
//        HFTNodes[range].weight = HFTNodes[lc].weight + HFTNodes[rc].weight;					//将左右子树的权值赋予根节点，该节点代替左右子树加入搜索范围进行下一轮搜索
//        HFTNodes[range].inrange = 0;//边缘结点加入搜索
//        range++;
//        //很容易理解：每一轮循环将一个新的结点加入森林，而这个结点的编号恰好是range，搜索范围需要加1
//    }
//    return range;	//改点返回根结点的标号，用于确定后续过程的循环用条件
//
//}
//
//int Compress::SelectMinW(HFTNode *HFTNodes, int range) {
//    int node = -1;
//    for (int i = 0; i < range; i++) {		//只在范围内寻找
//        if(!HFTNodes[i].inrange&&HFTNodes[i].weight > 0)//判断是否在搜索范围以内（去除了权重为0的结点，因为用不到）
//            if (node == -1 || HFTNodes[i].weight < HFTNodes[node].weight)//判断是否是根节点或者是否满足较小条件
//            {node = i;}
//    }
//    //得到最小值的序号了！
//    if (node != -1) {
//        HFTNodes[node].inrange = 1;//把这个结点排出搜索范围之中
//    }
//    return node;//返回该较小值的序号
//}
//
//void Compress::CreateHCode(HFNode *HFNodes, HCode *hcode, int range) {
//    int i,f,c;
//    HCode hc;
//    for (i=0;i<range;i++)	//根据哈夫曼树构造所有叶子结点的哈夫曼编码
//    {
//        hc.start=range;c=i;
//        f=HFNodes[i].parent;
//        while (f!=-1)	//循环直到树根结点
//        {
//            if (HFNodes[f].lc==c)	//处理左孩子结点
//                hc.cd[hc.start--]='0';
//            else					//处理右孩子结点
//                hc.cd[hc.start--]='1';
//            c=f;f=HFNodes[f].parent;		//找到双亲结点向上查找
//        }
//        hc.start++;		//start指向哈夫曼编码最开始字符
//        hcode[i]=hc;		//由于并不需要记录中间结点，只对叶子结点进行处理
//    }
//}
//
//void Compress::CHFTCode(HFTNode *HFTNodes, int pos, string bits, string *Code) {
//    /********************函数初始条件********************/
//    int l = HFTNodes[pos].left;
//    int r = HFTNodes[pos].right;
//
///********************递归终止条件********************/
//    if (HFTNodes[pos].left == -1 && HFTNodes[pos].right == -1) {//左右孩子均为空->已经是叶子结点了，编码已经可以结束了
//        Code[pos] = bits;			//赋值哈夫曼编码！
//        return;
//    }
//
///********************递归嵌套语句********************/
//    CHFTCode(HFTNodes, r, bits + "1", Code);//将函数推向右孩子
//    CHFTCode(HFTNodes, l, bits + "0", Code);//将函数推向左孩子
//    //递归过程中哈夫曼编码的“前缀”得以保留。
//}
//
//void Compress::HuffmanEncode(unsigned char **data, int height, int width, const char *filename) {
//    int weights[256];						//256种点的权重
//    memset(weights, 0, sizeof(int) * 256);	//初始化
//    for (int i = 0; i < height; i++)
//    {
//        for (int j = 0; j < width; j++)
//        {
//            weights[data[i][j]]++;			//循环求每一种点的权重
//        }
//    }
//
//    HFTNode HFTNodes[256 * 2-1];			//开辟需要的节点个数（哈夫曼树最多需要如此多个结点）
//    string Code[256];						//为每一个叶子结点开辟哈夫曼编码空间
//
//    int range = CreateHFTree(HFTNodes, weights);
//    //返回根点值——确定查找范围
//
//    CHFTCode(HFTNodes, range - 1, "", Code);
//
//    //开辟缓冲区
//    int BuffLength = 0;
//    for (int i = 0; i < 256; i++) {
//        BuffLength += weights[i] * Code[i].size();
//        //计算所有哈夫曼编码的总长度以确定缓冲区的大小
//    }
//    char * Buff = new char[BuffLength];
//
//    //将压缩后的文件读入“缓冲区”——这个意义不严格
//    int cur = 0;
//    for (int i = 0; i < height; i++) {
//        for (int j = 0; j < width; j++) {
//            for (int k = 0; k < Code[data[i][j]].size(); k++) {
//                Buff[cur] = Code[data[i][j]][k];		//data的数据是像素点的信息
//                cur++;
//            }
//        }
//    }
//    //生成新的压缩文件
//    FILE* fp;
//    fp = fopen(filename, "wb");			//新建文件，二进制写入
//    int times = BuffLength / 32 + 1;	//int——>32位
//    string total = "";
//    total = total + Buff;				//一次性写入数据区
//    for (int i = 0; i < 32 * times - BuffLength; i++) {
//        total = total + "0";			//尾缀“000000000”——>存在不足现象——哈夫曼编码长度不确定
//        //在解压缩的时候每一个像素点对应的哈夫曼编码实际是确定的
//        //尾缀生成的像素可以在解压缩图的像素矩阵中排除
//    }
//    fwrite(&BuffLength, sizeof(int), 1, fp); //写数据的长度
//    for (int i = 0; i < times; i++)
//    {
//        bitset<32> byte(total.substr(32 * i, 32));
//        //每次取total的32位，并以i为计数器向后推移
//        unsigned long tmp = byte.to_ulong();
//        fwrite(&tmp, sizeof(int), 1, fp);
//        //写入，写入……
//    }
//    fclose(fp);
//}
