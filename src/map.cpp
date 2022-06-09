﻿#include "map.h"
#include <QDebug>
#include <cmath>
#define max 100
#define inf (~(0x1 << 31))

Map::Map()
{
    /* ---------------------------沙河部分--------------------------- */
    // 沙河所有的点
    QString str;
    p_shahe[1].id = 1;
    str = QString("西门");
    p_shahe[1].name = str;
    p_shahe[1].x = 46;
    p_shahe[1].y = 315;
    castShahe[str] = 1;

    p_shahe[2].id = 2;
    str = QString("路口2");
    p_shahe[2].name = str;
    p_shahe[2].x = 270;
    p_shahe[2].y = 315;
    castShahe[str] = 2;

    p_shahe[3].id = 3;
    str = QString("路口3");
    p_shahe[3].name = str;
    p_shahe[3].x = 270;
    p_shahe[3].y = 250;
    castShahe[str] = 3;

    p_shahe[4].id = 4;
    str = QString("沙河体育场");
    p_shahe[4].name = str;
    p_shahe[4].x = 250;
    p_shahe[4].y = 250;
    castShahe[str] = 4;
    castShahe["足球场"] = 4;
    castShahe["篮球场"] = 4;
    castShahe["排球场"] = 4;
    castShahe["网球场"] = 4;

    p_shahe[5].id = 5;
    str = QString("路口5");
    p_shahe[5].name = str;
    p_shahe[5].x = 270;
    p_shahe[5].y = 190;
    castShahe[str] = 5;

    p_shahe[6].id = 6;
    str = QString("路口6");
    p_shahe[6].name = str;
    p_shahe[6].x = 270;
    p_shahe[6].y = 110;
    castShahe[str] = 6;

    p_shahe[7].id = 7;
    p_shahe[7].name = "学生公寓D2区";
    p_shahe[7].x = 350;
    p_shahe[7].y = 110;
    castShahe["学生公寓D2区"] = 7;

    p_shahe[8].id = 8;
    p_shahe[8].name = "路口8";
    p_shahe[8].x = 270;
    p_shahe[8].y = 130;
    castShahe["路口8"] = 8;

    p_shahe[9].id = 9;
    p_shahe[9].name = "路口9";
    p_shahe[9].x = 350;
    p_shahe[9].y = 156;
    castShahe["路口9"] = 9;

    p_shahe[10].id = 10;
    p_shahe[10].name = "学生公寓E区";
    p_shahe[10].x = 290;
    p_shahe[10].y = 130;
    castShahe["学生公寓E区"] = 10;

    p_shahe[11].id = 11;
    p_shahe[11].name = "学生公寓A区"; //学生公寓B区
    p_shahe[11].x = 290;
    p_shahe[11].y = 250;
    castShahe["学生公寓B区"] = 11;
    castShahe["学生公寓A区"] = 11;

    p_shahe[12].id = 12;
    p_shahe[12].name = "学生公寓C区";
    p_shahe[12].x = 305;
    p_shahe[12].y = 190;
    castShahe["学生公寓C区"] = 12;

    p_shahe[13].id = 13;
    p_shahe[13].name = "学生公寓D1区";
    p_shahe[13].x = 355;
    p_shahe[13].y = 190;
    castShahe["学生公寓D1区"] = 13;

    p_shahe[14].id = 14;
    p_shahe[14].name = "生活服务区";
    p_shahe[14].x = 345;
    p_shahe[14].y = 275;
    castShahe["生活服务区"] = 14;

    p_shahe[15].id = 15;
    p_shahe[15].name = "路口15";
    p_shahe[15].x = 270;
    p_shahe[15].y = 275;
    castShahe["路口15"] = 15;

    p_shahe[16].id = 16;
    p_shahe[16].name = "路口16";
    p_shahe[16].x = 385;
    p_shahe[16].y = 275;
    castShahe["路口16"] = 16;

    p_shahe[17].id = 17;
    p_shahe[17].name = "路口17";
    p_shahe[17].x = 385;
    p_shahe[17].y = 315;
    castShahe["路口17"] = 17;

    p_shahe[18].id = 18;
    p_shahe[18].name = "路口18";
    p_shahe[18].x = 385;
    p_shahe[18].y = 225;
    castShahe["路口18"] = 18;

    p_shahe[19].id = 19;
    p_shahe[19].name = "路口19";
    p_shahe[19].x = 385;
    p_shahe[19].y = 190;
    castShahe["路口19"] = 19;

    p_shahe[20].id = 20;
    p_shahe[20].name = "路口20";
    p_shahe[20].x = 385;
    p_shahe[20].y = 156;
    castShahe["路口20"] = 20;

    p_shahe[21].id = 21;
    p_shahe[21].name = "路口21";
    p_shahe[21].x = 385;
    p_shahe[21].y = 110;
    castShahe["路口21"] = 21;

    p_shahe[22].id = 22;
    p_shahe[22].name = "路口22";
    p_shahe[22].x = 435;
    p_shahe[22].y = 190;
    castShahe["路口22"] = 22;

    p_shahe[23].id = 23;
    p_shahe[23].name = "教工食堂";
    p_shahe[23].x = 435;
    p_shahe[23].y = 150;
    castShahe["教工食堂"] = 23;

    p_shahe[24].id = 24;
    p_shahe[24].name = "路口24";
    p_shahe[24].x = 480;
    p_shahe[24].y = 190;
    castShahe["路口24"] = 24;

    p_shahe[25].id = 25;
    p_shahe[25].name = "路口25";
    p_shahe[25].x = 480;
    p_shahe[25].y = 110;
    castShahe["路口25"] = 25;

    p_shahe[26].id = 26;
    p_shahe[26].name = "医务室";
    p_shahe[26].x = 530;
    p_shahe[26].y = 110;
    castShahe["医务室"] = 26;

    p_shahe[27].id = 27;
    p_shahe[27].name = "路口27";
    p_shahe[27].x = 530;
    p_shahe[27].y = 190;
    castShahe["路口27"] = 27;

    p_shahe[28].id = 28;
    p_shahe[28].name = "综合办公楼";
    p_shahe[28].x = 530;
    p_shahe[28].y = 150;
    castShahe["综合办公楼"] = 28;

    p_shahe[29].id = 29;
    p_shahe[29].name = "路口29";
    p_shahe[29].x = 435;
    p_shahe[29].y = 270;
    castShahe["路口29"] = 29;

    p_shahe[30].id = 30;
    p_shahe[30].name = "学生食堂";
    p_shahe[30].x = 435;
    p_shahe[30].y = 230;
    castShahe["学生食堂"] = 30;

    p_shahe[31].id = 31;
    p_shahe[31].name = "路口31";
    p_shahe[31].x = 270;
    p_shahe[31].y = 385;
    castShahe["路口31"] = 31;

    p_shahe[32].id = 32;
    p_shahe[32].name = "信息楼";
    p_shahe[32].x = 290;
    p_shahe[32].y = 385;
    castShahe["信息楼"] = 32;

    p_shahe[33].id = 33;
    p_shahe[33].name = "路口33";
    p_shahe[33].x = 385;
    p_shahe[33].y = 380;
    castShahe["路口33"] = 33;

    p_shahe[34].id = 34;
    p_shahe[34].name = "路口34";
    p_shahe[34].x = 385;
    p_shahe[34].y = 425;
    castShahe["路口34"] = 34;

    p_shahe[35].id = 35;
    p_shahe[35].name = "路口35";
    p_shahe[35].x = 385;
    p_shahe[35].y = 470;
    castShahe["路口35"] = 35;

    p_shahe[36].id = 36;
    p_shahe[36].name = "路口36";
    p_shahe[36].x = 385;
    p_shahe[36].y = 535;
    castShahe["路口36"] = 36;

    p_shahe[37].id = 37;
    p_shahe[37].name = "S5";
    p_shahe[37].x = 360;
    p_shahe[37].y = 535;
    castShahe["S5"] = 37;

    p_shahe[38].id = 38;
    p_shahe[38].name = "S4";
    p_shahe[38].x = 360;
    p_shahe[38].y = 470;
    castShahe["S4"] = 38;

    p_shahe[39].id = 39;
    p_shahe[39].name = "S3";
    p_shahe[39].x = 360;
    p_shahe[39].y = 425;
    castShahe["S3"] = 39;

    p_shahe[40].id = 40;
    p_shahe[40].name = "S2";
    p_shahe[40].x = 360;
    p_shahe[40].y = 380;
    castShahe["S2"] = 40;

    p_shahe[41].id = 41;
    p_shahe[41].name = "路口41";
    p_shahe[41].x = 480;
    p_shahe[41].y = 315;
    castShahe["路口41"] = 41;

    p_shahe[42].id = 42;
    p_shahe[42].name = "路口42";
    p_shahe[42].x = 480;
    p_shahe[42].y = 270;
    castShahe["路口42"] = 42;

    p_shahe[43].id = 43;
    p_shahe[43].name = "路口43";
    p_shahe[43].x = 480;
    p_shahe[43].y = 230;
    castShahe["路口43"] = 43;

    p_shahe[44].id = 44;
    p_shahe[44].name = "小麦铺";
    p_shahe[44].x = 500;
    p_shahe[44].y = 235;
    castShahe["小麦铺"] = 44;

    p_shahe[45].id = 45;
    p_shahe[45].name = "路口45";
    p_shahe[45].x = 500;
    p_shahe[45].y = 270;
    castShahe["路口45"] = 45;

    p_shahe[46].id = 46;
    p_shahe[46].name = "移动营业厅";
    p_shahe[46].x = 500;
    p_shahe[46].y = 260;
    castShahe["移动营业厅"] = 46;
    castShahe["联通营业厅"] = 46;
    castShahe["电信营业厅"] = 46;

    p_shahe[47].id = 47;
    str = QString("路口47");
    p_shahe[47].name = str;
    p_shahe[47].x = 530;
    p_shahe[47].y = 270;
    castShahe[str] = 47;

    p_shahe[48].id = 48;
    str = QString("邮局");
    p_shahe[48].name = str;
    p_shahe[48].x = 530;
    p_shahe[48].y = 260;
    castShahe[str] = 48;

    p_shahe[49].id = 49;
    str = QString("学生活动中心");
    p_shahe[49].name = str;
    p_shahe[49].x = 530;
    p_shahe[49].y = 230;
    castShahe[str] = 49;

    p_shahe[50].id = 50;
    str = QString("路口50");
    p_shahe[50].name = str;
    p_shahe[50].x = 585;
    p_shahe[50].y = 270;
    castShahe[str] = 50;

    p_shahe[51].id = 51;
    p_shahe[51].name = "路口51";
    p_shahe[51].x = 585;
    p_shahe[51].y = 110;
    castShahe["路口51"] = 51;

    p_shahe[52].id = 52;
    str = QString("路口52");
    p_shahe[52].name = str;
    p_shahe[52].x = 585;
    p_shahe[52].y = 190;
    castShahe[str] = 52;

    p_shahe[53].id = 53;
    str = QString("图书馆");
    p_shahe[53].name = str;
    p_shahe[53].x = 650;
    p_shahe[53].y = 190;
    castShahe[str] = 53;

    p_shahe[54].id = 54;
    p_shahe[54].name = "路口54";
    p_shahe[54].x = 705;
    p_shahe[54].y = 190;
    castShahe["路口54"] = 54;

    p_shahe[55].id = 55;
    p_shahe[55].name = "路口55";
    p_shahe[55].x = 750;
    p_shahe[55].y = 190;
    castShahe["路口55"] = 55;

    p_shahe[56].id = 56;
    p_shahe[56].name = "东配楼";
    p_shahe[56].x = 750;
    p_shahe[56].y = 170;
    castShahe["东配楼"] = 56;

    p_shahe[57].id = 57;
    p_shahe[57].name = "咖啡厅";
    p_shahe[57].x = 705;
    p_shahe[57].y = 260;
    castShahe["咖啡厅"] = 57;
    castShahe["塞纳左岸"] = 57;

    p_shahe[58].id = 58;
    p_shahe[58].name = "路口58";
    p_shahe[58].x = 705;
    p_shahe[58].y = 315;
    castShahe["路口58"] = 58;

    p_shahe[59].id = 59;
    p_shahe[59].name = "路口59";
    p_shahe[59].x = 785;
    p_shahe[59].y = 315;
    castShahe["路口59"] = 59;

    p_shahe[60].id = 60;
    p_shahe[60].name = "路口60";
    p_shahe[60].x = 785;
    p_shahe[60].y = 190;
    castShahe["路口60"] = 60;

    p_shahe[61].id = 61;
    p_shahe[61].name = "路口61";
    p_shahe[61].x = 585;
    p_shahe[61].y = 315;
    castShahe["路口61"] = 61;
    castShahe["校车点"] = 61;

    p_shahe[62].id = 62;
    p_shahe[62].name = "路口62";
    p_shahe[62].x = 585;
    p_shahe[62].y = 350;
    castShahe["路口62"] = 62;

    p_shahe[63].id = 63;
    p_shahe[63].name = "路口63";
    p_shahe[63].x = 585;
    p_shahe[63].y = 390;
    castShahe["路口63"] = 63;

    p_shahe[64].id = 64;
    p_shahe[64].name = "路口64";
    p_shahe[64].x = 585;
    p_shahe[64].y = 435;
    castShahe["路口64"] = 64;

    p_shahe[65].id = 65;
    p_shahe[65].name = "N教学楼";
    p_shahe[65].x = 690;
    p_shahe[65].y = 350;
    castShahe["N教学楼"] = 65;
    
    castShahe["N101"] = 65;
    castShahe["N102"] = 65;
    castShahe["N103"] = 65;
    castShahe["N104"] = 65;
    castShahe["N105"] = 65;
    castShahe["N201"] = 65;
    castShahe["N202"] = 65;
    castShahe["N203"] = 65;
    castShahe["N204"] = 65;
    castShahe["N205"] = 65;
    castShahe["N206"] = 65;
    castShahe["N207"] = 65;
    castShahe["N208"] = 65;
    castShahe["N209"] = 65;
    castShahe["N210"] = 65;


    p_shahe[66].id = 66;
    p_shahe[66].name = "报告厅";
    p_shahe[66].x = 690;
    p_shahe[66].y = 390;
    castShahe["报告厅"] = 66;

    p_shahe[67].id = 67;
    p_shahe[67].name = "S教学楼";
    p_shahe[67].x = 690;
    p_shahe[67].y = 435;
    castShahe["S教学楼"] = 67;
   
    castShahe["S101"] = 67;
    castShahe["S102"] = 67;
    castShahe["S103"] = 67;
    castShahe["S104"] = 67;
    castShahe["S105"] = 67;
    castShahe["S201"] = 67;
    castShahe["S202"] = 67;
    castShahe["S203"] = 67;
    castShahe["S204"] = 67;
    castShahe["S205"] = 67;
    castShahe["S206"] = 67;
    castShahe["S207"] = 67;
    castShahe["S208"] = 67;
    castShahe["S209"] = 67;
    castShahe["S210"] = 67;

    p_shahe[68].id = 68;
    p_shahe[68].name = "路口68";
    p_shahe[68].x = 785;
    p_shahe[68].y = 370;
    castShahe["路口68"] = 68;

    p_shahe[70].id = 70;
    p_shahe[70].name = "路口70";
    p_shahe[70].x = 785;
    p_shahe[70].y = 505;
    castShahe["路口70"] = 70;

    p_shahe[72].id = 72;
    p_shahe[72].name = "实验楼S2";
    p_shahe[72].x = 850;
    p_shahe[72].y = 505;
    castShahe["实验楼S2"] = 72;

    p_shahe[69].id = 69;
    p_shahe[69].name = "实验楼S3";
    p_shahe[69].x = 875;
    p_shahe[69].y = 505;
    castShahe["实验楼S3"] = 69;

    p_shahe[71].id = 71;
    p_shahe[71].name = "教室楼S1";
    p_shahe[71].x = 860;
    p_shahe[71].y = 370;
    castShahe["教室楼S1"] = 71;

    p_shahe[73].id = 73;
    p_shahe[73].name = "路口73";
    p_shahe[73].x = 80;
    p_shahe[73].y = 315;
    castShahe["路口73"] = 73;

    p_shahe[74].id = 74;
    p_shahe[74].name = "快递站";
    p_shahe[74].x = 80;
    p_shahe[74].y = 275;
    castShahe["快递站"] = 74;

    // 对边进行初始化：自己到自己都是0，不通就是inf
    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            if (i == j)
            {
                e_shahe[i][j].dis = 0;
                e_shahe[i][j].timeDis = 0;
                e_shahe[i][j].bikeDis = 0;
            }
            else
            {
                e_shahe[i][j].dis = inf;
                e_shahe[i][j].timeDis = inf;
                e_shahe[i][j].bikeDis = inf;
            }
            e_shahe[i][j].crowd = 1;
            e_shahe[i][j].bicycle = true;
        }
    }

    // 沙河所有的边
    e_shahe[1][73].tongxing = 1;                       //通行情况
    e_shahe[1][73].dir = 1;                            //水平竖直
    e_shahe[1][73].dis = p_shahe[73].x - p_shahe[1].x; //距离
    e_shahe[1][73].crowd = 1;
    e_shahe[1][73].bicycle = 1; //自行车

    e_shahe[73][2].tongxing = 1;                       //通行情况
    e_shahe[73][2].dir = 1;                            //水平竖直
    e_shahe[73][2].dis = p_shahe[2].x - p_shahe[73].x; //距离
    e_shahe[73][2].crowd = 1;
    e_shahe[73][2].bicycle = 1; //自行车

    e_shahe[2][17].tongxing = 1;                       //通行情况
    e_shahe[2][17].dir = 1;                            //水平竖直
    e_shahe[2][17].dis = p_shahe[17].x - p_shahe[2].x; //距离
    e_shahe[2][17].crowd = 1;
    e_shahe[2][17].bicycle = 1; //自行车

    e_shahe[17][41].tongxing = 1;                        //通行情况
    e_shahe[17][41].dir = 1;                             //水平竖直
    e_shahe[17][41].dis = p_shahe[41].x - p_shahe[17].x; //距离
    e_shahe[17][41].crowd = 1;
    e_shahe[17][41].bicycle = 1; //自行车

    e_shahe[41][61].tongxing = 1;                        //通行情况
    e_shahe[41][61].dir = 1;                             //水平竖直
    e_shahe[41][61].dis = p_shahe[61].x - p_shahe[41].x; //距离
    e_shahe[41][61].crowd = 1;
    e_shahe[41][61].bicycle = 1; //自行车

    e_shahe[61][58].tongxing = 1;                        //通行情况
    e_shahe[61][58].dir = 1;                             //水平竖直
    e_shahe[61][58].dis = p_shahe[58].x - p_shahe[61].x; //距离
    e_shahe[61][58].crowd = 1;
    e_shahe[61][58].bicycle = 1; //自行车

    e_shahe[58][59].tongxing = 1;                        //通行情况
    e_shahe[58][59].dir = 1;                             //水平竖直
    e_shahe[58][59].dis = p_shahe[59].x - p_shahe[58].x; //距离
    e_shahe[58][59].crowd = 1;
    e_shahe[58][59].bicycle = 1; //自行车

    e_shahe[6][7].tongxing = 1;                      //通行情况
    e_shahe[6][7].dir = 1;                           //水平竖直
    e_shahe[6][7].dis = p_shahe[7].x - p_shahe[6].x; //距离
    e_shahe[6][7].crowd = 0.5;
    e_shahe[6][7].bicycle = 1; //自行车

    e_shahe[7][21].tongxing = 1;                       //通行情况
    e_shahe[7][21].dir = 1;                            //水平竖直
    e_shahe[7][21].dis = p_shahe[21].x - p_shahe[7].x; //距离
    e_shahe[7][21].crowd = 0.5;
    e_shahe[7][21].bicycle = 1; //自行车

    e_shahe[21][25].tongxing = 1;                        //通行情况
    e_shahe[21][25].dir = 1;                             //水平竖直
    e_shahe[21][25].dis = p_shahe[25].x - p_shahe[21].x; //距离
    e_shahe[21][25].crowd = 0.5;
    e_shahe[21][25].bicycle = 1; //自行车

    e_shahe[25][26].tongxing = 1;                        //通行情况
    e_shahe[25][26].dir = 1;                             //水平竖直
    e_shahe[25][26].dis = p_shahe[26].x - p_shahe[25].x; //距离
    e_shahe[25][26].crowd = 0.5;
    e_shahe[25][26].bicycle = 1; //自行车

    e_shahe[26][51].tongxing = 1;                        //通行情况
    e_shahe[26][51].dir = 1;                             //水平竖直
    e_shahe[26][51].dis = p_shahe[51].x - p_shahe[26].x; //距离
    e_shahe[26][51].crowd = 0.5;
    e_shahe[26][51].bicycle = 1; //自行车

    e_shahe[15][14].tongxing = 1;                        //通行情况
    e_shahe[15][14].dir = 1;                             //水平竖直
    e_shahe[15][14].dis = p_shahe[14].x - p_shahe[15].x; //距离
    e_shahe[15][14].crowd = 0.1;
    e_shahe[15][14].bicycle = 1; //自行车

    e_shahe[14][16].tongxing = 1;                        //通行情况
    e_shahe[14][16].dir = 1;                             //水平竖直
    e_shahe[14][16].dis = p_shahe[16].x - p_shahe[14].x; //距离
    e_shahe[14][16].crowd = 0.1;
    e_shahe[14][16].bicycle = 0; //自行车

    e_shahe[16][29].tongxing = 1;                        //通行情况
    e_shahe[16][29].dir = 1;                             //水平竖直
    e_shahe[16][29].dis = p_shahe[29].x - p_shahe[16].x; //距离
    e_shahe[16][29].crowd = 0.1;
    e_shahe[16][29].bicycle = 1; //自行车

    e_shahe[29][42].tongxing = 1;                        //通行情况
    e_shahe[29][42].dir = 1;                             //水平竖直
    e_shahe[29][42].dis = p_shahe[42].x - p_shahe[29].x; //距离
    e_shahe[29][42].crowd = 0.1;
    e_shahe[29][42].bicycle = 0; //自行车

    e_shahe[42][45].tongxing = 1;                        //通行情况
    e_shahe[42][45].dir = 1;                             //水平竖直
    e_shahe[42][45].dis = p_shahe[45].x - p_shahe[42].x; //距离
    e_shahe[42][45].crowd = 0.1;
    e_shahe[42][45].bicycle = 1; //自行车

    e_shahe[45][47].tongxing = 1;                        //通行情况
    e_shahe[45][47].dir = 1;                             //水平竖直
    e_shahe[45][47].dis = p_shahe[47].x - p_shahe[45].x; //距离
    e_shahe[45][47].crowd = 0.1;
    e_shahe[45][47].bicycle = 1; //自行车

    e_shahe[47][50].tongxing = 1;                        //通行情况
    e_shahe[47][50].dir = 1;                             //水平竖直
    e_shahe[47][50].dis = p_shahe[50].x - p_shahe[47].x; //距离
    e_shahe[47][50].crowd = 0.1;
    e_shahe[47][50].bicycle = 0; //自行车

    e_shahe[62][65].tongxing = 1;                        //通行情况
    e_shahe[62][65].dir = 1;                             //水平竖直
    e_shahe[62][65].dis = p_shahe[65].x - p_shahe[62].x; //距离
    e_shahe[62][65].crowd = 1;
    e_shahe[62][65].bicycle = 1; //自行车

    e_shahe[63][66].tongxing = 1;                        //通行情况
    e_shahe[63][66].dir = 1;                             //水平竖直
    e_shahe[63][66].dis = p_shahe[66].x - p_shahe[63].x; //距离
    e_shahe[63][66].crowd = 1;
    e_shahe[63][66].bicycle = 1; //自行车

    e_shahe[64][67].tongxing = 1;                        //通行情况
    e_shahe[64][67].dir = 1;                             //水平竖直
    e_shahe[64][67].dis = p_shahe[67].x - p_shahe[64].x; //距离
    e_shahe[64][67].crowd = 1;
    e_shahe[64][67].bicycle = 1; //自行车

    e_shahe[68][71].tongxing = 1;                        //通行情况
    e_shahe[68][71].dir = 1;                             //水平竖直
    e_shahe[68][71].dis = p_shahe[71].x - p_shahe[68].x; //距离
    e_shahe[68][71].crowd = 1;
    e_shahe[68][71].bicycle = 1; //自行车

    e_shahe[70][72].tongxing = 1;                        //通行情况
    e_shahe[70][72].dir = 1;                             //水平竖直
    e_shahe[70][72].dis = p_shahe[72].x - p_shahe[70].x; //距离
    e_shahe[70][72].crowd = 1;
    e_shahe[70][72].bicycle = 1; //自行车

    e_shahe[72][69].tongxing = 1;                        //通行情况
    e_shahe[72][69].dir = 1;                             //水平竖直
    e_shahe[72][69].dis = p_shahe[69].x - p_shahe[72].x; //距离
    e_shahe[72][69].crowd = 1;
    e_shahe[72][69].bicycle = 1; //自行车

    e_shahe[8][10].tongxing = 1;                       //通行情况
    e_shahe[8][10].dir = 1;                            //水平竖直
    e_shahe[8][10].dis = p_shahe[10].x - p_shahe[8].x; //距离
    e_shahe[8][10].crowd = 1;
    e_shahe[8][10].bicycle = 1; //自行车

    e_shahe[9][20].tongxing = 1;                       //通行情况
    e_shahe[9][20].dir = 1;                            //水平竖直
    e_shahe[9][20].dis = p_shahe[20].x - p_shahe[9].x; //距离
    e_shahe[9][20].crowd = 0.5;
    e_shahe[9][20].bicycle = 1; //自行车

    e_shahe[31][32].tongxing = 1;                        //通行情况
    e_shahe[31][32].dir = 1;                             //水平竖直
    e_shahe[31][32].dis = p_shahe[32].x - p_shahe[31].x; //距离
    e_shahe[31][32].crowd = 1;
    e_shahe[31][32].bicycle = 1; //自行车

    e_shahe[40][33].tongxing = 1;                        //通行情况
    e_shahe[40][33].dir = 1;                             //水平竖直
    e_shahe[40][33].dis = p_shahe[33].x - p_shahe[40].x; //距离
    e_shahe[40][33].crowd = 1;
    e_shahe[40][33].bicycle = 1; //自行车

    e_shahe[39][34].tongxing = 1;                        //通行情况
    e_shahe[39][34].dir = 1;                             //水平竖直
    e_shahe[39][34].dis = p_shahe[34].x - p_shahe[39].x; //距离
    e_shahe[39][34].crowd = 1;
    e_shahe[39][34].bicycle = 1; //自行车

    e_shahe[38][35].tongxing = 1;                        //通行情况
    e_shahe[38][35].dir = 1;                             //水平竖直
    e_shahe[38][35].dis = p_shahe[35].x - p_shahe[38].x; //距离
    e_shahe[38][35].crowd = 1;
    e_shahe[38][35].bicycle = 1; //自行车

    e_shahe[37][36].tongxing = 1;                        //通行情况
    e_shahe[37][36].dir = 1;                             //水平竖直
    e_shahe[37][36].dis = p_shahe[36].x - p_shahe[37].x; //距离
    e_shahe[37][36].crowd = 1;
    e_shahe[37][36].bicycle = 1; //自行车

    e_shahe[4][3].tongxing = 1;                      //通行情况
    e_shahe[4][3].dir = 1;                           //水平竖直
    e_shahe[4][3].dis = p_shahe[3].x - p_shahe[4].x; //距离
    e_shahe[4][3].crowd = 1;
    e_shahe[4][3].bicycle = 1; //自行车

    e_shahe[27][52].tongxing = 1;                        //通行情况
    e_shahe[27][52].dir = 1;                             //水平竖直
    e_shahe[27][52].dis = p_shahe[52].x - p_shahe[27].x; //距离
    e_shahe[27][52].crowd = 0.125;
    e_shahe[27][52].bicycle = 1; //自行车

    e_shahe[24][27].tongxing = 1;                        //通行情况
    e_shahe[24][27].dir = 1;                             //水平竖直
    e_shahe[24][27].dis = p_shahe[27].x - p_shahe[24].x; //距离
    e_shahe[24][27].crowd = 0.125;
    e_shahe[24][27].bicycle = 1; //自行车

    e_shahe[22][24].tongxing = 1;                        //通行情况
    e_shahe[22][24].dir = 1;                             //水平竖直
    e_shahe[22][24].dis = p_shahe[24].x - p_shahe[22].x; //距离
    e_shahe[22][24].crowd = 0.125;
    e_shahe[22][24].bicycle = 1; //自行车

    e_shahe[19][22].tongxing = 1;                        //通行情况
    e_shahe[19][22].dir = 1;                             //水平竖直
    e_shahe[19][22].dis = p_shahe[22].x - p_shahe[19].x; //距离
    e_shahe[19][22].crowd = 0.125;
    e_shahe[19][22].bicycle = 1; //自行车

    e_shahe[13][19].tongxing = 1;                        //通行情况
    e_shahe[13][19].dir = 1;                             //水平竖直
    e_shahe[13][19].dis = p_shahe[19].x - p_shahe[13].x; //距离
    e_shahe[13][19].crowd = 0.25;
    e_shahe[13][19].bicycle = 1; //自行车

    e_shahe[12][13].tongxing = 1;                        //通行情况
    e_shahe[12][13].dir = 1;                             //水平竖直
    e_shahe[12][13].dis = p_shahe[13].x - p_shahe[12].x; //距离
    e_shahe[12][13].crowd = 0.25;
    e_shahe[12][13].bicycle = 1; //自行车

    e_shahe[5][12].tongxing = 1;                       //通行情况
    e_shahe[5][12].dir = 1;                            //水平竖直
    e_shahe[5][12].dis = p_shahe[12].x - p_shahe[5].x; //距离
    e_shahe[5][12].crowd = 0.25;
    e_shahe[5][12].bicycle = 1; //自行车

    e_shahe[53][54].tongxing = 1;                        //通行情况
    e_shahe[53][54].dir = 1;                             //水平竖直
    e_shahe[53][54].dis = p_shahe[54].x - p_shahe[53].x; //距离
    e_shahe[53][54].crowd = 0.5;
    e_shahe[53][54].bicycle = 1; //自行车

    e_shahe[52][53].tongxing = 1;                        //通行情况
    e_shahe[52][53].dir = 1;                             //水平竖直
    e_shahe[52][53].dis = p_shahe[53].x - p_shahe[52].x; //距离
    e_shahe[52][53].crowd = 0.5;
    e_shahe[52][53].bicycle = 1; //自行车

    e_shahe[43][44].tongxing = 1;                        //通行情况
    e_shahe[43][44].dir = 1;                             //水平竖直
    e_shahe[43][44].dis = p_shahe[44].x - p_shahe[43].x; //距离
    e_shahe[43][44].crowd = 1;
    e_shahe[43][44].bicycle = 1; //自行车

    e_shahe[3][11].tongxing = 1;                       //通行情况
    e_shahe[3][11].dir = 1;                            //水平竖直
    e_shahe[3][11].dis = p_shahe[11].x - p_shahe[3].x; //距离
    e_shahe[3][11].crowd = 0.5;
    e_shahe[3][11].bicycle = 1; //自行车

    e_shahe[55][60].tongxing = 1;                        //通行情况
    e_shahe[55][60].dir = 1;                             //水平竖直
    e_shahe[55][60].dis = p_shahe[60].x - p_shahe[55].x; //距离
    e_shahe[55][60].crowd = 0.5;
    e_shahe[55][60].bicycle = 1; //自行车

    e_shahe[54][55].tongxing = 1;                        //通行情况
    e_shahe[54][55].dir = 1;                             //水平竖直
    e_shahe[54][55].dis = p_shahe[55].x - p_shahe[54].x; //距离
    e_shahe[54][55].crowd = 0.2;
    e_shahe[54][55].bicycle = 1; //自行车

    /*----------------------------------------------------------------------------------------------------------------------*/
    e_shahe[74][73].tongxing = 1;                        //通行情况
    e_shahe[74][73].dir = 0;                             //水平竖直
    e_shahe[74][73].dis = p_shahe[73].y - p_shahe[74].y; //距离
    e_shahe[74][73].crowd = 1;
    e_shahe[74][73].bicycle = 1; //自行车

    e_shahe[6][8].tongxing = 1;                      //通行情况
    e_shahe[6][8].dir = 0;                           //水平竖直
    e_shahe[6][8].dis = p_shahe[8].y - p_shahe[6].y; //距离
    e_shahe[6][8].crowd = 0.25;
    e_shahe[6][8].bicycle = 1; //自行车

    e_shahe[8][5].tongxing = 1;                      //通行情况
    e_shahe[8][5].dir = 0;                           //水平竖直
    e_shahe[8][5].dis = p_shahe[5].y - p_shahe[8].y; //距离
    e_shahe[8][5].crowd = 0.25;
    e_shahe[8][5].bicycle = 1; //自行车

    e_shahe[15][2].tongxing = 1;                       //通行情况
    e_shahe[15][2].dir = 0;                            //水平竖直
    e_shahe[15][2].dis = p_shahe[2].y - p_shahe[15].y; //距离
    e_shahe[15][2].crowd = 0.25;
    e_shahe[15][2].bicycle = 1; //自行车

    e_shahe[3][15].tongxing = 1;                       //通行情况
    e_shahe[3][15].dir = 0;                            //水平竖直
    e_shahe[3][15].dis = p_shahe[15].y - p_shahe[3].y; //距离
    e_shahe[3][15].crowd = 0.25;
    e_shahe[3][15].bicycle = 1; //自行车

    e_shahe[5][3].tongxing = 1;                      //通行情况
    e_shahe[5][3].dir = 0;                           //水平竖直
    e_shahe[5][3].dis = p_shahe[3].y - p_shahe[5].y; //距离
    e_shahe[5][3].crowd = 0.25;
    e_shahe[5][3].bicycle = 1; //自行车

    e_shahe[2][31].tongxing = 1;                       //通行情况
    e_shahe[2][31].dir = 0;                            //水平竖直
    e_shahe[2][31].dis = p_shahe[31].y - p_shahe[2].y; //距离
    e_shahe[2][31].crowd = 1;
    e_shahe[2][31].bicycle = 1; //自行车

    e_shahe[35][36].tongxing = 1;                        //通行情况
    e_shahe[35][36].dir = 0;                             //水平竖直
    e_shahe[35][36].dis = p_shahe[36].y - p_shahe[35].y; //距离
    e_shahe[35][36].crowd = 0.2;
    e_shahe[35][36].bicycle = 1; //自行车

    e_shahe[34][35].tongxing = 1;                        //通行情况
    e_shahe[34][35].dir = 0;                             //水平竖直
    e_shahe[34][35].dis = p_shahe[35].y - p_shahe[34].y; //距离
    e_shahe[34][35].crowd = 0.2;
    e_shahe[34][35].bicycle = 1; //自行车

    e_shahe[33][34].tongxing = 1;                        //通行情况
    e_shahe[33][34].dir = 0;                             //水平竖直
    e_shahe[33][34].dis = p_shahe[34].y - p_shahe[33].y; //距离
    e_shahe[33][34].crowd = 0.2;
    e_shahe[33][34].bicycle = 1; //自行车

    e_shahe[17][33].tongxing = 1;                        //通行情况
    e_shahe[17][33].dir = 0;                             //水平竖直
    e_shahe[17][33].dis = p_shahe[33].y - p_shahe[17].y; //距离
    e_shahe[17][33].crowd = 0.2;
    e_shahe[17][33].bicycle = 1; //自行车

    e_shahe[16][17].tongxing = 1;                        //通行情况
    e_shahe[16][17].dir = 0;                             //水平竖直
    e_shahe[16][17].dis = p_shahe[17].y - p_shahe[16].y; //距离
    e_shahe[16][17].crowd = 0.2;
    e_shahe[16][17].bicycle = 1; //自行车

    e_shahe[18][16].tongxing = 1;                        //通行情况
    e_shahe[18][16].dir = 0;                             //水平竖直
    e_shahe[18][16].dis = p_shahe[16].y - p_shahe[18].y; //距离
    e_shahe[18][16].crowd = 0.2;
    e_shahe[18][16].bicycle = 1; //自行车

    e_shahe[19][18].tongxing = 1;                        //通行情况
    e_shahe[19][18].dir = 0;                             //水平竖直
    e_shahe[19][18].dis = p_shahe[18].y - p_shahe[19].y; //距离
    e_shahe[19][18].crowd = 0.2;
    e_shahe[19][18].bicycle = 1; //自行车

    e_shahe[20][19].tongxing = 1;                        //通行情况
    e_shahe[20][19].dir = 0;                             //水平竖直
    e_shahe[20][19].dis = p_shahe[19].y - p_shahe[20].y; //距离
    e_shahe[20][19].crowd = 0.2;
    e_shahe[20][19].bicycle = 1; //自行车

    e_shahe[21][20].tongxing = 1;                        //通行情况
    e_shahe[21][20].dir = 0;                             //水平竖直
    e_shahe[21][20].dis = p_shahe[20].y - p_shahe[21].y; //距离
    e_shahe[21][20].crowd = 0.2;
    e_shahe[21][20].bicycle = 1; //自行车

    e_shahe[7][9].tongxing = 1;                      //通行情况
    e_shahe[7][9].dir = 0;                           //水平竖直
    e_shahe[7][9].dis = p_shahe[9].y - p_shahe[7].y; //距离
    e_shahe[7][9].crowd = 1;
    e_shahe[7][9].bicycle = 1; //自行车

    e_shahe[63][64].tongxing = 1;                        //通行情况
    e_shahe[63][64].dir = 0;                             //水平竖直
    e_shahe[63][64].dis = p_shahe[64].y - p_shahe[63].y; //距离
    e_shahe[63][64].crowd = 1;
    e_shahe[63][64].bicycle = 1; //自行车

    e_shahe[62][63].tongxing = 1;                        //通行情况
    e_shahe[62][63].dir = 0;                             //水平竖直
    e_shahe[62][63].dis = p_shahe[63].y - p_shahe[62].y; //距离
    e_shahe[62][63].crowd = 1;
    e_shahe[62][63].bicycle = 1; //自行车

    e_shahe[61][62].tongxing = 1;                        //通行情况
    e_shahe[61][62].dir = 0;                             //水平竖直
    e_shahe[61][62].dis = p_shahe[62].y - p_shahe[61].y; //距离
    e_shahe[61][62].crowd = 0.25;
    e_shahe[61][62].bicycle = 1; //自行车

    e_shahe[50][61].tongxing = 1;                        //通行情况
    e_shahe[50][61].dir = 0;                             //水平竖直
    e_shahe[50][61].dis = p_shahe[61].y - p_shahe[50].y; //距离
    e_shahe[50][61].crowd = 0.25;
    e_shahe[50][61].bicycle = 1; //自行车

    e_shahe[52][50].tongxing = 1;                        //通行情况
    e_shahe[52][50].dir = 0;                             //水平竖直
    e_shahe[52][50].dis = p_shahe[50].y - p_shahe[52].y; //距离
    e_shahe[52][50].crowd = 0.25;
    e_shahe[52][50].bicycle = 1; //自行车

    e_shahe[51][52].tongxing = 1;                        //通行情况
    e_shahe[51][52].dir = 0;                             //水平竖直
    e_shahe[51][52].dis = p_shahe[52].y - p_shahe[51].y; //距离
    e_shahe[51][52].crowd = 0.25;
    e_shahe[51][52].bicycle = 1; //自行车

    e_shahe[57][58].tongxing = 1;                        //通行情况
    e_shahe[57][58].dir = 0;                             //水平竖直
    e_shahe[57][58].dis = p_shahe[58].y - p_shahe[57].y; //距离
    e_shahe[57][58].crowd = 1;
    e_shahe[57][58].bicycle = 1; //自行车

    e_shahe[54][57].tongxing = 1;                        //通行情况
    e_shahe[54][57].dir = 0;                             //水平竖直
    e_shahe[54][57].dis = p_shahe[57].y - p_shahe[54].y; //距离
    e_shahe[54][57].crowd = 1;
    e_shahe[54][57].bicycle = 1; //自行车

    e_shahe[68][70].tongxing = 1;                        //通行情况
    e_shahe[68][70].dir = 0;                             //水平竖直
    e_shahe[68][70].dis = p_shahe[70].y - p_shahe[68].y; //距离
    e_shahe[68][70].crowd = 0.25;
    e_shahe[68][70].bicycle = 1; //自行车

    e_shahe[59][68].tongxing = 1;                        //通行情况
    e_shahe[59][68].dir = 0;                             //水平竖直
    e_shahe[59][68].dis = p_shahe[68].y - p_shahe[59].y; //距离
    e_shahe[59][68].crowd = 0.25;
    e_shahe[59][68].bicycle = 1; //自行车

    e_shahe[60][59].tongxing = 1;                        //通行情况
    e_shahe[60][59].dir = 0;                             //水平竖直
    e_shahe[60][59].dis = p_shahe[59].y - p_shahe[60].y; //距离
    e_shahe[60][59].crowd = 0.25;
    e_shahe[60][59].bicycle = 0; //自行车

    e_shahe[48][49].tongxing = 1;                        //通行情况
    e_shahe[48][49].dir = 0;                             //水平竖直
    e_shahe[48][49].dis = p_shahe[49].y - p_shahe[48].y; //距离
    e_shahe[48][49].crowd = 0.5;
    e_shahe[48][49].bicycle = 0; //自行车

    e_shahe[47][48].tongxing = 1;                        //通行情况
    e_shahe[47][48].dir = 0;                             //水平竖直
    e_shahe[47][48].dis = p_shahe[48].y - p_shahe[47].y; //距离
    e_shahe[47][48].crowd = 0.5;
    e_shahe[47][48].bicycle = 0; //自行车

    e_shahe[45][46].tongxing = 1;                        //通行情况
    e_shahe[45][46].dir = 0;                             //水平竖直
    e_shahe[45][46].dis = p_shahe[46].y - p_shahe[45].y; //距离
    e_shahe[45][46].crowd = 1;
    e_shahe[45][46].bicycle = 0; //自行车

    e_shahe[27][28].tongxing = 1;                        //通行情况
    e_shahe[27][28].dir = 0;                             //水平竖直
    e_shahe[27][28].dis = p_shahe[28].y - p_shahe[27].y; //距离
    e_shahe[27][28].crowd = 0.5;
    e_shahe[27][28].bicycle = 0; //自行车

    e_shahe[22][23].tongxing = 1;                        //通行情况
    e_shahe[22][23].dir = 0;                             //水平竖直
    e_shahe[22][23].dis = p_shahe[23].y - p_shahe[22].y; //距离
    e_shahe[22][23].crowd = 1;
    e_shahe[22][23].bicycle = 0; //自行车

    e_shahe[43][42].tongxing = 1;                        //通行情况
    e_shahe[43][42].dir = 0;                             //水平竖直
    e_shahe[43][42].dis = p_shahe[42].y - p_shahe[43].y; //距离
    e_shahe[43][42].crowd = 0.25;
    e_shahe[43][42].bicycle = 1; //自行车

    e_shahe[24][43].tongxing = 1;                        //通行情况
    e_shahe[24][43].dir = 0;                             //水平竖直
    e_shahe[24][43].dis = p_shahe[43].y - p_shahe[24].y; //距离
    e_shahe[24][43].crowd = 0.25;
    e_shahe[24][43].bicycle = 1; //自行车

    e_shahe[25][24].tongxing = 1;                        //通行情况
    e_shahe[25][24].dir = 0;                             //水平竖直
    e_shahe[25][24].dis = p_shahe[24].y - p_shahe[25].y; //距离
    e_shahe[25][24].crowd = 0.25;
    e_shahe[25][24].bicycle = 1; //自行车

    e_shahe[42][41].tongxing = 1;                        //通行情况
    e_shahe[42][41].dir = 0;                             //水平竖直
    e_shahe[42][41].dis = p_shahe[41].y - p_shahe[42].y; //距离
    e_shahe[42][41].crowd = 0.25;
    e_shahe[42][41].bicycle = 1; //自行车

    e_shahe[29][30].tongxing = 1;                        //通行情况
    e_shahe[29][30].dir = 0;                             //水平竖直
    e_shahe[29][30].dis = p_shahe[30].y - p_shahe[29].y; //距离
    e_shahe[29][30].crowd = 1;
    e_shahe[29][30].bicycle = 0; //自行车

    e_shahe[56][55].tongxing = 1;                        //通行情况
    e_shahe[56][55].dir = 0;                             //水平竖直
    e_shahe[56][55].dis = p_shahe[55].y - p_shahe[56].y; //距离
    e_shahe[56][55].crowd = 1;
    e_shahe[56][55].bicycle = 1; //自行车

    // 边调整 1.长度绝对值 2.双向 3.拥挤度统一 4.自行车道统一
    
    for (int i = 1; i < 100; i++)
    {
        for (int j = 1; j < 100; j++)
        {
            //长度绝对值
            if (e_shahe[i][j].dis < 0)
                e_shahe[i][j].dis = -e_shahe[i][j].dis;// 负边->正边（如果存在负数）

            //双向图
            if (e_shahe[i][j].dis < e_shahe[j][i].dis)
                e_shahe[j][i].dis = e_shahe[i][j].dis;

            // 拥挤度不相同，改为小的
            if (fabs(e_shahe[i][j].crowd - e_shahe[j][i].crowd) > 1e-6)
            {
                double crowd = 0;
                if (e_shahe[i][j].crowd > e_shahe[j][i].crowd)
                    crowd = e_shahe[j][i].crowd;
                else
                    crowd = e_shahe[i][j].crowd;
                e_shahe[i][j].crowd = e_shahe[j][i].crowd = crowd;
            }

            // 自行车不同，改为false
            if (e_shahe[i][j].bicycle != e_shahe[j][i].bicycle)
                e_shahe[i][j].bicycle = e_shahe[j][i].bicycle = false;
        }
    }

    // 设置 bikeDis 和 timeDis
    for (int i = 1; i < 100; i++)
    {
        for (int j = 1; j < 100; j++)
        {
            // timeDis，是 dis / crowd
            if (e_shahe[i][j].dis != inf)
                e_shahe[i][j].timeDis = (int)(e_shahe[i][j].dis / e_shahe[i][j].crowd);
            else
                e_shahe[i][j].timeDis = inf;
            // 如果有自行车道
            if (e_shahe[i][j].bicycle == true)
                e_shahe[i][j].bikeDis = e_shahe[i][j].dis;
            else
                e_shahe[i][j].bikeDis = inf;
        }
    }
    /* ---------------------------本部部分--------------------------- */
    // 本部所有的点
    p_benbu[1].id = 1;
    str = QString("南门");
    p_benbu[1].name = "南门";
    p_benbu[1].x = 60;
    p_benbu[1].y = 400;
    castBenbu[str] = 1;

    p_benbu[2].id = 2;
    str = QString("路口2");
    p_benbu[2].name = "路口2";
    p_benbu[2].x = 110;
    p_benbu[2].y = 400;
    castBenbu[str] = 2;

    p_benbu[3].id = 3;
    str = QString("路口3");
    p_benbu[3].name = "路口3";
    p_benbu[3].x = 110;
    p_benbu[3].y = 315;
    castBenbu[str] = 3;

    p_benbu[4].id = 4;
    str = QString("路口4");
    p_benbu[4].name = "路口4";
    p_benbu[4].x = 225;
    p_benbu[4].y = 315;
    castBenbu[str] = 4;

    p_benbu[5].id = 5;
    str = QString("路口5");
    p_benbu[5].name = "路口5";
    p_benbu[5].x = 320;
    p_benbu[5].y = 315;
    castBenbu[str] = 5;

    p_benbu[6].id = 6;
    str = QString("教3楼");
    p_benbu[6].name = "教3楼";
    p_benbu[6].x = 320;
    p_benbu[6].y = 295;
    castBenbu[str] = 6;

    p_benbu[7].id = 7;
    str = QString("教2楼");
    p_benbu[7].name = "教2楼";
    p_benbu[7].x = 320;
    p_benbu[7].y = 335;
    castBenbu[str] = 7;

    p_benbu[8].id = 8;
    str = QString("路口8");
    p_benbu[8].name = "路口8";
    p_benbu[8].x = 370;
    p_benbu[8].y = 315;
    castBenbu[str] = 8;

    p_benbu[9].id = 9;
    str = QString("校车点");
    p_benbu[9].name = "校车点";
    p_benbu[9].x = 370;
    p_benbu[9].y = 135;
    castBenbu[str] = 9;

    p_benbu[10].id = 10;
    str = QString("路口10");
    p_benbu[10].name = "路口10";
    p_benbu[10].x = 415;
    p_benbu[10].y = 135;
    castBenbu[str] = 10;

    p_benbu[11].id = 11;
    str = QString("西门");
    p_benbu[11].name = "西门";
    p_benbu[11].x = 415;
    p_benbu[11].y = 90;
    castBenbu[str] = 11;

    p_benbu[12].id = 12;
    str = QString("移动营业厅");
    p_benbu[12].name = "移动营业厅";
    p_benbu[12].x = 480;
    p_benbu[12].y = 135;
    castBenbu[str] = 12;

    p_benbu[13].id = 13;
    str = QString("邮局");
    p_benbu[13].name = "邮局";
    p_benbu[13].x = 545;
    p_benbu[13].y = 135;
    castBenbu[str] = 13;
    castBenbu["ATM"] = 13;
    castBenbu["鸿通楼"] = 13;

    p_benbu[14].id = 14;
    str = QString("路口14");
    p_benbu[14].name = "路口14";
    p_benbu[14].x = 590;
    p_benbu[14].y = 135;
    castBenbu[str] = 14;

    p_benbu[15].id = 15;
    str = QString("路口15");
    p_benbu[15].name = "路口15";
    p_benbu[15].x = 480;
    p_benbu[15].y = 225;
    castBenbu[str] = 15;

    p_benbu[16].id = 16;
    str = QString("教4楼");
    p_benbu[16].name = "教4楼";
    p_benbu[16].x = 510;
    p_benbu[16].y = 225;
    castBenbu[str] = 16;

    p_benbu[17].id = 17;
    str = QString("路口17");
    p_benbu[17].name = "路口17";
    p_benbu[17].x = 480;
    p_benbu[17].y = 315;
    castBenbu[str] = 17;

    p_benbu[18].id = 18;
    str = QString("教1楼");
    p_benbu[18].name = "教1楼";
    p_benbu[18].x = 480;
    p_benbu[18].y = 410;
    castBenbu[str] = 18;

    p_benbu[19].id = 19;
    str = QString("主楼");
    p_benbu[19].name = "主楼";
    p_benbu[19].x = 430;
    p_benbu[19].y = 410;
    castBenbu[str] = 19;

    p_benbu[20].id = 20;
    str = QString("路口20");
    p_benbu[20].name = "路口20";
    p_benbu[20].x = 370;
    p_benbu[20].y = 410;
    castBenbu[str] = 20;

    p_benbu[21].id = 21;
    str = QString("路口21");
    p_benbu[21].name = "路口21";
    p_benbu[21].x = 370;
    p_benbu[21].y = 495;
    castBenbu[str] = 21;

    p_benbu[22].id = 22;
    str = QString("路口22");
    p_benbu[22].name = "路口22";
    p_benbu[22].x = 480;
    p_benbu[22].y = 495;
    castBenbu[str] = 22;

    p_benbu[23].id = 23;
    str = QString("路口23");
    p_benbu[23].name = "路口23";
    p_benbu[23].x = 590;
    p_benbu[23].y = 495;
    castBenbu[str] = 23;

    p_benbu[24].id = 24;
    str = QString("行政办公楼");
    p_benbu[24].name = "行政办公楼";
    p_benbu[24].x = 590;
    p_benbu[24].y = 415;
    castBenbu[str] = 24;
    castBenbu["小白楼"] = 24;

    p_benbu[25].id = 25;
    str = QString("路口25");
    p_benbu[25].name = "路口25";
    p_benbu[25].x = 590;
    p_benbu[25].y = 315;
    castBenbu[str] = 25;

    p_benbu[26].id = 26;
    str = QString("路口26");
    p_benbu[26].name = "路口26";
    p_benbu[26].x = 565;
    p_benbu[26].y = 315;
    castBenbu[str] = 26;

    p_benbu[27].id = 27;
    str = QString("财务处后勤处");
    p_benbu[27].name = "财务处后勤处";
    p_benbu[27].x = 565;
    p_benbu[27].y = 350;
    castBenbu[str] = 27;

    p_benbu[28].id = 28;
    str = QString("学2");
    p_benbu[28].name = "学2";
    p_benbu[28].x = 590;
    p_benbu[28].y = 260;
    castBenbu[str] = 28;

    p_benbu[29].id = 29;
    str = QString("学1");
    p_benbu[29].name = "学1";
    p_benbu[29].x = 590;
    p_benbu[29].y = 180;
    castBenbu[str] = 29;

    p_benbu[30].id = 30;
    str = QString("学13");
    p_benbu[30].name = "学13";
    p_benbu[30].x = 700;
    p_benbu[30].y = 135;
    castBenbu[str] = 30;

    p_benbu[31].id = 31;
    str = QString("学3");
    p_benbu[31].name = "学3";
    p_benbu[31].x = 700;
    p_benbu[31].y = 180;
    castBenbu[str] = 31;

    p_benbu[32].id = 32;
    str = QString("学4");
    p_benbu[32].name = "学4";
    p_benbu[32].x = 700;
    p_benbu[32].y = 260;
    castBenbu[str] = 32;

    p_benbu[33].id = 33;
    str = QString("路口33");
    p_benbu[33].name = "路口33";
    p_benbu[33].x = 700;
    p_benbu[33].y = 315;
    castBenbu[str] = 33;

    p_benbu[34].id = 34;
    str = QString("路口34");
    p_benbu[34].name = "路口34";
    p_benbu[34].x = 740;
    p_benbu[34].y = 315;
    castBenbu[str] = 34;

    p_benbu[35].id = 35;
    str = QString("学8");
    p_benbu[35].name = "学8";
    p_benbu[35].x = 740;
    p_benbu[35].y = 260;
    castBenbu[str] = 35;

    p_benbu[36].id = 36;
    str = QString("学5");
    p_benbu[36].name = "学5";
    p_benbu[36].x = 740;
    p_benbu[36].y = 180;
    castBenbu[str] = 36;

    p_benbu[37].id = 37;
    str = QString("路口37");
    p_benbu[37].name = "路口37";
    p_benbu[37].x = 740;
    p_benbu[37].y = 135;
    castBenbu[str] = 37;

    p_benbu[38].id = 38;
    str = QString("青年公寓");
    p_benbu[38].name = "青年公寓";
    p_benbu[38].x = 800;
    p_benbu[38].y = 135;
    castBenbu[str] = 38;

    p_benbu[39].id = 39;
    str = QString("路口39");
    p_benbu[39].name = "路口39";
    p_benbu[39].x = 590;
    p_benbu[39].y = 220;
    castBenbu[str] = 39;

    p_benbu[40].id = 40;
    str = QString("路口40");
    p_benbu[40].name = "路口40";
    p_benbu[40].x = 700;
    p_benbu[40].y = 220;
    castBenbu[str] = 40;

    p_benbu[41].id = 41;
    str = QString("路口41");
    p_benbu[41].name = "路口41";
    p_benbu[41].x = 740;
    p_benbu[41].y = 220;
    castBenbu[str] = 41;

    p_benbu[42].id = 42;
    str = QString("留学生公寓");
    p_benbu[42].name = "留学生公寓";
    p_benbu[42].x = 800;
    p_benbu[42].y = 220;
    castBenbu[str] = 42;

    p_benbu[43].id = 43;
    str = QString("路口43");
    p_benbu[43].name = "路口43";
    p_benbu[43].x = 825;
    p_benbu[43].y = 135;
    castBenbu[str] = 43;

    p_benbu[44].id = 44;
    str = QString("学9");
    p_benbu[44].name = "学9";
    p_benbu[44].x = 825;
    p_benbu[44].y = 180;
    castBenbu[str] = 44;

    p_benbu[45].id = 45;
    str = QString("路口45");
    p_benbu[45].name = "路口45";
    p_benbu[45].x = 825;
    p_benbu[45].y = 220;
    castBenbu[str] = 45;

    p_benbu[46].id = 46;
    str = QString("教9");
    p_benbu[46].name = "教9";
    p_benbu[46].x = 850;
    p_benbu[46].y = 220;
    castBenbu[str] = 46;

    p_benbu[47].id = 47;
    str = QString("路口47");
    p_benbu[47].name = "路口47";
    p_benbu[47].x = 865;
    p_benbu[47].y = 220;
    castBenbu[str] = 47;

    p_benbu[48].id = 48;
    str = QString("北邮科技酒店");
    p_benbu[48].name = "北邮科技酒店";
    p_benbu[48].x = 865;
    p_benbu[48].y = 145;
    castBenbu[str] = 48;

    p_benbu[49].id = 49;
    str = QString("学10公寓");
    p_benbu[49].name = "学10公寓";
    p_benbu[49].x = 825;
    p_benbu[49].y = 260;
    castBenbu[str] = 49;


    p_benbu[50].id = 50;
    str = QString("路口50");
    p_benbu[50].name = "路口50";
    p_benbu[50].x = 825;
    p_benbu[50].y = 315;
    castBenbu[str] = 50;

    p_benbu[51].id = 51;
    str = QString("路口51");
    p_benbu[51].name = "路口51";
    p_benbu[51].x = 800;
    p_benbu[51].y = 315;
    castBenbu[str] = 51;

    p_benbu[52].id = 52;
    str = QString("综合食堂");
    p_benbu[52].name = "综合食堂";
    p_benbu[52].x = 800;
    p_benbu[52].y = 290;
    castBenbu[str] = 52;

    p_benbu[53].id = 53;
    str = QString("路口53");
    p_benbu[53].name = "路口53";
    p_benbu[53].x = 775;
    p_benbu[53].y = 315;
    castBenbu[str] = 53;

    p_benbu[54].id = 54;
    str = QString("学生活动中心");
    p_benbu[54].name = "学生活动中心";
    p_benbu[54].x = 775;
    p_benbu[54].y = 365;
    castBenbu[str] = 54;

    p_benbu[55].id = 55;
    str = QString("路口55");
    p_benbu[55].name = "路口55";
    p_benbu[55].x = 775;
    p_benbu[55].y = 440;
    castBenbu[str] = 55;

    p_benbu[56].id = 56;
    str = QString("路口56");
    p_benbu[56].name = "路口56";
    p_benbu[56].x = 775;
    p_benbu[56].y = 495;
    castBenbu[str] = 56;

    p_benbu[57].id = 57;
    str = QString("路口57");
    p_benbu[57].name = "路口57";
    p_benbu[57].x = 710;
    p_benbu[57].y = 495;
    castBenbu[str] = 57;

    p_benbu[58].id = 58;
    str = QString("路口58");
    p_benbu[58].name = "路口58";
    p_benbu[58].x = 710;
    p_benbu[58].y = 315;
    castBenbu[str] = 58;

    p_benbu[59].id = 59;
    str = QString("路口59");
    p_benbu[59].name = "路口59";
    p_benbu[59].x = 590;
    p_benbu[59].y = 400;
    castBenbu[str] = 59;

    p_benbu[60].id = 60;
    str = QString("图书馆");
    p_benbu[60].name = "图书馆";
    p_benbu[60].x = 655;
    p_benbu[60].y = 400;
    castBenbu[str] = 60;

    p_benbu[61].id = 61;
    str = QString("路口61");
    p_benbu[61].name = "路口61";
    p_benbu[61].x = 710;
    p_benbu[61].y = 400;
    castBenbu[str] = 61;

    p_benbu[62].id = 62;
    str = QString("篮球场");
    p_benbu[62].name = "篮球场";
    p_benbu[62].x = 625;
    p_benbu[62].y = 495;
    castBenbu[str] = 62;


    p_benbu[63].id = 63;
    str = QString("校医院");
    p_benbu[63].name = "校医院";
    p_benbu[63].x = 225;
    p_benbu[63].y = 270;
    castBenbu[str] = 63;

    p_benbu[64].id = 64;
    str = QString("零壹时光咖啡");
    p_benbu[64].name = "零壹时光咖啡";
    p_benbu[64].x = 225;
    p_benbu[64].y = 185;
    castBenbu[str] = 64;

    p_benbu[65].id = 65;
    str = QString("路口65");
    p_benbu[65].name = "路口65";
    p_benbu[65].x = 275;
    p_benbu[65].y = 315;
    castBenbu[str] = 65;

    p_benbu[66].id = 66;
    str = QString("可信网络通信协同创新中心");
    p_benbu[66].name = "可信网络通信协同创新中心";
    p_benbu[66].x = 275;
    p_benbu[66].y = 1530;
    castBenbu[str] = 66;

    p_benbu[67].id = 67;
    str = QString("路口67");
    p_benbu[67].name = "路口67";
    p_benbu[67].x = 275;
    p_benbu[67].y = 570;
    castBenbu[str] = 67;

    p_benbu[68].id = 68;
    str = QString("路口68");
    p_benbu[68].name = "路口68";
    p_benbu[68].x = 400;
    p_benbu[68].y = 570;
    castBenbu[str] = 68;

    str = QString("科学会堂");
    p_benbu[69].name = "科学会堂";
    p_benbu[69].x = 480;
    p_benbu[69].y = 535;
    castBenbu[str] = 69;

    p_benbu[70].id = 70;
    str = QString("路口70");
    p_benbu[70].name = "路口70";
    p_benbu[70].x = 480;
    p_benbu[70].y = 570;
    castBenbu[str] = 70;

    p_benbu[71].id = 71;
    str = QString("体育馆");
    p_benbu[71].name = "体育馆";
    p_benbu[71].x = 535;
    p_benbu[71].y = 570;
    castBenbu[str] = 71;
    castShahe["排球馆"] = 71;
    castShahe["网球馆"] = 71;

    p_benbu[72].id = 72;
    str = QString("路口72");
    p_benbu[72].name = "路口72";
    p_benbu[72].x = 590;
    p_benbu[72].y = 570;
    castBenbu[str] = 72;

    p_benbu[73].id = 73;
    str = QString("学29");
    p_benbu[73].name = "学29";
    p_benbu[73].x = 590;
    p_benbu[73].y = 630;
    castBenbu[str] = 73;

    p_benbu[74].id = 74;
    str = QString("东门");
    p_benbu[74].name = "东门";
    p_benbu[74].x = 590;
    p_benbu[74].y = 670;
    castBenbu[str] = 74;

    p_benbu[75].id = 75;
    str = QString("路口75");
    p_benbu[75].name = "路口75";
    p_benbu[75].x = 860;
    p_benbu[75].y = 315;
    castBenbu[str] = 75;

    p_benbu[76].id = 76;
    str = QString("经管楼");
    p_benbu[76].name = "经管楼";
    p_benbu[76].x = 860;
    p_benbu[76].y = 350;
    castBenbu[str] = 76;


    p_benbu[77].id = 77;
    str = QString("北门");
    p_benbu[77].name = "北门";
    p_benbu[77].x = 915;
    p_benbu[77].y = 315;
    castBenbu[str] = 77;

    p_benbu[78].id = 78;
    str = QString("路口78");
    p_benbu[78].name = "路口78";
    p_benbu[78].x = 850;
    p_benbu[78].y = 495;
    castBenbu[str] = 78;

    p_benbu[79].id = 79;
    str = QString("科研大楼");
    p_benbu[79].name = "科研大楼";
    p_benbu[79].x = 850;
    p_benbu[79].y = 525;
    castBenbu[str] = 79;

    p_benbu[80].id = 80;
    str = QString("家属区");
    p_benbu[80].name = "家属区";
    p_benbu[80].x = 870;
    p_benbu[80].y = 495;
    castBenbu[str] = 80;

    p_benbu[81].id = 81;
    str = QString("学6公寓");
    p_benbu[81].name = "学6公寓";
    p_benbu[81].x = 870;
    p_benbu[81].y = 450;
    castBenbu[str] = 81;

    p_benbu[82].id = 82;
    str = QString("青年教师公寓");
    p_benbu[82].name = "青年教师公寓";
    p_benbu[82].x = 850;
    p_benbu[82].y = 615;
    castBenbu[str] = 82;

    // 对边进行初始化：自己到自己都是0，不通就是inf
    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            if (i == j)
            {
                e_benbu[i][j].dis = 0;
                e_benbu[i][j].timeDis = 0;
                e_benbu[i][j].bikeDis = 0;
            }
            else
            {
                e_benbu[i][j].dis = inf;
                e_benbu[i][j].timeDis = inf;
                e_benbu[i][j].bikeDis = inf;
            }
            e_benbu[i][j].crowd = 1;
            e_benbu[i][j].bicycle = true;
        }
    }

    // 本部所有的边
    e_benbu[1][2].tongxing = 1;                      //通行情况
    e_benbu[1][2].dir = 1;                           //1水平 0竖直
    e_benbu[1][2].dis = p_benbu[2].x - p_benbu[1].x; //距离
    e_benbu[1][2].crowd = 1;
    e_benbu[1][2].bicycle = 1; //自行车

    e_benbu[5][8].tongxing = 1;                      //通行情况
    e_benbu[5][8].dir = 1;                           //1水平 0竖直
    e_benbu[5][8].dis = p_benbu[8].x - p_benbu[5].x; //距离
    e_benbu[5][8].crowd = 1;
    e_benbu[5][8].bicycle = 1; //自行车

    e_benbu[65][5].tongxing = 1;                       //通行情况
    e_benbu[65][5].dir = 1;                            //1水平 0竖直
    e_benbu[65][5].dis = p_benbu[5].x - p_benbu[65].x; //距离
    e_benbu[65][5].crowd = 1;
    e_benbu[65][5].bicycle = 1; //自行车

    e_benbu[4][65].tongxing = 1;                       //通行情况
    e_benbu[4][65].dir = 1;                            //1水平 0竖直
    e_benbu[4][65].dis = p_benbu[65].x - p_benbu[4].x; //距离
    e_benbu[4][65].crowd = 1;
    e_benbu[4][65].bicycle = 1; //自行车

    e_benbu[3][4].tongxing = 1;                      //通行情况
    e_benbu[3][4].dir = 1;                           //1水平 0竖直
    e_benbu[3][4].dis = p_benbu[4].x - p_benbu[3].x; //距离
    e_benbu[3][4].crowd = 1;
    e_benbu[3][4].bicycle = 1; //自行车

    e_benbu[33][58].tongxing = 1;                        //通行情况
    e_benbu[33][58].dir = 1;                             //1水平 0竖直
    e_benbu[33][58].dis = p_benbu[58].x - p_benbu[33].x; //距离
    e_benbu[33][58].crowd = 1;
    e_benbu[33][58].bicycle = 1; //自行车

    e_benbu[25][33].tongxing = 1;                        //通行情况
    e_benbu[25][33].dir = 1;                             //1水平 0竖直
    e_benbu[25][33].dis = p_benbu[33].x - p_benbu[25].x; //距离
    e_benbu[25][33].crowd = 1;
    e_benbu[25][33].bicycle = 1; //自行车

    e_benbu[26][25].tongxing = 1;                        //通行情况
    e_benbu[26][25].dir = 1;                             //1水平 0竖直
    e_benbu[26][25].dis = p_benbu[25].x - p_benbu[26].x; //距离
    e_benbu[26][25].crowd = 1;
    e_benbu[26][25].bicycle = 1; //自行车

    e_benbu[17][26].tongxing = 1;                        //通行情况
    e_benbu[17][26].dir = 1;                             //1水平 0竖直
    e_benbu[17][26].dis = p_benbu[26].x - p_benbu[17].x; //距离
    e_benbu[17][26].crowd = 1;
    e_benbu[17][26].bicycle = 1; //自行车

    e_benbu[8][17].tongxing = 1;                       //通行情况
    e_benbu[8][17].dir = 1;                            //1水平 0竖直
    e_benbu[8][17].dis = p_benbu[17].x - p_benbu[8].x; //距离
    e_benbu[8][17].crowd = 1;
    e_benbu[8][17].bicycle = 1; //自行车

    e_benbu[75][77].tongxing = 1;                        //通行情况
    e_benbu[75][77].dir = 1;                             //1水平 0竖直
    e_benbu[75][77].dis = p_benbu[77].x - p_benbu[75].x; //距离
    e_benbu[75][77].crowd = 1;
    e_benbu[75][77].bicycle = 1; //自行车

    e_benbu[50][75].tongxing = 1;                        //通行情况
    e_benbu[50][75].dir = 1;                             //1水平 0竖直
    e_benbu[50][75].dis = p_benbu[75].x - p_benbu[50].x; //距离
    e_benbu[50][75].crowd = 1;
    e_benbu[50][75].bicycle = 1; //自行车

    e_benbu[51][50].tongxing = 1;                        //通行情况
    e_benbu[51][50].dir = 1;                             //1水平 0竖直
    e_benbu[51][50].dis = p_benbu[50].x - p_benbu[51].x; //距离
    e_benbu[51][50].crowd = 1;
    e_benbu[51][50].bicycle = 1; //自行车

    e_benbu[53][51].tongxing = 1;                        //通行情况
    e_benbu[53][51].dir = 1;                             //1水平 0竖直
    e_benbu[53][51].dis = p_benbu[51].x - p_benbu[53].x; //距离
    e_benbu[53][51].crowd = 1;
    e_benbu[53][51].bicycle = 1; //自行车

    e_benbu[34][53].tongxing = 1;                        //通行情况
    e_benbu[34][53].dir = 1;                             //1水平 0竖直
    e_benbu[34][53].dis = p_benbu[53].x - p_benbu[34].x; //距离
    e_benbu[34][53].crowd = 1;
    e_benbu[34][53].bicycle = 1; //自行车

    e_benbu[58][34].tongxing = 1;                        //通行情况
    e_benbu[58][34].dir = 1;                             //1水平 0竖直
    e_benbu[58][34].dis = p_benbu[34].x - p_benbu[58].x; //距离
    e_benbu[58][34].crowd = 1;
    e_benbu[58][34].bicycle = 1; //自行车

    e_benbu[78][80].tongxing = 1;                        //通行情况
    e_benbu[78][80].dir = 1;                             //1水平 0竖直
    e_benbu[78][80].dis = p_benbu[80].x - p_benbu[78].x; //距离
    e_benbu[78][80].crowd = 1;
    e_benbu[78][80].bicycle = 1; //自行车

    e_benbu[56][78].tongxing = 1;                        //通行情况
    e_benbu[56][78].dir = 1;                             //1水平 0竖直
    e_benbu[56][78].dis = p_benbu[78].x - p_benbu[56].x; //距离
    e_benbu[56][78].crowd = 1;
    e_benbu[56][78].bicycle = 1; //自行车

    e_benbu[57][56].tongxing = 1;                        //通行情况
    e_benbu[57][56].dir = 1;                             //1水平 0竖直
    e_benbu[57][56].dis = p_benbu[56].x - p_benbu[57].x; //距离
    e_benbu[57][56].crowd = 0.1;
    e_benbu[57][56].bicycle = 1; //自行车

    e_benbu[62][57].tongxing = 1;                        //通行情况
    e_benbu[62][57].dir = 1;                             //1水平 0竖直
    e_benbu[62][57].dis = p_benbu[57].x - p_benbu[62].x; //距离
    e_benbu[62][57].crowd = 0.2;
    e_benbu[62][57].bicycle = 1; //自行车

    e_benbu[23][62].tongxing = 1;                        //通行情况
    e_benbu[23][62].dir = 1;                             //1水平 0竖直
    e_benbu[23][62].dis = p_benbu[62].x - p_benbu[23].x; //距离
    e_benbu[23][62].crowd = 0.2;
    e_benbu[23][62].bicycle = 1; //自行车

    e_benbu[22][23].tongxing = 1;                        //通行情况
    e_benbu[22][23].dir = 1;                             //1水平 0竖直
    e_benbu[22][23].dis = p_benbu[23].x - p_benbu[22].x; //距离
    e_benbu[22][23].crowd = 0.2;
    e_benbu[22][23].bicycle = 1; //自行车

    e_benbu[21][22].tongxing = 1;                        //通行情况
    e_benbu[21][22].dir = 1;                             //1水平 0竖直
    e_benbu[21][22].dis = p_benbu[22].x - p_benbu[21].x; //距离
    e_benbu[21][22].crowd = 0.2;
    e_benbu[21][22].bicycle = 1; //自行车

    e_benbu[71][72].tongxing = 1;                        //通行情况
    e_benbu[71][72].dir = 1;                             //1水平 0竖直
    e_benbu[71][72].dis = p_benbu[72].x - p_benbu[71].x; //距离
    e_benbu[71][72].crowd = 0.5;
    e_benbu[71][72].bicycle = 1; //自行车

    e_benbu[70][71].tongxing = 1;                        //通行情况
    e_benbu[70][71].dir = 1;                             //1水平 0竖直
    e_benbu[70][71].dis = p_benbu[71].x - p_benbu[70].x; //距离
    e_benbu[70][71].crowd = 1;
    e_benbu[70][71].bicycle = 1; //自行车

    e_benbu[68][70].tongxing = 1;                        //通行情况
    e_benbu[68][70].dir = 1;                             //1水平 0竖直
    e_benbu[68][70].dis = p_benbu[70].x - p_benbu[68].x; //距离
    e_benbu[68][70].crowd = 1;
    e_benbu[68][70].bicycle = 1; //自行车

    e_benbu[67][68].tongxing = 1;                        //通行情况
    e_benbu[67][68].dir = 1;                             //1水平 0竖直
    e_benbu[67][68].dis = p_benbu[68].x - p_benbu[67].x; //距离
    e_benbu[67][68].crowd = 1;
    e_benbu[67][68].bicycle = 1; //自行车

    e_benbu[39][40].tongxing = 1;                        //通行情况
    e_benbu[39][40].dir = 1;                             //1水平 0竖直
    e_benbu[39][40].dis = p_benbu[40].x - p_benbu[39].x; //距离
    e_benbu[39][40].crowd = 0.5;
    e_benbu[39][40].bicycle = 1; //自行车

    e_benbu[15][16].tongxing = 1;                        //通行情况
    e_benbu[15][16].dir = 1;                             //1水平 0竖直
    e_benbu[15][16].dis = p_benbu[16].x - p_benbu[15].x; //距离
    e_benbu[15][16].crowd = 0.5;
    e_benbu[15][16].bicycle = 1; //自行车

    e_benbu[38][43].tongxing = 1;                        //通行情况
    e_benbu[38][43].dir = 1;                             //1水平 0竖直
    e_benbu[38][43].dis = p_benbu[43].x - p_benbu[38].x; //距离
    e_benbu[38][43].crowd = 1;
    e_benbu[38][43].bicycle = 1; //自行车

    e_benbu[37][38].tongxing = 1;                        //通行情况
    e_benbu[37][38].dir = 1;                             //1水平 0竖直
    e_benbu[37][38].dis = p_benbu[38].x - p_benbu[37].x; //距离
    e_benbu[37][38].crowd = 1;
    e_benbu[37][38].bicycle = 1; //自行车

    e_benbu[30][37].tongxing = 1;                        //通行情况
    e_benbu[30][37].dir = 1;                             //1水平 0竖直
    e_benbu[30][37].dis = p_benbu[37].x - p_benbu[30].x; //距离
    e_benbu[30][37].crowd = 1;
    e_benbu[30][37].bicycle = 1; //自行车

    e_benbu[14][30].tongxing = 1;                        //通行情况
    e_benbu[14][30].dir = 1;                             //1水平 0竖直
    e_benbu[14][30].dis = p_benbu[30].x - p_benbu[14].x; //距离
    e_benbu[14][30].crowd = 1;
    e_benbu[14][30].bicycle = 1; //自行车

    e_benbu[13][14].tongxing = 1;                        //通行情况
    e_benbu[13][14].dir = 1;                             //1水平 0竖直
    e_benbu[13][14].dis = p_benbu[14].x - p_benbu[13].x; //距离
    e_benbu[13][14].crowd = 1;
    e_benbu[13][14].bicycle = 1; //自行车

    e_benbu[12][13].tongxing = 1;                        //通行情况
    e_benbu[12][13].dir = 1;                             //1水平 0竖直
    e_benbu[12][13].dis = p_benbu[13].x - p_benbu[12].x; //距离
    e_benbu[12][13].crowd = 0.5;
    e_benbu[12][13].bicycle = 1; //自行车

    e_benbu[10][12].tongxing = 1;                        //通行情况
    e_benbu[10][12].dir = 1;                             //1水平 0竖直
    e_benbu[10][12].dis = p_benbu[12].x - p_benbu[10].x; //距离
    e_benbu[10][12].crowd = 1;
    e_benbu[10][12].bicycle = 1; //自行车

    e_benbu[9][10].tongxing = 1;                       //通行情况
    e_benbu[9][10].dir = 1;                            //1水平 0竖直
    e_benbu[9][10].dis = p_benbu[10].x - p_benbu[9].x; //距离
    e_benbu[9][10].crowd = 0.1;
    e_benbu[9][10].bicycle = 1; //自行车

    e_benbu[19][18].tongxing = 1;                        //通行情况
    e_benbu[19][18].dir = 1;                             //1水平 0竖直
    e_benbu[19][18].dis = p_benbu[18].x - p_benbu[19].x; //距离
    e_benbu[19][18].crowd = 1;
    e_benbu[19][18].bicycle = 1; //自行车

    e_benbu[20][19].tongxing = 1;                        //通行情况
    e_benbu[20][19].dir = 1;                             //1水平 0竖直
    e_benbu[20][19].dis = p_benbu[19].x - p_benbu[20].x; //距离
    e_benbu[20][19].crowd = 1;
    e_benbu[20][19].bicycle = 1; //自行车

    e_benbu[46][47].tongxing = 1;                        //通行情况
    e_benbu[46][47].dir = 1;                             //1水��� 0竖直
    e_benbu[46][47].dis = p_benbu[47].x - p_benbu[46].x; //距离
    e_benbu[46][47].crowd = 0.25;
    e_benbu[46][47].bicycle = 1; //自行车

    e_benbu[45][46].tongxing = 1;                        //通行情况
    e_benbu[45][46].dir = 1;                             //1水平 0竖直
    e_benbu[45][46].dis = p_benbu[46].x - p_benbu[45].x; //距离
    e_benbu[45][46].crowd = 0.25;
    e_benbu[45][46].bicycle = 1; //自行车

    e_benbu[42][45].tongxing = 1;                        //通行情况
    e_benbu[42][45].dir = 1;                             //1水平 0竖直
    e_benbu[42][45].dis = p_benbu[45].x - p_benbu[42].x; //距离
    e_benbu[42][45].crowd = 1;
    e_benbu[42][45].bicycle = 1; //自行车

    e_benbu[41][42].tongxing = 1;                        //通行情况
    e_benbu[41][42].dir = 1;                             //1水平 0竖直
    e_benbu[41][42].dis = p_benbu[42].x - p_benbu[41].x; //距离
    e_benbu[41][42].crowd = 0.1;
    e_benbu[41][42].bicycle = 1; //自行车

    e_benbu[40][41].tongxing = 1;                        //通行情况
    e_benbu[40][41].dir = 1;                             //1水平 0竖直
    e_benbu[40][41].dis = p_benbu[41].x - p_benbu[40].x; //距离
    e_benbu[40][41].crowd = 0.125;
    e_benbu[40][41].bicycle = 1; //自行车

    e_benbu[60][61].tongxing = 1;                        //通行情况
    e_benbu[60][61].dir = 1;                             //1水平 0竖直
    e_benbu[60][61].dis = p_benbu[61].x - p_benbu[60].x; //距离
    e_benbu[60][61].crowd = 0.1;
    e_benbu[60][61].bicycle = 1; //自行车

    e_benbu[59][60].tongxing = 1;                        //通行情况
    e_benbu[59][60].dir = 1;                             //1水平 0竖直
    e_benbu[59][60].dis = p_benbu[60].x - p_benbu[59].x; //距离
    e_benbu[59][60].crowd = 0.1;
    e_benbu[59][60].bicycle = 1; //自行车

    e_benbu[46][47].tongxing = 1;                        //通行情况
    e_benbu[46][47].dir = 1;                             //1水平 0竖直
    e_benbu[46][47].dis = p_benbu[47].x - p_benbu[46].x; //距离
    e_benbu[46][47].crowd = 1;
    e_benbu[46][47].bicycle = 1; //自行车

    //--------------------------------------------------------------------------------------------------------------------

    e_benbu[9][8].tongxing = 1;                      //通行情况
    e_benbu[9][8].dir = 0;                           //1水平 0竖直
    e_benbu[9][8].dis = p_benbu[8].y - p_benbu[9].y; //距离
    e_benbu[9][8].crowd = 1;
    e_benbu[9][8].bicycle = 1; //自行车

    e_benbu[63][4].tongxing = 1;                       //通行情况
    e_benbu[63][4].dir = 0;                            //1水平 0竖直
    e_benbu[63][4].dis = p_benbu[4].y - p_benbu[63].y; //距离
    e_benbu[63][4].crowd = 1;
    e_benbu[63][4].bicycle = 1; //自行车

    e_benbu[64][63].tongxing = 1;                        //通行情况
    e_benbu[64][63].dir = 0;                             //1水平 0竖直
    e_benbu[64][63].dis = p_benbu[63].y - p_benbu[64].y; //距离
    e_benbu[64][63].crowd = 0.5;
    e_benbu[64][63].bicycle = 1; //自行车

    e_benbu[3][2].tongxing = 1;                      //通行情况
    e_benbu[3][2].dir = 0;                           //1水平 0竖直
    e_benbu[3][2].dis = p_benbu[2].y - p_benbu[3].y; //距离
    e_benbu[3][2].crowd = 1;
    e_benbu[3][2].bicycle = 1; //自行车

    e_benbu[11][10].tongxing = 1;                        //通行情况
    e_benbu[11][10].dir = 0;                             //1水平 0竖直
    e_benbu[11][10].dis = p_benbu[10].y - p_benbu[11].y; //距离
    e_benbu[11][10].crowd = 0.25;
    e_benbu[11][10].bicycle = 1; //自行车

    e_benbu[5][7].tongxing = 1;                      //通行情况
    e_benbu[5][7].dir = 0;                           //1水平 0竖直
    e_benbu[5][7].dis = p_benbu[7].y - p_benbu[5].y; //距离
    e_benbu[5][7].crowd = 0.125;
    e_benbu[5][7].bicycle = 1; //自行车

    e_benbu[6][5].tongxing = 1;                      //通行情况
    e_benbu[6][5].dir = 0;                           //1水平 0竖直
    e_benbu[6][5].dis = p_benbu[5].y - p_benbu[6].y; //距离
    e_benbu[6][5].crowd = 0.125;
    e_benbu[6][5].bicycle = 1; //自行车

    e_benbu[18][22].tongxing = 1;                        //通行情况
    e_benbu[18][22].dir = 0;                             //1水平 0竖直
    e_benbu[18][22].dis = p_benbu[22].y - p_benbu[18].y; //距离
    e_benbu[18][22].crowd = 0.5;
    e_benbu[18][22].bicycle = 1; //自行车

    e_benbu[17][18].tongxing = 1;                        //通行情况
    e_benbu[17][18].dir = 0;                             //1水平 0竖直
    e_benbu[17][18].dis = p_benbu[18].y - p_benbu[17].y; //距离
    e_benbu[17][18].crowd = 0.5;
    e_benbu[17][18].bicycle = 1; //自行车

    e_benbu[15][17].tongxing = 1;                        //通行情况
    e_benbu[15][17].dir = 0;                             //1水平 0竖直
    e_benbu[15][17].dis = p_benbu[17].y - p_benbu[15].y; //距离
    e_benbu[15][17].crowd = 1;
    e_benbu[15][17].bicycle = 1; //自行车

    e_benbu[12][15].tongxing = 1;                        //通行情况
    e_benbu[12][15].dir = 0;                             //1水平 0竖直
    e_benbu[12][15].dis = p_benbu[15].y - p_benbu[12].y; //距离
    e_benbu[12][15].crowd = 1;
    e_benbu[12][15].bicycle = 1; //自行车

    e_benbu[20][21].tongxing = 1;                        //通行情况
    e_benbu[20][21].dir = 0;                             //1水平 0竖直
    e_benbu[20][21].dis = p_benbu[21].y - p_benbu[20].y; //距离
    e_benbu[20][21].crowd = 1;
    e_benbu[20][21].bicycle = 1; //自行车

    e_benbu[8][20].tongxing = 1;                       //通行情况
    e_benbu[8][20].dir = 0;                            //1水平 0竖直
    e_benbu[8][20].dis = p_benbu[20].y - p_benbu[8].y; //距离
    e_benbu[8][20].crowd = 0.5;
    e_benbu[8][20].bicycle = 1; //自行车

    e_benbu[66][67].tongxing = 1;                        //通行情况
    e_benbu[66][67].dir = 0;                             //1水平 0竖直
    e_benbu[66][67].dis = p_benbu[67].y - p_benbu[66].y; //距离
    e_benbu[66][67].crowd = 1;
    e_benbu[66][67].bicycle = 1; //自行车

    e_benbu[65][66].tongxing = 1;                        //通行情况
    e_benbu[65][66].dir = 0;                             //1水平 0竖直
    e_benbu[65][66].dis = p_benbu[66].y - p_benbu[65].y; //距离
    e_benbu[65][66].crowd = 1;
    e_benbu[65][66].bicycle = 1; //自行车

    e_benbu[24][23].tongxing = 1;                        //通行情况
    e_benbu[24][23].dir = 0;                             //1水平 0竖直
    e_benbu[24][23].dis = p_benbu[23].y - p_benbu[24].y; //距离
    e_benbu[24][23].crowd = 1;
    e_benbu[24][23].bicycle = 1; //自行车

    e_benbu[59][24].tongxing = 1;                        //通行情况
    e_benbu[59][24].dir = 0;                             //1水平 0竖直
    e_benbu[59][24].dis = p_benbu[24].y - p_benbu[59].y; //距离
    e_benbu[59][24].crowd = 1;
    e_benbu[59][24].bicycle = 1; //自行车

    e_benbu[25][59].tongxing = 1;                        //通行情况
    e_benbu[25][59].dir = 0;                             //1水平 0竖直
    e_benbu[25][59].dis = p_benbu[59].y - p_benbu[25].y; //距离
    e_benbu[25][59].crowd = 1;
    e_benbu[25][59].bicycle = 1; //自行车

    e_benbu[28][25].tongxing = 1;                        //通行情况
    e_benbu[28][25].dir = 0;                             //1水平 0竖直
    e_benbu[28][25].dis = p_benbu[25].y - p_benbu[28].y; //距离
    e_benbu[28][25].crowd = 0.5;
    e_benbu[28][25].bicycle = 1; //自行车

    e_benbu[39][28].tongxing = 1;                        //通行情况
    e_benbu[39][28].dir = 0;                             //1水平 0竖直
    e_benbu[39][28].dis = p_benbu[28].y - p_benbu[39].y; //距离
    e_benbu[39][28].crowd = 0.5;
    e_benbu[39][28].bicycle = 1; //自行车

    e_benbu[29][39].tongxing = 1;                        //通行情况
    e_benbu[29][39].dir = 0;                             //1水平 0竖直
    e_benbu[29][39].dis = p_benbu[39].y - p_benbu[29].y; //距离
    e_benbu[29][39].crowd = 0.5;
    e_benbu[29][39].bicycle = 1; //自行车

    e_benbu[14][29].tongxing = 1;                        //通行情况
    e_benbu[14][29].dir = 0;                             //1水平 0竖直
    e_benbu[14][29].dis = p_benbu[29].y - p_benbu[14].y; //距离
    e_benbu[14][29].crowd = 0.5;
    e_benbu[14][29].bicycle = 1; //自行车

    e_benbu[79][82].tongxing = 1;                        //通行情况
    e_benbu[79][82].dir = 0;                             //1水平 0竖直
    e_benbu[79][82].dis = p_benbu[82].y - p_benbu[79].y; //距离
    e_benbu[79][82].crowd = 1;
    e_benbu[79][82].bicycle = 1; //自行车

    e_benbu[78][79].tongxing = 1;                        //通行情况
    e_benbu[78][79].dir = 0;                             //1水平 0竖直
    e_benbu[78][79].dis = p_benbu[79].y - p_benbu[78].y; //距离
    e_benbu[78][79].crowd = 1;
    e_benbu[78][79].bicycle = 1; //自行车

    e_benbu[72][73].tongxing = 1;                        //通行情况
    e_benbu[72][73].dir = 0;                             //1水平 0竖直
    e_benbu[72][73].dis = p_benbu[73].y - p_benbu[72].y; //距离
    e_benbu[72][73].crowd = 1;
    e_benbu[72][73].bicycle = 1; //自行车

    e_benbu[23][72].tongxing = 1;                        //通行情况
    e_benbu[23][72].dir = 0;                             //1水平 0竖直
    e_benbu[23][72].dis = p_benbu[72].y - p_benbu[23].y; //距离
    e_benbu[23][72].crowd = 1;
    e_benbu[23][72].bicycle = 1; //自行车

    e_benbu[75][76].tongxing = 1;                        //通行情况
    e_benbu[75][76].dir = 0;                             //1水平 0竖直
    e_benbu[75][76].dis = p_benbu[76].y - p_benbu[75].y; //距离
    e_benbu[75][76].crowd = 0.125;
    e_benbu[75][76].bicycle = 1; //自行车

    e_benbu[35][34].tongxing = 1;                        //通行情况
    e_benbu[35][34].dir = 0;                             //1水平 0竖直
    e_benbu[35][34].dis = p_benbu[34].y - p_benbu[35].y; //距离
    e_benbu[35][34].crowd = 1;
    e_benbu[35][34].bicycle = 1; //自行车

    e_benbu[41][35].tongxing = 1;                        //通行情况
    e_benbu[41][35].dir = 0;                             //1水平 0竖直
    e_benbu[41][35].dis = p_benbu[35].y - p_benbu[41].y; //距离
    e_benbu[41][35].crowd = 0.5;
    e_benbu[41][35].bicycle = 1; //自行车

    e_benbu[36][41].tongxing = 1;                        //通行情况
    e_benbu[36][41].dir = 0;                             //1水平 0竖直
    e_benbu[36][41].dis = p_benbu[41].y - p_benbu[36].y; //距离
    e_benbu[36][41].crowd = 0.5;
    e_benbu[36][41].bicycle = 1; //自行车

    e_benbu[37][36].tongxing = 1;                        //通行情况
    e_benbu[37][36].dir = 0;                             //1水平 0竖直
    e_benbu[37][36].dis = p_benbu[36].y - p_benbu[37].y; //距离
    e_benbu[37][36].crowd = 1;
    e_benbu[37][36].bicycle = 1; //自行车

    e_benbu[32][33].tongxing = 1;                        //通行情况
    e_benbu[32][33].dir = 0;                             //1水平 0竖直
    e_benbu[32][33].dis = p_benbu[33].y - p_benbu[32].y; //距离
    e_benbu[32][33].crowd = 0.25;
    e_benbu[32][33].bicycle = 1; //自行车

    e_benbu[40][32].tongxing = 1;                        //通行情况
    e_benbu[40][32].dir = 0;                             //1水平 0竖直
    e_benbu[40][32].dis = p_benbu[32].y - p_benbu[40].y; //距离
    e_benbu[40][32].crowd = 0.25;
    e_benbu[40][32].bicycle = 1; //自行车

    e_benbu[31][40].tongxing = 1;                        //通行情况
    e_benbu[31][40].dir = 0;                             //1水平 0竖直
    e_benbu[31][40].dis = p_benbu[40].y - p_benbu[31].y; //距离
    e_benbu[31][40].crowd = 0.25;
    e_benbu[31][40].bicycle = 1; //自行车

    e_benbu[30][31].tongxing = 1;                        //通行情况
    e_benbu[30][31].dir = 0;                             //1水平 0竖直
    e_benbu[30][31].dis = p_benbu[31].y - p_benbu[30].y; //距离
    e_benbu[30][31].crowd = 0.25;
    e_benbu[30][31].bicycle = 1; //自行车

    e_benbu[73][74].tongxing = 1;                        //通行情况
    e_benbu[73][74].dir = 0;                             //1水平 0竖直
    e_benbu[73][74].dis = p_benbu[74].y - p_benbu[73].y; //距离
    e_benbu[73][74].crowd = 1;
    e_benbu[73][74].bicycle = 1; //自行车

    e_benbu[69][70].tongxing = 1;                        //通行情况
    e_benbu[69][70].dir = 0;                             //1水平 0竖直
    e_benbu[69][70].dis = p_benbu[70].y - p_benbu[69].y; //距离
    e_benbu[69][70].crowd = 0.5;
    e_benbu[69][70].bicycle = 1; //自行车

    e_benbu[22][69].tongxing = 1;                        //通行情况
    e_benbu[22][69].dir = 0;                             //1水平 0竖直
    e_benbu[22][69].dis = p_benbu[69].y - p_benbu[22].y; //距离
    e_benbu[22][69].crowd = 1;
    e_benbu[22][69].bicycle = 1; //自行车

    e_benbu[26][27].tongxing = 1;                        //通行情况
    e_benbu[26][27].dir = 0;                             //1水平 0竖直
    e_benbu[26][27].dis = p_benbu[27].y - p_benbu[26].y; //距离
    e_benbu[26][27].crowd = 0.125;
    e_benbu[26][27].bicycle = 1; //自行车

    e_benbu[52][51].tongxing = 1;                        //通行情况
    e_benbu[52][51].dir = 0;                             //1水平 0竖直
    e_benbu[52][51].dis = p_benbu[51].y - p_benbu[52].y; //距离
    e_benbu[52][51].crowd = 0.125;
    e_benbu[52][51].bicycle = 1; //自行车

    e_benbu[81][80].tongxing = 1;                        //通行情况
    e_benbu[81][80].dir = 0;                             //1水平 0竖直
    e_benbu[81][80].dis = p_benbu[80].y - p_benbu[81].y; //距离
    e_benbu[81][80].crowd = 0.5;
    e_benbu[81][80].bicycle = 1; //自行车

    e_benbu[55][56].tongxing = 1;                        //通行情况
    e_benbu[55][56].dir = 0;                             //1水平 0竖直
    e_benbu[55][56].dis = p_benbu[56].y - p_benbu[55].y; //距离
    e_benbu[55][56].crowd = 0.25;
    e_benbu[55][56].bicycle = 1; //自行车

    e_benbu[54][55].tongxing = 1;                        //通行情况
    e_benbu[54][55].dir = 0;                             //1水平 0竖直
    e_benbu[54][55].dis = p_benbu[55].y - p_benbu[54].y; //距离
    e_benbu[54][55].crowd = 0.5;
    e_benbu[54][55].bicycle = 1; //自行车

    e_benbu[53][54].tongxing = 1;                        //通行情况
    e_benbu[53][54].dir = 0;                             //1水平 0竖直
    e_benbu[53][54].dis = p_benbu[54].y - p_benbu[53].y; //距离
    e_benbu[53][54].crowd = 1;
    e_benbu[53][54].bicycle = 1; //自行车

    e_benbu[48][47].tongxing = 1;                        //通行情况
    e_benbu[48][47].dir = 0;                             //1水平 0竖直
    e_benbu[48][47].dis = p_benbu[47].y - p_benbu[48].y; //距离
    e_benbu[48][47].crowd = 1;
    e_benbu[48][47].bicycle = 1; //自行车

    e_benbu[49][50].tongxing = 1;                        //通行情况
    e_benbu[49][50].dir = 0;                             //1水平 0竖直
    e_benbu[49][50].dis = p_benbu[50].y - p_benbu[49].y; //距离
    e_benbu[49][50].crowd = 0.1;
    e_benbu[49][50].bicycle = 1; //自行车

    e_benbu[45][49].tongxing = 1;                        //通行情况
    e_benbu[45][49].dir = 0;                             //1水平 0竖直
    e_benbu[45][49].dis = p_benbu[49].y - p_benbu[45].y; //距离
    e_benbu[45][49].crowd = 0.1;
    e_benbu[45][49].bicycle = 1; //自行车

    e_benbu[44][45].tongxing = 1;                        //通行情况
    e_benbu[44][45].dir = 0;                             //1水平 0竖直
    e_benbu[44][45].dis = p_benbu[45].y - p_benbu[44].y; //距离
    e_benbu[44][45].crowd = 0.1;
    e_benbu[44][45].bicycle = 1; //自行车

    e_benbu[43][44].tongxing = 1;                        //通行情况
    e_benbu[43][44].dir = 0;                             //1水平 0竖直
    e_benbu[43][44].dis = p_benbu[44].y - p_benbu[43].y; //距离
    e_benbu[43][44].crowd = 0.1;
    e_benbu[43][44].bicycle = 1; //自行车

    e_benbu[61][57].tongxing = 1;                        //通行情况
    e_benbu[61][57].dir = 0;                             //1水平 0竖直
    e_benbu[61][57].dis = p_benbu[57].y - p_benbu[61].y; //距离
    e_benbu[61][57].crowd = 1;
    e_benbu[61][57].bicycle = 1; //自行车

    e_benbu[58][61].tongxing = 1;                        //通行情况
    e_benbu[58][61].dir = 0;                             //1水平 0竖直
    e_benbu[58][61].dis = p_benbu[61].y - p_benbu[58].y; //距离
    e_benbu[58][61].crowd = 1;
    e_benbu[58][61].bicycle = 1; //自行车

    
    for (int i = 1; i < 100; i++)
    {
        for (int j = 1; j < 100; j++)
        {
            //绝对值
            if (e_benbu[i][j].dis < 0)
                e_benbu[i][j].dis = -e_benbu[i][j].dis;

            //双向
            if (e_benbu[i][j].dis < e_benbu[j][i].dis)
                e_benbu[j][i].dis = e_benbu[i][j].dis;

            // 拥挤度
            if (fabs(e_benbu[i][j].crowd - e_benbu[j][i].crowd) > 1e-6)
            {
                double crowd = 0;
                if (e_benbu[i][j].crowd > e_benbu[j][i].crowd)
                    crowd = e_benbu[j][i].crowd;
                else
                    crowd = e_benbu[i][j].crowd;
                e_benbu[i][j].crowd = e_benbu[j][i].crowd = crowd;
            }

            // 自行车道
            if (e_benbu[i][j].bicycle != e_benbu[j][i].bicycle)
                e_benbu[i][j].bicycle = e_benbu[j][i].bicycle = false;
        }
        
    }

    // 设置 bikeDis 和 timeDis
    for (int i = 1; i < 100; i++)
    {
        for (int j = 1; j < 100; j++)
        {
            // 如果有边
            if (e_benbu[i][j].dis != inf)
                e_benbu[i][j].timeDis = (int)(e_benbu[i][j].dis / e_benbu[i][j].crowd);
            else
                e_benbu[i][j].timeDis = inf;
            // 如果有自行车道
            if (e_benbu[i][j].bicycle == true)
                e_benbu[i][j].bikeDis = e_benbu[i][j].dis;
            else
                e_benbu[i][j].bikeDis = inf;
        }
    }
}

    //返回path的vector,即算法计算后的从起点到终点的path数组
    QVector<path> Map::dijkstra(QString startName, QString endName, int mode, int campusId)
    {
        // 返回的vector
        QVector<path> ans;

        //初始化结束 以下为最小路径算法
        if (campusId == SHAHECAMPUS) // 沙河校区
        {
            int start, end;
            start = castShahe[startName];
            end = castShahe[endName];
            int nodenum = 75, prev[max] = { 0 }, dist[max] = { 0 }; // 共有74个顶点 prev是前继数组，A->B则prev[B]=A；dist[i]储存起点到i点的边的距离；
            int i, j, k;
            int flag[max] = { 0 }, min; //flag标记已经走过的点

            if (mode == MinDistance) // 最短距离
            {
                for (i = 1; i <= nodenum; i++)
                {
                    flag[i] = 0;
                    prev[i] = 0;
                    dist[i] = e_shahe[start][i].dis;
                }
                // 对起点初始化
                flag[start] = 1;//起点标记
                dist[start] = 0;//自身到自身路径为0
                // dijkstra 核心算法
                for (i = 1; i < nodenum; i++)
                {
                    min = inf;
                    for (j = 1; j <= nodenum; j++)//找到相连的未加入路径的最短的边e
                    {
                        if (dist[j] != inf && dist[j] < min && flag[j] == 0)
                        {
                            min = dist[j];
                            k = j;
                        }
                    }
                    if (i == 1)         //标记起点
                        prev[k] = start;
                    flag[k] = 1;        //经过k点
                    for (j = 1; j <= nodenum; j++)
                    {
                        if (flag[j] == 0 && e_shahe[k][j].dis != inf && (e_shahe[k][j].dis + min) < dist[j])
                        {
                            dist[j] = e_shahe[k][j].dis + min;//加入下一条最短的边，如果距离和比dist中对应的距离短，更新距离
                            prev[j] = k;//经过点
                        }
                    }
                }
                //到此步更新所有dist的距离，即起点到可达点的最短距离

                // next1[]记录了从end到start的反向路径
                int x = end, cnt = 0;
                int next1[max] = { 0 };
                // 从前继数组中找出路径
                while (x != start && x != 0)
                {
                    next1[cnt++] = x;
                    x = prev[x];
                }
                next1[cnt] = start;

                // res[]记录了正的路径，下标从1开始，到cnt + 1
                int res[max] = { 0 };
                for (int i = 0; i <= cnt; i++)
                    res[i] = next1[cnt + 1 - i];
                res[1] = start;
                res[cnt + 1] = end;

                // path写入vector
                for (i = 1; i <= cnt; i++)
                {
                    int a, b;
                    a = res[i];
                    b = res[i + 1];
                    path w;
                    w.start = p_shahe[a];
                    w.end = p_shahe[b];
                    if (p_shahe[a].x == p_shahe[b].x)
                    {
                        w.flag = 0;//垂直
                        if (p_shahe[a].y <= p_shahe[b].y)
                            w.direction = 0;//上行
                        else
                            w.direction = 1;//下行
                    }
                    else
                    {
                        w.flag = 1;//水平
                        if (p_shahe[a].x <= p_shahe[b].x)
                            w.direction = 1;//右行
                        else
                            w.direction = 0;//左行
                    }
                    w.bicycle = e_shahe[a][b].bicycle;
                    w.crowd = e_shahe[a][b].crowd;
                    ans.push_back(w);
                }
            }
            else if (mode == MinTime) // 最短时间
            {
                for (i = 1; i <= nodenum; i++)
                {
                    flag[i] = 0;
                    prev[i] = 0;
                    dist[i] = e_shahe[start][i].timeDis;//可到达的最短时间
                }
                // 对起点初始化
                flag[start] = 1;
                dist[start] = 0;
                // dijkstra 核心算法
                for (i = 1; i < nodenum; i++)
                {
                    min = inf;
                    for (j = 1; j <= nodenum; j++)
                    {
                        if (dist[j] != inf && dist[j] < min && flag[j] == 0)
                        {
                            min = dist[j];
                            k = j;
                        }
                    }
                    if (i == 1)
                        prev[k] = start;
                    flag[k] = 1;
                    for (j = 1; j <= nodenum; j++)
                    {
                        if (flag[j] == 0 && e_shahe[k][j].timeDis != inf && (e_shahe[k][j].timeDis + min) < dist[j])
                        {
                            dist[j] = e_shahe[k][j].timeDis + min;
                            prev[j] = k;
                        }
                    }
                }
                //到此步更新所有dist的时间，即起点到可达点的最短时间
                
                //  next1[]记录了从end到start的反向路径
                int x = end, cnt = 0, next1[max] = { 0 };
                // 从前继数组中找出路径
                while (x != start && x != 0)
                {
                    next1[cnt++] = x;
                    x = prev[x];
                }
                next1[cnt] = start;

                // res[]记录了正的路径，下标从1开始，到cnt + 1
                int res[max] = { 0 };
                for (int i = 0; i <= cnt; i++)
                    res[i] = next1[cnt + 1 - i];
                res[1] = start;
                res[cnt + 1] = end;

                // path写入vector
                for (i = 1; i <= cnt; i++)
                {
                    int a, b;
                    a = res[i];
                    b = res[i + 1];
                    path w;
                    w.start = p_shahe[a];
                    w.end = p_shahe[b];
                    if (p_shahe[a].x == p_shahe[b].x)
                    {
                        w.flag = 0;
                        if (p_shahe[a].y <= p_shahe[b].y)
                            w.direction = 0;
                        else
                            w.direction = 1;
                    }
                    else
                    {
                        w.flag = 1;
                        if (p_shahe[a].x <= p_shahe[b].x)
                            w.direction = 1;
                        else
                            w.direction = 0;
                    }
                    w.bicycle = e_shahe[a][b].bicycle;
                    w.crowd = e_shahe[a][b].crowd;
                    ans.push_back(w);
                }
            }
            else if (mode == Bike) // 交通工具
            {
                for (i = 1; i <= nodenum; i++)
                {
                    flag[i] = 0;
                    prev[i] = 0;
                    dist[i] = e_shahe[start][i].bikeDis;
                }
                // 对起点初始化
                flag[start] = 1;
                dist[start] = 0;
                // dijkstra 核心算法
                for (i = 1; i < nodenum; i++)
                {
                    min = inf;
                    for (j = 1; j <= nodenum; j++)
                    {
                        if (dist[j] != inf && dist[j] < min && flag[j] == 0)
                        {
                            min = dist[j];
                            k = j;
                        }
                    }
                    if (i == 1)
                        prev[k] = start;
                    flag[k] = 1;
                    for (j = 1; j <= nodenum; j++)
                    {
                        if (flag[j] == 0 && e_shahe[k][j].bikeDis != inf && (e_shahe[k][j].bikeDis + min) < dist[j])
                        {
                            dist[j] = e_shahe[k][j].bikeDis + min;
                            prev[j] = k;
                        }
                    }
                }

                // next1[]记录了反的路径，下标从0开始，到cnt（包含）
                int x = end, cnt = 0, next1[max] = { 0 };
                // 以下是为了从前继数组中找出路径
                while (x != start && x != 0)
                {
                    next1[cnt++] = x;
                    x = prev[x];
                }
                next1[cnt] = start;

                // res[]记录了正的路径，下标从1开始，到cnt + 1
                int res[max] = { 0 };
                for (int i = 0; i <= cnt; i++)
                    res[i] = next1[cnt + 1 - i];
                res[1] = start;
                res[cnt + 1] = end;

                // path写入vector
                for (i = 1; i <= cnt; i++)
                {
                    int a, b;
                    a = res[i];
                    b = res[i + 1];
                    path w;
                    w.start = p_shahe[a];
                    w.end = p_shahe[b];
                    if (p_shahe[a].x == p_shahe[b].x)
                    {
                        w.flag = 0;
                        if (p_shahe[a].y <= p_shahe[b].y)
                            w.direction = 0;
                        else
                            w.direction = 1;
                    }
                    else
                    {
                        w.flag = 1;
                        if (p_shahe[a].x <= p_shahe[b].x)
                            w.direction = 1;
                        else
                            w.direction = 0;
                    }
                    w.bicycle = e_shahe[a][b].bicycle;
                    w.crowd = e_shahe[a][b].crowd;
                    ans.push_back(w);
                }
            }
        }
        else if (campusId == BENBUCAMPUS) // 本部校区
        {
            int start, end;
            start = castBenbu[startName];
            end = castBenbu[endName];
            int nodenum = 83, prev[max] = { 0 }, dist[max] = { 0 }; // 共有82个顶点 prev是前继数组，A->B则prev[B]=A；
            int i, j, k;
            int flag[max] = { 0 }, min; //flag标记已经走过的点

            if (mode == MinDistance) // 最短距离
            {
                for (i = 1; i <= nodenum; i++)
                {
                    flag[i] = 0;
                    prev[i] = 0;
                    dist[i] = e_benbu[start][i].dis;
                }
                // 对起点初始化
                flag[start] = 1;
                dist[start] = 0;
                // dijkstra 核心算法
                for (i = 1; i < nodenum; i++)
                {
                    min = inf;
                    for (j = 1; j <= nodenum; j++)
                    {
                        if (dist[j] != inf && dist[j] < min && flag[j] == 0)
                        {
                            min = dist[j];
                            k = j;
                        }
                    }
                    if (i == 1)
                        prev[k] = start;
                    flag[k] = 1;
                    for (j = 1; j <= nodenum; j++)
                    {
                        if (flag[j] == 0 && e_benbu[k][j].dis != inf && (e_benbu[k][j].dis + min) < dist[j])
                        {
                            dist[j] = e_benbu[k][j].dis + min;
                            prev[j] = k;
                        }
                    }
                }

                // next1[]记录了反的路径，下标从0开始，到cnt（包含）
                int x = end, cnt = 0, next1[max] = { 0 };
                // 以下是为了从前继数组中找出路径
                while (x != start && x != 0)
                {
                    next1[cnt++] = x;
                    x = prev[x];
                }
                next1[cnt] = start;

                // res[]记录了正的路径，下标从1开始，到cnt + 1
                int res[max] = { 0 };
                for (int i = 0; i <= cnt; i++)
                    res[i] = next1[cnt + 1 - i];
                res[1] = start;
                res[cnt + 1] = end;

                // path写入vector
                for (i = 1; i <= cnt; i++)
                {
                    int a, b;
                    a = res[i];
                    b = res[i + 1];
                    path w;
                    w.start = p_benbu[a];
                    w.end = p_benbu[b];
                    if (p_benbu[a].x == p_benbu[b].x)
                    {
                        w.flag = 0;
                        if (p_benbu[a].y <= p_benbu[b].y)
                            w.direction = 0;
                        else
                            w.direction = 1;
                    }
                    else
                    {
                        w.flag = 1;
                        if (p_benbu[a].x <= p_benbu[b].x)
                            w.direction = 1;
                        else
                            w.direction = 0;
                    }
                    w.bicycle = e_benbu[a][b].bicycle;
                    w.crowd = e_benbu[a][b].crowd;
                    ans.push_back(w);
                }
            }
            else if (mode == MinTime) // 最短时间
            {
                for (i = 1; i <= nodenum; i++)
                {
                    flag[i] = 0;
                    prev[i] = 0;
                    dist[i] = e_benbu[start][i].timeDis;
                }
                // 对起点初始化
                flag[start] = 1;
                dist[start] = 0;
                // dijkstra 核心算法
                for (i = 1; i < nodenum; i++)
                {
                    min = inf;
                    for (j = 1; j <= nodenum; j++)
                    {
                        if (dist[j] != inf && dist[j] < min && flag[j] == 0)
                        {
                            min = dist[j];
                            k = j;
                        }
                    }
                    if (i == 1)
                        prev[k] = start;
                    flag[k] = 1;
                    for (j = 1; j <= nodenum; j++)
                    {
                        if (flag[j] == 0 && e_benbu[k][j].timeDis != inf && (e_benbu[k][j].timeDis + min) < dist[j])
                        {
                            dist[j] = e_benbu[k][j].timeDis + min;
                            prev[j] = k;
                        }
                    }
                }

                // next1[]记录了反的路径，下标从0开始，到cnt（包含）
                int x = end, cnt = 0, next1[max] = { 0 };
                // 以下是为了从前继数组中找出路径
                while (x != start && x != 0)
                {
                    next1[cnt++] = x;
                    x = prev[x];
                }
                next1[cnt] = start;

                // res[]记录了正的路径，下标从1开始，到cnt + 1
                int res[max] = { 0 };
                for (int i = 0; i <= cnt; i++)
                    res[i] = next1[cnt + 1 - i];
                res[1] = start;
                res[cnt + 1] = end;

                // path写入vector
                for (i = 1; i <= cnt; i++)
                {
                    int a, b;
                    a = res[i];
                    b = res[i + 1];
                    path w;
                    w.start = p_benbu[a];
                    w.end = p_benbu[b];
                    if (p_benbu[a].x == p_benbu[b].x)
                    {
                        w.flag = 0;
                        if (p_benbu[a].y <= p_benbu[b].y)
                            w.direction = 0;
                        else
                            w.direction = 1;
                    }
                    else
                    {
                        w.flag = 1;
                        if (p_benbu[a].x <= p_benbu[b].x)
                            w.direction = 1;
                        else
                            w.direction = 0;
                    }
                    w.bicycle = e_benbu[a][b].bicycle;
                    w.crowd = e_benbu[a][b].crowd;
                    ans.push_back(w);
                }
            }
            else if (mode == Bike) // 交通工具
            {
                for (i = 1; i <= nodenum; i++)
                {
                    flag[i] = 0;
                    prev[i] = 0;
                    dist[i] = e_benbu[start][i].bikeDis;
                }
                // 对起点初始化
                flag[start] = 1;
                dist[start] = 0;
                // dijkstra 核心算法
                for (i = 1; i < nodenum; i++)
                {
                    min = inf;
                    for (j = 1; j <= nodenum; j++)
                    {
                        if (dist[j] != inf && dist[j] < min && flag[j] == 0)
                        {
                            min = dist[j];
                            k = j;
                        }
                    }
                    if (i == 1)
                        prev[k] = start;
                    flag[k] = 1;
                    for (j = 1; j <= nodenum; j++)
                    {
                        if (flag[j] == 0 && e_benbu[k][j].bikeDis != inf && (e_benbu[k][j].bikeDis + min) < dist[j])
                        {
                            dist[j] = e_benbu[k][j].bikeDis + min;
                            prev[j] = k;
                        }
                    }
                }

                // next1[]记录了反的路径
                int x = end, cnt = 0, next1[max] = { 0 };
                // 从前继数组中找出路径
                while (x != start && x != 0)
                {
                    next1[cnt++] = x;
                    x = prev[x];
                }
                next1[cnt] = start;

                // res[]记录了正的路径，下标从1开始，到cnt + 1
                int res[max] = { 0 };
                for (int i = 0; i <= cnt; i++)
                    res[i] = next1[cnt + 1 - i];
                res[1] = start;
                res[cnt + 1] = end;

                // path写入vector
                for (i = 1; i <= cnt; i++)
                {
                    int a, b;
                    a = res[i];
                    b = res[i + 1];
                    path w;
                    w.start = p_benbu[a];
                    w.end = p_benbu[b];
                    if (p_benbu[a].x == p_benbu[b].x)
                    {
                        w.flag = 0;
                        if (p_benbu[a].y <= p_benbu[b].y)
                            w.direction = 0;
                        else
                            w.direction = 1;
                    }
                    else
                    {
                        w.flag = 1;
                        if (p_benbu[a].x <= p_benbu[b].x)
                            w.direction = 1;
                        else
                            w.direction = 0;
                    }
                    w.bicycle = e_benbu[a][b].bicycle;
                    w.crowd = e_benbu[a][b].crowd;
                    ans.push_back(w);
                }
            }
        }


        return ans;
    }

    // 获取周围点的信息，返回一个point的vector，以距离为顺序，距离越近序号越小
    QVector<point> Map::findPointsAround(point cur, int campusId)
    {
        if (campusId == SHAHECAMPUS) // 沙河
        {
            int vs = cur.id; // vs表示当前这个点
            int nodenum = 75, dist[max] = { 0 };
            int i, j, k;
            int flag[max] = { 0 }, min;
            for (i = 1; i <= nodenum; i++)
            {
                flag[i] = 0;
                dist[i] = e_shahe[vs][i].dis;
            }
            flag[vs] = 1;
            dist[vs] = 0;

            for (i = 1; i < nodenum; i++)//记录point的dist，依旧用dijkstra算法
            {
                min = inf;
                for (j = 1; j <= nodenum; j++)
                {
                    if (dist[j] != inf && dist[j] < min && flag[j] == 0)
                    {
                        min = dist[j];
                        k = j;
                    }
                }
                flag[k] = 1;
                for (j = 1; j <= nodenum; j++)
                {
                    if (flag[j] == 0 && e_shahe[k][j].dis != inf && (e_shahe[k][j].dis + min) < dist[j])
                    {
                        dist[j] = e_shahe[k][j].dis + min;
                    }
                }
            }

            // 为了排序使用
            struct hth
            {
                int dis;
                int num;
            } t[max];

            for (i = 1; i <= 75; i++)
            {
                t[i].num = i;
                t[i].dis = dist[i];
            }
            for (int i = 1; i <= 75 - 1; i++)
            {
                for (int j = 1; j <= 75 - i; j++)
                {
                    if (t[j].dis > t[j + 1].dis)
                    {
                        struct hth tem = t[j];
                        t[j] = t[j + 1];
                        t[j + 1] = tem;
                    }
                }
            }
            int cnt = 0;
            QVector<point> ans; // 返回point的vector
            for (i = 1; i <= 75; i++)
            {
                int a = t[i].num;
                if (p_shahe[a].name.mid(0, 2) != "路口" && p_shahe[a].name.mid(0, 2) != "当前")
                {
                    point w;
                    w = p_shahe[a];
                    w.dis = t[i].dis;
                    ans.push_back(w);
                    cnt++;
                    if (cnt == 5)
                        break;
                }
                else
                {
                    continue;
                }
            }
            return ans;
        }
        else if (campusId == BENBUCAMPUS) // 本部
        {
            int vs = cur.id; // vs表示当前这个点
            int nodenum = 83, dist[max] = { 0 };
            int i, j, k;
            int flag[max] = { 0 }, min;
            for (i = 1; i <= nodenum; i++)
            {
                flag[i] = 0;
                dist[i] = e_benbu[vs][i].dis;
            }
            flag[vs] = 1;
            dist[vs] = 0;

            for (i = 1; i < nodenum; i++)
            {
                min = inf;
                for (j = 1; j <= nodenum; j++)
                {
                    if (dist[j] != inf && dist[j] < min && flag[j] == 0)
                    {
                        min = dist[j];
                        k = j;
                    }
                }
                flag[k] = 1;
                for (j = 1; j <= nodenum; j++)
                {
                    if (flag[j] == 0 && e_benbu[k][j].dis != inf && (e_benbu[k][j].dis + min) < dist[j])
                    {
                        dist[j] = e_benbu[k][j].dis + min;
                    }
                }
            }

            // 为了排序使用
            struct hth
            {
                int dis;
                int num;
            } t[max];

            for (i = 1; i <= nodenum; i++)
            {
                t[i].num = i;
                t[i].dis = dist[i];
            }
            for (int i = 1; i <= 83 - 1; i++)
            {
                for (int j = 1; j <= 83 - i; j++)
                {
                    if (t[j].dis > t[j + 1].dis)
                    {
                        struct hth tem = t[j];
                        t[j] = t[j + 1];
                        t[j + 1] = tem;
                    }
                }
            }
            int cnt = 0;
            QVector<point> ans; // 返回point的vector
            for (i = 1; i <= 83; i++)
            {
                int a = t[i].num;
                if (p_benbu[a].name.mid(0, 2) != "路口" && p_benbu[a].name.mid(0, 2) != "当前")
                {
                    point w;
                    w = p_benbu[a];
                    w.dis = t[i].dis;
                    ans.push_back(w);
                    cnt++;
                    if (cnt == 5)
                        break;
                }
                else
                {
                    continue;
                }
            }
            return ans;
        }
    
    }
