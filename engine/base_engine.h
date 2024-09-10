#ifndef _BASE_ENGINE_H
#define _BASE_ENGINE_H

#include <memory>
#include "backend/base_backend.h"

namespace tiny_infer {

class BaseEngine {
public:
    BaseEngine() {};
    virtual ~BaseEngine() {};

    void bool Init() = 0;

protected:
    std::unique_ptr<BaseBackend> backend_;
};

}   // namespace tiny_infer

#endif  // _BASE_ENGINE_H
