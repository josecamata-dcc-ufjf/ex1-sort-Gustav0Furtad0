 # Algoritmos de Ordenação (Parte 1) :mega:

## Objetivos:
Aprender os algoritmos básicos de ordenação. 
Espera-se que ao final desta atividade você seja capaz de classificar informaçoes usando métodos básicos de ordenação e 
compreender os principais conceitos relacionados aos métodos.

## 📝 Métodos de Ordenação Básicos:

Na última aula vimos os seguintes métodos de ordenação
 - Método da Bolha :snail:
 - Método da Seleção
 - Método da Inserção
 - Método MergeSort :checkered_flag:
 
## O que deve ser feito? 

### 1 - Configuração do projeto :gear:

Seu projeto deve ter a seguinte estrutura de arquivos:
```
.
  ./src
  ./include
  ./tests
  CMakeLists.txt
 ```
onde,
 - *src* deve conter todos os arquivos .cpp, .cc , .C, .cxx, etc.
 - *include* deve conter os arquicos .h, *.hpp.
 - *tests* deve conter o código-fonte dos teste. 

Crie um projeto CMake que cria uma biblioteca chamada *libsort* do código-fonte das pastas *src* e *include*

### 2 - Implementação dos métodos de ordenação

Da lista dos métodos acima, você obrigatoriamente deve implementar o *MergeSort*. Você também deve escolher um segundo 
método da lista e implementá-lo. Considere que os métodos irão ordenar vetores de números inteiros de 
tamanho N.

Tente por uma implementação genérica que possa ser utilizada com qualquer tipo de dado.

:mag_right: Dica: [C++ Template](https://cplusplus.com/doc/oldtutorial/templates/)

### 3 - Implementação de testes 

 - Implemente uma função que dado um vetor de tamanho N, preencha-o com inteiros aleatórios entre 0 a N.
 - Para cada método de ordenação, crie um rotina de teste. O teste deve verificar se a ordenação está correta. Você pode comparar a saida do seu código com a [rotina de ordenação do C++](https://cplusplus.com/reference/algorithm/sort/).

### 4 -  Avaliação de desempenho

Implemente uma programa que, para diferentes valores de N avalie o desempenho do método de ordenação em relação ao tempo de processamento.

:mag_right: Dica: use a biblioteca C++ chronos. Veja um exemplo [aqui](https://www.techiedelight.com/measure-elapsed-time-program-chrono-library/).

Avalie para diferentes valores de N. Por exemplo, N=100,500, 1000, 5000, 10000.


## Compilação e execução

Seu projeto deve compilar a biblioteca *libsort* e link-editar com os casos de testes e ao programa de avaliação de desempenho ao 
executar os comandos abaixo:

```
mkdir build
cmake ..
make
```
Se tudo estiver certo, os executáveis deverão estar na pasta ./build/tests e/ou ./build.

:mag_right: Diga: Use CTest para executar a verificação dos testes. Com isso os testes serão rodados na chamada do comando ctest.

**Divirtam-se!!!** :tada: :balloon:

## Extras:

- Caso faça alocação dinâmica, lembre-se de desalocá-los no final. Uma boa ferramenta para fazer essa verificação é o [Valgrind](https://valgrind.org/)

