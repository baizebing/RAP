// Copyright (c) 2024 Cris Bai
//
// This software is released under the MIT License.
// https://opensource.org/licenses/MIT

#ifndef RAP_ALGORITHM_HANDLE_H_
#define RAP_ALGORITHM_HANDLE_H_

#include "RAP/data_handle.h"
#include "RAP/interface_handle.h"

namespace rap {

class DLL_PORTING TaskBase {
 public:
  virtual InterfaceHandle *GetInterfaceHandle() = 0;
  virtual int Open() = 0;
  virtual int Run() = 0;
  virtual int Close() = 0;
  virtual ~TaskBase(){};
};

typedef TaskBase *fn_create();
typedef TaskBase *fn_create_by_name(const char *);
typedef int fn_destroy(TaskBase *);
}  // namespace rap
#endif
