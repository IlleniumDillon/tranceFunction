/*
 * @Author: IlleniumDillon 147900130@qq.com
 * @Date: 2022-06-23 18:35:55
 * @LastEditors: IlleniumDillon 147900130@qq.com
 * @LastEditTime: 2022-06-24 19:32:55
 * @FilePath: \transfunction\example\main.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include "../include/tf.h"

int main()
{
    tf_function_t tf;
    float num[1] = {1};
    float den[2] = {-1,-2};
    tf_initSFunction_ZP(&tf,num,1,den,2,1,1);
    for(int i = 0; i < 100; i++)
    {
        float output = tf_update(&tf,1);
        printf("%f\n",output);
    }
    return 0;
}