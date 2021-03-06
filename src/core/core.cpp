/*******************************************************************************
    Taichi - Physically based Computer Graphics Library

    Copyright (c) 2017 Yuanming Hu <yuanmhu@gmail.com>

    All rights reserved. Use of this source code is governed by
    the MIT license as written in the LICENSE file.
*******************************************************************************/

#include <taichi/common/util.h>

TC_NAMESPACE_BEGIN

CoreState &CoreState::get_instance() {
  static CoreState state;
  return state;
}

int __trash__;

TC_NAMESPACE_END
