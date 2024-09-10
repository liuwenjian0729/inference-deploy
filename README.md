# inference-deploy

## 1. Introduction

## 2. Update

## 3. Usage
### 3.1 Clone this repository
```bash
git clone https://github.com/yeyupiaoling/inference-deploy
```
### 3.2 Install requirements
1. CUDA & TensorRT

2. protoc

3. opencv

### 3.3 Construct project
```bash
cd inference-deploy
mkdir build && cd build
cmake ..
make -j4
```

### 3.4 Run

## 4. Reference
[0]. https://docs.nvidia.com/deeplearning/tensorrt/developer-guide/index.html#work_dynamic_shapes
[1]. https://github.com/onnx/models/tree/main?tab=readme-ov-file
[2]. https://docs.nvidia.com/deeplearning/tensorrt/install-guide/index.html#installing