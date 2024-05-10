// Copyright (c) 2024 Cris Bai
//
// This software is released under the MIT License.
// https://opensource.org/licenses/MIT

#ifndef RAP_DATA_HANDLE_H_
#define RAP_DATA_HANDLE_H_

#include <optional>

#include "RAP/dll_defines.h"

class DLL_PORTING DataHandle {
 public:
  virtual int SetInt(int) = 0;
  virtual int SetFloat(float) = 0;
  virtual int SetBool(bool) = 0;
  virtual int SetDouble(double) = 0;
  virtual int SetPointer(void*) = 0;
  virtual std::optional<int> GetInt() = 0;
  virtual std::optional<float> GetFloat() = 0;
  virtual ~DataHandle(){};
};
#endif
