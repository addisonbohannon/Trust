# Overview

Software to run the POMCP-based multi-round trust game, estimation, classifying subjects by guilt parameter, depth of planning, and theory of mind level.

# Prerequisites

- [GNU C Compiler](https://gcc.gnu.org/)
- [Boost Libraries](https://www.boost.org/)

# Instructions

1. Build and run the Trust Precalculation project

    ```
    cd Precalc
    make -f MakePrecalc.mak
    ./Precalc
    cd ..
    ```

2. Build and run the Trust Generative project

    ```
    cd Preparation
    g++ GenerateValidationInput.cpp -o GenerateValidationInput
    ./GenerateValidationInput
    make -f MakeGenerateTemplate.mak
    ./Generate
    cd ..
    ```

3. Build and run the Trust Estimation

    ```
    cd Estimation
    make -f EstimateTemplate.mak
    ./Estimate
    ```

