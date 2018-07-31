#ifndef CK_MODULE_H_
#define CK_MODULE_H_

#include "redismodule.h"

int CK_InitModuleInternal(RedisModuleCtx *ctx, RedisModuleString **argv, int argc);

#endif