
#ifndef _RESNRT_ENGINE_H
#define _RESNRT_ENGINE_H

#include "engine/base_engine.h"

using namespace tiny_infer;

class ResNetEngine : public BaseEngine {
public:
    ResNetEngine() {};
    ~ResNetEngine() {};

    bool Init() override;

};


#endif  // _RESNRT_ENGINE_H