/**********

Copyright 2017 Xilinx, Inc.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.

**********/

#ifndef XSQL61_SQLQ1TPCH_H
#define XSQL61_SQLQ1TPCH_H
#include "sqldefs.h"
#include "sqlq1procunit.h"

extern "C" void SQLEVAL(sqlq1tpch,SQLKERNEL_ID)(SqlDefs::RdDdrWord *inbuf, char *outbuf);

#endif
