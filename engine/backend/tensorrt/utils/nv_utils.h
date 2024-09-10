#ifndef TRT_UTILS_H
#define TRT_UTILS_H

#include <NvInfer.h>
#include <NvInferRuntime.h>
#include <cuda_runtime_api.h>

namespace trt_sample {

#define CUDA_CHECK(condition)                                                              \
    do {                                                                                   \
        cudaError_t ecode = condition;                                                     \
        if (ecode != cudaSuccess) {                                                        \
            std::cerr << "CUDA error " << ecode << " at " << __FILE__ << ":" << __LINE__;  \
            assert(0);                                                                     \
        }                                                                                  \
    } while (0)

}   // namespace trt_sample

#endif  // TRT_UTILS_H

