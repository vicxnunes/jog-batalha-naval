# 🚢 Projeto Batalha Naval - Linguagem C

Este projeto foi desenvolvido como parte da disciplina de programação em C, com o objetivo de aplicar os conceitos de matrizes, vetores, validação de posições e estruturação de código por etapas de dificuldade.

O jogo é dividido em **três níveis**:

- **Nível Novato**
- **Nível Aventureiro**
- **Nível Mestre**

---

## 🧱 Nível Novato

### Objetivos

- Criar um **tabuleiro 10x10** usando uma **matriz bidimensional**
- Criar **dois vetores unidimensionais** representando navios (tamanho fixo = 3)
- Posicionar:
  - Um navio **horizontalmente**
  - Um navio **verticalmente**
- Validar:
  - Se os navios **não saem dos limites**
  - Se **não se sobrepõem**
- Representação:
  - `0` = água
  - `3` = navio

---

## ⚓ Nível Aventureiro

### Objetivos

- Reaproveitar o tabuleiro criado no nível Novato
- Adicionar **dois navios em diagonal**:
  - Um na **diagonal principal** (↘)
  - Outro na **diagonal secundária** (↙)
- Validar:
  - Se os navios estão dentro do tabuleiro
  - Se não se sobrepõem a outros navios

---

## ✨ Nível Mestre

### Objetivos

- Adicionar **três habilidades especiais** com área de efeito:
  - **Cone**
  - **Cruz**
  - **Octaedro**
- Cada habilidade é representada por uma **matriz 5x5** com valores `0` e `1`
- Sobrepor essas matrizes ao tabuleiro em posições fixas
- No tabuleiro principal:
  - Onde houver `1` na matriz de habilidade e `0` no tabuleiro, marcar com `5`

### Representação

- `0` = água  
- `3` = navio  
- `5` = área de efeito de habilidade

---

## ✅ Requisitos Atendidos

- [x] Uso de matriz 10x10 para o tabuleiro
- [x] Vetores para representar os navios
- [x] Posicionamento horizontal, vertical e diagonal
- [x] Validação de limites e sobreposição
- [x] Uso de `for` e `if`
- [x] Matrizes para habilidades especiais (Cone, Cruz, Octaedro)
- [x] Impressão organizada no console
- [x] Código comentado e legível

---

## 📘 Legenda do Tabuleiro

| Valor | Significado                 |
|-------|-----------------------------|
| `0`   | Água                        |
| `3`   | Parte de um navio           |
| `5`   | Área afetada por habilidade |

---

## 🧠 Como Executar

1. Copie o arquivo `.c` para o seu ambiente (Code::Blocks, DevC++, etc)
2. Compile e execute
3. Observe o tabuleiro com os navios e habilidades no console

---

## 👩‍💻 Desenvolvido por

**Victória de Carvalho Nunes**  
Estudante de Análise e Desenvolvimento de Sistemas da Estácio  
Disciplina: Introdução à Programação de Computadores  
Professor: Nathan de Freitas Alves  
Projeto acadêmico 2025


