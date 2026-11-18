# Projeto Avaliativo — Lista de Contatos

## Disciplina

- **Curso:** Tecnologia em Análise e Desenvolvimento de Sistemas  
- **Disciplina:** EDA1 — Estruturas de Dados 1  
- **Período:** 2026-2

## 1. Descrição do Projeto

A avaliação consiste no desenvolvimento de uma aplicação em C para gerenciar uma lista de contatos da empresa fictícia **ACME S.A.**

O programa deverá armazenar:

- Código de identificação;
- Nome;
- Empresa;
- Departamento;
- Telefone fixo;
- Telefone celular;
- E-mail.

---

## 2. Funcionalidades

A aplicação deverá permitir:

- Inserir novos contatos;
- Remover contatos existentes;
- Editar dados de contatos;
- Exibir todos os contatos;
- Buscar contatos pelo código;
- Buscar contatos pelo nome;
- Salvar os dados em arquivo;
- Recuperar dados de sessões anteriores;
- Encerrar a aplicação com segurança.

---

## 3. Estruturas de Dados

O projeto deverá ser baseado na **Lista Dinâmica** apresentada em sala de aula.

Cada nó da lista deverá conter:

- Uma variável do tipo `CLIENTE`;
- Um ponteiro para o próximo nó.

> Vetores convencionais não podem ser utilizados para armazenar os dados dos clientes.

---

## 4. Regras da Lista

- A inserção deverá ser realizada de forma ordenada;
- Os contatos deverão estar ordenados em ordem crescente pelo código;
- Não deverá haver código duplicado;
- Não deverá haver incremento automático de código;
- Não será necessário implementar inserções ou remoções em posições que não sejam úteis à aplicação;
- O código do contato não poderá ser alterado durante a edição;
- Caso o código precise ser corrigido, o contato deverá ser removido e inserido novamente.

---

## 5. Persistência dos Dados

A aplicação deverá guardar e recuperar os dados entre diferentes execuções.

Requisitos:

- Utilizar **gravação binária**;
- Salvar as estruturas `CLIENTE` completas;
- Não salvar a estrutura do nó;
- Não salvar ponteiros;
- Recuperar os dados no início da execução;
- Salvar todos os dados ao encerrar o programa.

---

## 6. Menu da Aplicação

O menu deverá permanecer disponível enquanto o programa estiver em execução.

As opções deverão ser acessadas por meio de números.

### Opções obrigatórias

1. Inserir novo contato;
2. Exibir todos os contatos;
3. Buscar contato pelo código;
4. Buscar contatos pelo nome;
5. Editar um contato;
6. Remover um contato;
7. Sair e salvar os dados.

Após a execução de uma opção:

- A tela deverá ser limpa;
- O usuário deverá retornar ao menu principal;
- A aplicação deverá aguardar uma nova operação.

---

## 7. Funcionalidades do Menu

### 7.1 Inserção de Novo Contato

Ao inserir um cliente:

1. Solicitar o código de identificação;
2. Verificar se o código já existe na lista;
3. Informar ao usuário caso haja duplicidade;
4. Solicitar os demais dados;
5. Armazenar os dados em uma estrutura `CLIENTE`;
6. Inserir o cliente na posição correta da lista;
7. Limpar a tela e voltar ao menu.

---

### 7.2 Relatório Completo

A aplicação deverá exibir todos os contatos armazenados na lista.

O relatório deverá apresentar todos os dados dos clientes.

Após a exibição:

- Limpar a tela;
- Retornar ao menu principal.

---

### 7.3 Busca por Identificador

Solicitar o código do cliente e:

- Buscar o cliente na lista dinâmica;
- Exibir todos os dados do cliente, caso ele seja encontrado;
- Informar ao usuário caso o código não exista.

---

### 7.4 Busca por Nome

Solicitar o nome do cliente e:

- Buscar todos os contatos que possuam esse nome;
- Exibir todos os contatos encontrados;
- Considerar a distinção entre letras maiúsculas e minúsculas;
- Informar ao usuário caso nenhum contato seja encontrado.

---

### 7.5 Edição de Contato

Ao editar um contato:

1. Solicitar o código;
2. Localizar o cliente na lista;
3. Exibir os dados atuais;
4. Perguntar se o usuário deseja realizar a edição;
5. Permitir a alteração dos dados, exceto o código;
6. Salvar as alterações na estrutura do cliente;
7. Limpar a tela e voltar ao menu.

O código não poderá ser alterado nesta operação.

---

### 7.6 Remoção de Contato

Ao remover um contato:

1. Solicitar o código;
2. Localizar o cliente na lista;
3. Exibir seus dados;
4. Solicitar confirmação;
5. Remover o nó correspondente, caso a exclusão seja confirmada;
6. Informar o usuário caso o código não exista;
7. Limpar a tela e voltar ao menu.

---

### 7.7 Encerramento da Aplicação

Ao escolher a opção de saída:

- Os dados da lista deverão ser gravados em arquivo;
- Nenhuma informação presente na memória deverá ser perdida;
- Somente após concluir a gravação a aplicação deverá ser encerrada.

---

## 8. Organização do Código

As funcionalidades deverão ser implementadas em funções separadas.

A aplicação deverá conter, por exemplo:

- Função para leitura dos dados;
- Função para inserir clientes;
- Função para remover clientes;
- Função para editar clientes;
- Função para buscar clientes;
- Função para exibir relatórios;
- Função para salvar os dados;
- Função para recuperar os dados;
- Função para liberar a memória da lista.

Cada função deverá realizar uma única responsabilidade.

---

## 9. Requisitos de Implementação

- Implementar o projeto exclusivamente em **linguagem C**;
- Utilizar a estrutura de Lista Dinâmica apresentada em sala de aula;
- Não utilizar vetores convencionais para armazenar os dados dos clientes;
- Não utilizar alocações fora da estrutura solicitada;
- Não utilizar código produzido por terceiros ou por inteligência artificial;
- Comentar as rotinas, explicando o que fazem e como funcionam;
- Escrever um código indentado e organizado;
- Desenvolver o projeto individualmente ou em dupla.

---

## 10. Arquivos para Entrega

A entrega deverá conter:

- Todos os arquivos do projeto;
- Arquivos fonte;
- Bibliotecas utilizadas;
- Executável da aplicação;
- Todos os arquivos gerados pela IDE CodeBlocks;
- Arquivo binário com os dados cadastrados;
- Pelo menos 10 registros de clientes previamente gravados;
- Relatório em formato PDF;
- Comentários explicativos no código;
- Arquivos contendo os módulos de funções utilizados.

---

## 11. Relatório Acadêmico

O relatório deverá seguir o padrão ABNT e conter:

- Nome e prontuário dos integrantes;
- Decisões tomadas durante a implementação;
- Visão geral do funcionamento do programa;
- Resultados dos testes realizados;
- Problemas encontrados;
- Estratégias utilizadas para resolver os problemas.

A ausência do relatório acarreta penalização de **2 pontos**.
