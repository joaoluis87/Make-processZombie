# Make-processZombie
Repositorio com programa em C com funcionamente de um processo z e introdução com Makefile.   
Aluno: João Luís Queiroz Castro de Almeida  
Turma: B  
Período: 3  
Cadeira: Infraestrutura de software  

## Para começar   

É necessario clonar o repositorio e fazer a abertura do local dos arquivos com:   

```bash
$ git clone https://github.com/joaoluis87/Make-processZombie.git
$ cd Make-processZombie
```

## Compilar o programa   

Com o repositorio abert, é compilado o programa com o comando "make bin", onde o Makefile realizará o compilamento com "gcc main.c -o main".   

```bash
$ make bin
```

## Rodar o programa   

Já  com o programa compilado, para rodar é necessário o comando "make run", onde o Makefile utilizará do "./main".  

```bash
$ make run
```

## Finalização   

Com a conclusão do programa, o Makefile se propõe apagar o programa compilado com "rm main", para isso é preciso utilizar o comando "make clean".  

```bash
$ make clean
```