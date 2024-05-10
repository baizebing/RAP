// Copyright (c) 2024 Cris Bai
//
// This software is released under the MIT License.
// https://opensource.org/licenses/MIT

#ifndef RAP_ALGORITHM_HANDLE_H_
#define RAP_ALGORITHM_HANDLE_H_

#include "RAP/data_handle.h"

class DLL_PORTING AlgorithmBase {
 public:
  virtual DataHandle *GetDataHandle(const char *) = 0;
  virtual int Open() = 0;
  virtual int Run() = 0;
  virtual int Close() = 0;
  virtual ~AlgorithmBase(){};
};

typedef AlgorithmBase *fn_create();
typedef AlgorithmBase *fn_create_by_name(const char *);
typedef int fn_destroy(AlgorithmBase *);
#endif
