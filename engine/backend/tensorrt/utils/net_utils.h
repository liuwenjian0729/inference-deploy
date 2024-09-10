#ifndef _NET_UTILS_H
#define _NET_UTILS_H

#include <stdint.h>
#include <string>
#include <vector>
#include <NvInfer.h>
#include <NvInferRuntime.h>
#include <cuda_runtime_api.h>

namespace NetworkUtils {

/*******************************************************************************
 * 
 * @brief Softmax function
 * 
 * @param [in] vals vector of output values
 * 
 * @return vector of probabilities
 * 
 *******************************************************************************/
std::vector<float> Softmax(const std::vector<float> &vals);

/*******************************************************************************
 * 
 * @brief format dims to string
 * 
 * @param [in] dims shape of tensor
 * 
 * @return string
 * 
 *******************************************************************************/
std::string dims2str(const nvinfer1::Dims &dims);

/*******************************************************************************
 * 
 * @brief convert onnx to trt engine
 * 
 * @param [out] trt_file .trt file
 * @param [in] onnx_file .onnx file
 * 
 * @return true if success, false otherwise
 * 
 *******************************************************************************/
bool onnx2trtEngine(const std::string& trt_file, const std::string& onnx_file);

/*******************************************************************************
 * 
 * @brief load trt engine from engine file
 * 
 * @param [in] trt_file .engine file
 * @param [in] runtime tensorRT runtime
 * 
 * @return tensortr engine
 * 
 *******************************************************************************/
nvinfer1::ICudaEngine* loadEngine(const std::string& trt_file, nvinfer1::IRuntime* runtime);

/*******************************************************************************
 * 
 * @brief get volume of dims
 * 
 * @param [in] dims input dims
 * 
 * @return size of dims
 * 
 *******************************************************************************/
int volume(const nvinfer1::Dims& dims);

/*******************************************************************************
 * 
 * @brief get bytes of data type
 * 
 * @param [in] type data type
 * 
 * @return size of data type
 * 
 *******************************************************************************/
int data_type_size(nvinfer1::DataType type);

}   // namespace NetworkUtils

#endif  // _NET_UTILS_H
