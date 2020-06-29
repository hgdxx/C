// Created by Administrator on 2020/6/29 0029.
//变量声明
#include "gen_truth.h"
#include "stdio.h"
#include "iostream"
#include<algorithm>

#include "model.h"
#include "get_newstate_fn.h"
using namespace std;

double gen_truth::truth() {


    double xstart[4][12] = {{0, 400, -800, 400, 400, 0, -800, -200, 0, -200}, \
                        {0, -10, 20, -7, -2.5, 7.5, 12, 15, 3, -3, -20, 15}, \
                            {0, -600, -200, -600, -600, 0, -200, 800, -200, 800, 0, 15}, \
                                {-10, 5, -5, -4, 10, -5, 7, -10, 15, -15, -15, -5}};
    double tbirth[12] = {1, 1, 1, 20, 20, 20, 40, 40, 60, 60, 80, 80};

    double tdeath[12] = {70, K + 1, 70, K + 1, K + 1, K + 1, K + 1, K + 1, K + 1, K + 1, K + 1, K + 1};

//生成跟踪

    double targetstate[4];
    for (int targetnum = 0; targetnum < nbirths; targetnum++) {
        for (int line = 0; line < 4; line++) {

            targetstate[line] = xstart[line][targetnum];//targetstate存xstart的每一列

        }
        for (int k = tbirth[targetnum]; k < min(tdeath[targetnum], K); k++) {
                targetstate=gen_newstate_fn((model,targetnum),K);
        }


    }


    return 0;

}
