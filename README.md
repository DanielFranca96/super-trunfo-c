# 🃏 Super Trunfo em C

Projeto desenvolvido como atividade acadêmica da disciplina **Introdução à Programação de Computadores**.

O projeto simula o cadastro e comparação de cartas do jogo **Super Trunfo de Países**, evoluindo em níveis progressivos conforme o aprendizado na linguagem C.

---

# 📌 Objetivo

Implementar um programa em linguagem C capaz de:

- Cadastrar cartas do jogo Super Trunfo
- Calcular atributos derivados
- Comparar duas cartas
- Exibir os resultados das comparações

O projeto é dividido em três níveis evolutivos:

- 🏅 Novato  
- 🏹 Aventureiro  
- 👑 Mestre  

---

# 🏅 Nível Novato (Inicial)

## 🎯 Funcionalidades

- Leitura de dados via teclado
- Armazenamento em variáveis apropriadas
- Exibição formatada das informações
- Código sequencial (sem estruturas de repetição ou decisão)

## 📝 Dados cadastrados

Para cada carta:

- Estado (A–H)
- Código da Carta (ex: A01)
- Nome da Cidade
- População
- Área (km²)
- PIB
- Número de Pontos Turísticos

## ⚙️ Requisitos

- Entrada de dados via `scanf`
- Saída organizada com `printf`

---

# 🏹 Nível Aventureiro

Neste nível foram adicionados cálculos automáticos com base nos dados informados.

## 📊 Novos Cálculos

### ✅ Densidade Populacional

```
densidade = população / área
```

- Tipo: `float`
- Representa habitantes por km²
- Exibida com duas casas decimais

---

### ✅ PIB per Capita

```
pib_per_capita = PIB / população
```

- Tipo: `float`
- Indica a riqueza média por pessoa
- Exibido com duas casas decimais

---

## 🖥️ Exibição

Além dos dados básicos do Nível Novato, agora também são exibidos:

- Densidade Populacional
- PIB per Capita

---

# 👑 Nível Mestre (Atual)

O nível mais avançado do projeto adiciona **comparação entre cartas** e o cálculo do **Super Poder**.

---

## 🚀 Novas Implementações

### 🔹 Cadastro de Duas Cartas

O programa agora permite inserir os dados de **duas cartas** para comparação.

---

### 🔹 Alteração no Tipo da População

A variável população passou a ser:

```c
unsigned long int populacao;
```

Isso permite armazenar números maiores com mais segurança.

As demais variáveis permanecem com os mesmos tipos anteriores.

---

## 📊 Cálculos Mantidos

Continuam sendo calculados:

- Densidade Populacional (`float`)
- PIB per Capita (`float`)

---

## ⭐ Super Poder

Novo atributo especial calculado para cada carta.

```
Super Poder = população + área + PIB + número de pontos turísticos + PIB per capita + (1 / densidade populacional)
```

### 🔎 Regras Importantes

- O inverso da densidade é utilizado porque **quanto menor a densidade, maior o poder**.
- O Super Poder é armazenado como `float`.
- É necessário realizar **conversão de tipos (casting)** ao somar diferentes tipos numéricos:
  - `unsigned long int`
  - `int`
  - `float`

---

# ⚔️ Comparação das Cartas

As duas cartas são comparadas atributo por atributo.

## 📌 Atributos Comparados

- População
- Área
- PIB
- Número de Pontos Turísticos
- Densidade Populacional
- PIB per Capita
- Super Poder

---

## 🏆 Regras de Vitória

- ✅ **Densidade Populacional** → vence a carta com **menor valor**
- ✅ **Demais atributos (incluindo Super Poder)** → vence a carta com **maior valor**

---

# 🖥️ Saída do Programa

Para cada atributo comparado, o programa imprime:

- `1` → Carta 1 venceu  
- `0` → Carta 2 venceu  

Exibindo claramente o resultado das comparações.

---

# 📚 Conceitos Aplicados

Durante a evolução do projeto foram praticados:

- Tipos de dados primitivos
- Operações matemáticas
- Conversão de tipos (casting)
- Operadores relacionais
- Entrada e saída de dados
- Organização progressiva de código

---

# 📈 Evolução do Projeto

| Nível        | Conceito Principal              |
|-------------|---------------------------------|
| 🏅 Novato     | Entrada e saída de dados        |
| 🏹 Aventureiro | Cálculos matemáticos            |
| 👑 Mestre     | Comparações e lógica de decisão |

---
