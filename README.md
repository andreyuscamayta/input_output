# Pratica 0: Input/Output
Os **bots** são robôs que desempenham tarefas automatizadas pré-definidas, amplamente utilizados em uma série de plataformas e serviços online.


## Parte 1: Criar Scratch à partir do código
O código-fonte `parte1.c` está simulando um *bot* de uma loja de informática.

O desafio será criar um programa utilizando o sistema web [SCRATCH](https://scratch.mit.edu) para programação visual que execute passo a passo o que `parte1.c` faz.

Finalmente altere o arquivo `parte1.c` na linha` 12` adicionando o link para o seu projeto scratch como por exemplo:

> #SCRATCH#`XXXXXXX`

Onde:
`XXXXXXX` seria o url do seu projeto

### Como executar o código
Altere o arquivo `.replit` substituindo-o pelo seguinte código:
```
language = "c"
run = "gcc parte1.c -o parte1.o;./parte1.o"
``` 
Clique no botão `run`, que agora irá compilar e executar o arquivo **parte1.c**.

### Tarefas de avaliação automática
1. Será avaliado que o output mostre a url do seu projeto em SCRATCH

## Parte 2: Criar codigo a partir do scratch
Foi fornecido um [projeto](https://scratch.mit.edu/projects/494279233) no sistema web [SCRATCH](https://scratch.mit.edu), que simula um *bot* de um hospital.

O desafio é visualizar, testar e analisar o [projeto](https://scratch.mit.edu/projects/494279233) para depois simular na linguagem de programação `C`. Para fazer isso, você precisa fazer alterações no arquivo `parte2.c`.


### Como executar o código
Altere o arquivo `.replit` substituindo-o pelo seguinte código:
```
language = "c"
run = "gcc parte2.c -o parte2.o;./parte2.o"
``` 
Clique no botão `run`, que agora irá compilar e executar o arquivo **parte2.c**.

### Tarefas de avaliação automática
1. Sera avaliado que o input espere por duas entradas
2. Sera avaliado que o output mostre os imput formatado