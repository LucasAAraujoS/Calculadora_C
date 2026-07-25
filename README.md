# Calculadora_C

Calculadora simples de console capaz de executar as quatro operações básicas:
* Soma
* Subtração
* Multiplicação
* Divisão (com tratamento de divisão por 0)

## Estrutura do Projeto
```
Calculadora_C/
├─── header/
│    └─── calculadora.h      # Declaração dos protótipos e enums das operações
├─── logic/
│    └─── calculadora.c      # Implementação das funções matemáticas
├─── main/
│    └─── main.c             # Interface do usuário e controle de fluxo
└─── README.md               # Documentação do projeto
```

## Como Compilar e Executar

Como o projeto está modularizado em diferentes diretórios, é necessário indicar a pasta `header/` durante a compilação.

### Pré-Requisitos

* Compilador GCC instalado e configurado no PATH do sistema.

### 1. Clonar o Repositório
```bash
git clone https://github.com/LucasAAraujoS/Calculadora_C.git
cd Calculadora_C
```

### 2. Compilar o Projeto
* No Windows:
```bash
gcc -I.\header .\logic\calculadora.c .\main\main.c -o calculadora
```
* No Linux/macOS:
```bash
gcc -I./header ./logic/calculadora.c ./main/main.c -o calculadora
```

### 3. Executar o Programa
* No Windows
```bash
.\calculadora.exe
```
* No Linux/macOS
```bash
./calculadora.exe
```

## Melhorias Futuras
* Implementação de mais operações, como resto da divisão, exponenciação, logaritmo, etc.
* Criação de uma interface gráfica para o sistema.
