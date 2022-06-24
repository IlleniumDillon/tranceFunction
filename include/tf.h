/*
 * @Author: IlleniumDillon 147900130@qq.com
 * @Date: 2022-06-23 18:07:08
 * @LastEditors: IlleniumDillon 147900130@qq.com
 * @LastEditTime: 2022-06-23 18:49:52
 * @FilePath: \transfunction\include\tf.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#ifndef _TF_H_
#define _TF_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdint.h>

#define e 2.71828182846

typedef struct tf_function
{
    float* lastinputs;
    float* inputgain;
    float* lastoutputs;
    float* outputgain;
    uint8_t lastinputsnum;
    uint8_t lastoutputsnum;
}tf_function_t;

/**
 * @description: 
 * @param {tf_function_t*} ptr
 * @param {float*} num
 * @param {uint8_t} num_num
 * @param {float*} den
 * @param {uint8_t} den_num
 * @param {float} gain
 * @param {float} samptime
 * @return {*}
 */
void tf_initSFunction_ND(tf_function_t* ptr,float* num,uint8_t num_num,float* den,uint8_t den_num,float gain,float samptime);

/**
 * @description: 
 * @param {tf_function_t*} ptr
 * @param {float*} zeros
 * @param {uint8_t} zeros_num
 * @param {float*} pols
 * @param {uint8_t} pols_num
 * @param {float} gain
 * @param {float} samptime
 * @return {*}
 */
void tf_initSFunction_ZP(tf_function_t* ptr,float* zeros,uint8_t zeros_num,float* pols,uint8_t pols_num,float gain,float samptime);

/**
 * @description: 
 * @param {tf_function_t*} ptr
 * @param {float*} num
 * @param {uint8_t} num_num
 * @param {float*} den
 * @param {uint8_t} den_num
 * @param {float} gain
 * @param {float} samptime
 * @return {*}
 */
void tf_initZFunction_ND(tf_function_t* ptr,float* num,uint8_t num_num,float* den,uint8_t den_num,float gain,float samptime);

/**
 * @description: 
 * @param {tf_function_t*} ptr
 * @param {float*} zeros
 * @param {uint8_t} zeros_num
 * @param {float*} pols
 * @param {uint8_t} pols_num
 * @param {float} gain
 * @param {float} samptime
 * @return {*}
 */
void tf_initZFunction_ZP(tf_function_t* ptr,float* zeros,uint8_t zeros_num,float* pols,uint8_t pols_num,float gain,float samptime);

/**
 * @description: 
 * @param {tf_function_t*} ptr
 * @param {float} input
 * @return {*}
 */
float tf_update(tf_function_t* ptr,float input);

/**
 * @description: 
 * @param {tf_function_t*} ptr
 * @return {*}
 */
void tf_deinit(tf_function_t* ptr);

#endif