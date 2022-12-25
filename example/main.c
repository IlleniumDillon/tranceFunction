/*
 * @Author: IlleniumDillon 147900130@qq.com
 * @Date: 2022-06-23 18:35:55
 * @LastEditors: IlleniumDillon 147900130@qq.com
 * @LastEditTime: 2022-12-25 14:35:53
 * @FilePath: \transfunction\example\main.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include "../include/tf.h"

int main()
{
    tf_function_t tf;
    float num[3] = {1,-1.049,0.57};
    float den[3] = {1,-0.4992,0.0197};
    tf_initZFunction_ND(&tf,num,3,den,3,1,0.0005);
    th_setLimit(&tf,0.25,0.75);
    for(int i = 0; i < 100; i++)
    {
        float output = tf_update(&tf,1);
        printf("%f\n",output);
    }
    //tf_deinit(&tf);
    return 0;
}