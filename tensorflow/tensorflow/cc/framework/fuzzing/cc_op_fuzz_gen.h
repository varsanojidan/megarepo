/* Copyright 2022 The TensorFlow Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/

#ifndef TENSORFLOW_CC_FRAMEWORK_FUZZING_CC_OP_FUZZ_GEN_H_
#define TENSORFLOW_CC_FRAMEWORK_FUZZING_CC_OP_FUZZ_GEN_H_

#include "tensorflow/core/framework/op_def.pb.h"
#include "tensorflow/core/framework/op_gen_lib.h"
#include "tensorflow/core/platform/types.h"

namespace tensorflow {
namespace cc_op {

/// Result is written to file fname.
void WriteFuzzers(const OpList& ops, const ApiDefMap& api_def_map,
                  const string& fname);

}  // namespace cc_op
}  // namespace tensorflow

#endif  // TENSORFLOW_CC_FRAMEWORK_FUZZING_CC_OP_FUZZ_GEN_H_
