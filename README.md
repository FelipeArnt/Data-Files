# 🤖 Data Files 
Rascunho do projeto pessoal "Engenharia reversa de arquivos de dados"


---

## 🚧 Status do Projeto
## **Fase inicial de desenvolvimento**:

- Atualmente, ele conta com uma funcionalidade básica: contar quantos bytes um arquivo `.png` possui.
- O objetivo principal é evoluir para realizar **engenharia reversa de arquivos de dados**, permitindo a análise e manipulação de diversos formatos de arquivos.

## 🛠️ Implementações
# Arquivo build.sh
 - Contém comandos de compilação com opções para todos erros,todos erros extras e informações de debugging.
 - Comandos utilizados:  "set -xe" e "cc -Wall -Wextra -ggdb -o main main.c";
# Arquivo main.
 - Função principal que calcula a quantidade de bytes na imagem.
 - Define: NOB_IMPLEMENTATION
 - Include: "nob.h", <stdint.h>, <stdio.h>
---
<br>

## ⚛️ Demonstração

![Terminal](https://github.com/FelipeArnt/Data-Files/blob/main/Terminal.png)

- Arquivo build está implementado corretamente retornando erros no programa.
- Resultado dos bytes contabilizados.
