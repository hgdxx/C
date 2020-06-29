//
// Created by Administrator on 2020/6/29 0029.
//

#ifndef UNTITLED2_GEN_TRUTH_H
#define UNTITLED2_GEN_TRUTH_H
class gen_truth
{
public:
        double K = 100;//数据长度
        int nbirths = 12;//目标初始状态和出生/死亡时间
        double total_tracks = 0;//出现的轨迹总数

//定义矩阵的位置
        double X[100];//100行1列的空矩阵//目标状态的ground truth

        double *N = new double[100]();//100行1列的0矩阵//目标数量的地面真实值

        double L[100];//100行1列的空矩阵//目标标签的ground truth (k, i)

        double track_list[100];

         double truth();




};


#endif //UNTITLED2_GEN_TRUTH_H
