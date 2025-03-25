#include "distance.h"
#define PI 3.14159265

int One_Wheel_len = 204;		 //mm  一轮长度
int One_Wheel_Mai = 730;   	//一圈脉冲数
float Wheel_count = 0.2794; //mm 一个脉冲数转长度
float carL_dis = 0;
float carR_dis = 0;
float dis1 = 1170;  // 1149 - 1151
float dis2 = 1145; 

void distance(void)
{
	carR_dis = Wheel_count * -Get_Encoder_countB;
	carL_dis = Wheel_count * Get_Encoder_countA;
}