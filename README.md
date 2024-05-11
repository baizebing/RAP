<!--
 Copyright (c) 2024 Cris Bai
 
 This software is released under the MIT License.
 https://opensource.org/licenses/MIT
-->


![RAP](doc/img/RAP.png)

# **R**epresentation of **A**lgorithm **P**lugin

## Introduction

RAP(pronounced as [wrap] 🙂) is a virtual interface for all kinds of algorithm implementation. It is designed to give all the algorithms an integration standard so that main process can be decoupled with algorithm implementation.

## Code

RAP only provide a C/C++ header file which contains definition of the pure virtual class of `DataHandle` and `TaskBase`.

`MockAlgo` is a sample code for algo that follows the RAP rule.

`MockDriver` is a sample code for main driver that call the algorithm by RAP style.

## Usage

### From algorithm developing side

- All the algorithms should be derived from the class `TaskBase` and implement all the interface it declare.
- Algorithm library should provide a 'C-style' function `TaskBase* CreateAlgorithm()` to let user create an algorithm handle. And also should provide a destroy function `DestroyAlgorithm(TaskBase*)` to clean the resource.
- All the data exported to user should be wrapped as a class derived from `DataHandle`. User can access and modify the data by the member function of the `DataHandle`.

### From driver developing side

- User should call `CreateAlgorithm()` to get a handle. And do not forget destroy it when exit.
- User can set / get parameters and buffers by `DataHandle`. See details at `MockDriver`.
