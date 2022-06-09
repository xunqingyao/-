///**
// * @author qingyao
// * @Date 2022/5/7 18:01
// * @coding utf-8
//*/
//
//
//
///**
// * 还不能用
// */
//
//
//
//#ifndef FINAL_WORK_COMPRESS_H
//#define FINAL_WORK_COMPRESS_H
//
//#include <stdio.h>
//#include <windows.h>
//#include <string>
//#include <bitset>
//
//using namespace std;
//
//struct BMPHeader {
//    BITMAPFILEHEADER BF;   		//文件头
//    BITMAPINFOHEADER BI;		//信息头
//    int rgb[256];				//BMP调色板
//};
//
//typedef struct node {
//    int weight;					//权重
//    int left;					//左子树
//    int right;					//右子树
//    int inrange;				//是否在检索范围内（接下来会解释）
//} HFTNode;
//
//typedef struct
//{
//    int weight;		//权重
//    int parent;		//双亲结点
//    int lc;		//左孩子结点
//    int rc;		//右孩子结点
//} HFNode;
//
//typedef struct
//{
//    char cd[];		//存放哈夫曼码
//    int start;
//} HCode;
//
//
//class Compress {
//public:
//    static int ReadBMP(string filename, BMPHeader & ih, unsigned char ** & data);
//    static int CreateHFTree(HFTNode* HFTNodes, int* weights);
//    static int SelectMinW(HFTNode* HFTNodes, int range);
//    static void CreateHCode(HFNode* HFNodes,HCode* hcode,int range);
//    static void CHFTCode(HFTNode* HFTNodes, int pos, string bits, string * Code);
//    static void HuffmanEncode(unsigned char * data[], int height, int width, const char *filename);
//};
//
//
//#endif //FINAL_WORK_COMPRESS_H
