# algoritimos-2024

## Repositório reservado para a disciplina de Algoritmos.

### Para rodar nosso código precisamos de um *compilador* que é quem vai ser responsável por transformar nosso código em linguagem de maquina ou de baixo nível(assembly) para interagir diretamente com o hardware.

- Podemos baixar um compilador pelo seguinte site: [Site para Baixar o Compilador](https://sourceforge.net/projects/mingw/)
- Baixado o compilador, siga os seguintes passos:
1. Clique em instalar 
2. Clica em continuar
3. Aguarda a descompactação do arquivo e clica em continuar
4. Clica nas opções mingw32-base e mingw32-gcc-g++
5. Clica em installation no canto superior esquerdo e em apply changes
6. Clica em Apply e aguarda a instalação
### Agora vamos adcionar-lo às variáveis do sistema(PATH):
1. No File Explorer clica em "Este Computador"
2. Disco Local C:
3. Clica na Pasta MINGW
4. Pasta bin
5. Copia o Caminho
6. Na barra de pesquisa do Windows pode pesquisar por "Variáveis de Ambiente"
7. Clica em "Path" na seção de Variávei de usuário e clica em Editar
8. Cola o caminha copiado e dar Enter
9. Vai no terminal e digita: g++ --version para verificar a instalação.
