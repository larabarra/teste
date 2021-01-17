#ifndef GLOBAIS_H_
#define GLOBAIS_H_

#include <iostream>
#include <stdio.h>
#include <stdlib.h> 
#include <time.h>  //seed
#include <memory> //smart pointer
#include <fstream> //arquivo
#include <vector>       // std::vector
#include <bits/stdc++.h> 
#include <algorithm> //randomizar o vetor
#include <string.h>
#include "candidato.h"

using namespace std;

typedef struct candidato c_t;
typedef struct cursos cs_t;



bool ler_arquivo(string arquivo,c_t *resultados);



#endif