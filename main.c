#include <stdio.h>
#include <stdint.h>

#define NOB_IMPLEMENTATION
#include "nob.h"


//static bool map[256][256] = {0};

int main(void)
{
	const char *caminho_arquivo = "a.jpg";
	Nob_String_Builder conteudo = {0};
	if(!nob_read_entire_file(caminho_arquivo, &conteudo )) return 1;


	if(conteudo.count> 0){
		for(size_t i = 0; i < conteudo.count; i++){
			//uint8_t a = conteudo.items[i];
			//uint8_t b = conteudo.items[i+1];
		}
	}

	nob_log(NOB_INFO,"Arquivo %s [%zu bytes]", caminho_arquivo, conteudo.count);
	return 0;
}

