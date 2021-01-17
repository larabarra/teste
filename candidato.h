#ifndef CANDIDATO_H_
#define CANDIDATO_H_

#include "globais.h"

struct candidato {
    int numero_insc;
    int idade;
    int curso;
    int nota;

};

struct cursos {
    int codigo;
    struct candidato aprovados[40];
};

#endif