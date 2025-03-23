#include <stdio.h>
#include <stdint.h>

#define NOB_IMPLEMENTATION
#include "nob.h"

//#define STB_IMAGE_WRITE_IMPLEMENTATION
//#include "stb_image_write.h"

#define MAP_SIZE 256


static uint32_t map[MAP_SIZE][MAP_SIZE] = {0};

int main(void)
{
	const char *caminho_arquivo = "a.jpg";
	
	Nob_String_Builder conteudo = {0};
	if(!nob_read_entire_file(caminho_arquivo, &conteudo )) return 1;


	if(conteudo.count> 0){
		for(size_t i = 0; i < conteudo.count - 1; i++){
			uint8_t x = conteudo.items[i];
			uint8_t y = conteudo.items[i+1];
			map[y][x]= true;

		}
	}
	
	for(size_t y = 0; y < MAP_SIZE; ++y){
		for(size_t x = 0; x < MAP_SIZE; ++x){
			if (map[y][x]){
				nob_log(NOB_INFO, "Arquivo %s [%zu bytes -] [- %o -] [- %lu -] [- %lu -]", caminho_arquivo, conteudo.count);
			}
			else{
				//nob_log(NOB_INFO, "Arquivo %s [%o bytes]", caminho_arquivo, conteudo.count);
			}
			
		//printf("\n");
		}
	}

	nob_log(NOB_INFO,"Arquivo %s [%zu bytes]", caminho_arquivo, conteudo.count);
	return 0;
}

