/**
 * Copyright (c) Facebook, Inc. and its affiliates.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree.
 */

#include "Utils.h"

#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <time.h>
#include <array>
#include <fstream>
#include <functional>
#include <regex>

#include <flashlight/flashlight.h>
#include <gflags/gflags.h>

#include "common/Defines.h"
#include "common/Transforms.h"

namespace w2l {

std::string join(
    const std::string& delim,
    const std::vector<std::string>& vec) {
  return join(delim, vec.begin(), vec.end());
}

int64_t numTotalParams(std::shared_ptr<fl::Module> module) {
  int64_t params = 0;
  for (auto& p : module->params()) {
    params += p.elements();
  }
  return params;
}

} // namespace w2l
