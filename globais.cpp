#include "globais.h"

bool ler_arquivo(string nome_arquivo,c_t *resultados){
    int j=0;
    string aux;
    ifstream arquivo;
    arquivo.open ("Candidatos.txt");
    	
    if (arquivo.is_open()){ 
        
            while (true) {
            arquivo >> aux >> aux >> aux >> resultados[j].numero_insc  >> 
            aux >> resultados[j].idade >> aux >>
            resultados[j].nota >> aux >> aux >> aux >> resultados[j].curso;
            if (resultados[j].numero_insc == -1) break;
            j++;
            }
        
    arquivo.close();
    return true;
    }
    
    return false;
}


void sort_curso(c_t *resultados, cs_t *aprovados){
    int curso;
    for (int i=0, i<826; i++){
        curso = resultados[i].curso;
        switch (curso) {
        case 601:
        selecao(0,resultados,aprovados,i);
        
    }
}

bool selecao (int curso_id, c_t *resultados, cs_t *cursos, int candidato_id){
    int aux;
    int nota  = resultados[candidato_id].nota;
    for (int i=0; i<40; i++){
        if (cursos.aprovado.nota[i] < nota){
            
        }
    }



}