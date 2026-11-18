# projeto-eda1

Projeto Avaliativo – Lista de Contatos
A avaliação de nossa disciplina consistirá na elaboração de um programa para inserção,
controle e manipulação dos dados de uma lista de contatos de Clientes para a empresa fictícia ACME
S.A., que contará com informações tais como: número de identificação do cliente, nome do cliente,
empresa onde trabalha, departamento, telefones fixo, celular e e-mail.
Seu programa deverá ser capaz de salvar e recuperar os dados gerados entre seções de
trabalho anteriores e atuais, além de possibilitar a inserção de novos clientes e remoção de clientes
existentes, edição dos dados de clientes já armazenados, e exibição dos dados de clientes.
Ao final de uma seção de trabalho o programa deverá salvar em arquivo, o conteúdo da lista
de contatos da corrente seção para a continuação do trabalho posteriormente, em nova seção, que
por sua vez, recuperará os dados da seção anterior, e assim por diante.
Estruturas de dados do Aplicativo
Seu aplicativo deverá ser baseado no código da estrutura de dados do tipo Lista Dinâmica,
desenvolvida em sala de aula (REQUISITO OBRIGATÓRIO). Deverá ter as funções que manipulam os
dados de entrada e saída, devidamente alteradas para que sejam estejam adequadas e ajustadas as
necessidades do seu programa.
Não é necessário implementar as funções de manipulação da lista não sejam úteis, tais como
inserções no início, remoções no final, etc. A ordenação dos elementos na lista de contatos deverá
ser crescente e baseada no atributo (campo) código, portanto, só há a necessidade de se contar com
as funções de inserção e remoção ordenadas. Ainda com relação ao atributo código, não deve ser
utilizado o incremento automático, e uma verificação de duplicidade também deve ser realizada
durante as inserções de novos clientes.
A funcionalidade de gravação e recuperação de dados entre seções, deverá ser implementada
utilizando o modo gravação binária (REQUISITO OBRIGATÓRIO), salvando as estruturas (structs)
completas, com todos os dados dos clientes. Não salve a estrutura nó (estrutura cliente + ponteiro
prox)!
Isso torna a recuperação dos dados mais simples.
Os nós da Lista Dinâmica deverão ter o formato abaixo para sua utilização na Lista Dinâmica:
Tecnologia em Análise e Desenvolvimento de Sistemas 2026-2
EDA1 - Estruturas de Dados 1
Funcionalidades do Aplicativo – o menu de opções
Todas as funcionalidades do seu programa deverão estar implementadas em funções que
realizarão apenas uma atividade específica por vez. Por exemplo, uma função para realizar a leitura
dos dados, uma para armazenamento dos dados em arquivo, uma para impressão em tela, uma para
edição, etc. Modularize seu programa, isso evita reescrita de código.
Seu aplicativo deverá contar com um menu, exibido de forma ininterrupta, e que terá suas
opções disponíveis acessíveis por números, onde o usuário escolherá a opção que desejar apenas
digitando o número correspondente, teclando enter para confirmar a escolha.
Após finalização da execução de cada funcionalidade, o fluxo de execução seu programa
deverá apagar a tela e retornar ao menu, reapresentando-o, ficando pronto então para novas
tarefas. O menu deverá contar ainda com uma opção específica para encerramento da aplicação,
lembrando que neste ponto deve-se tomar o cuidado com a perda de dados.
O menu terá que contar no mínimo, com as seguintes opções:
• Inserção de novo contato, verificando a duplicidade de códigos (não pode haver dois iguais);
• Gerar e exibir relatório de contatos em forma de lista total;
• Gerar e exibir relatório individual com busca por identificador (código);
• Gerar e exibir relatório com busca por nome (neste caso exibir todos que tenham o mesmo
nome utilizado na busca – Ex: busca = “José” – lista todos os clientes que possuam este mesmo
nome);
• Edição de dados do contato, escolhido por identificador;
• Remover contato, escolhido por identificador;
• Sair e encerrar o programa, porém, antes de sua efetiva finalização, salvando toda a lista para
posterior nova seção de trabalho. Lembre-se: todos os dados estão na memória.
As opções do menu
Inserção de novo contato
Esta opção do menu tratará da inserção de novos clientes na aplicação. Antes da inserção,
uma busca deverá ser realizada na lista de contatos a procura de identificadores (código) duplicados.
Caso haja um cliente que possua o mesmo código já existente na lista, isso deverá ser informado ao
usuário para que informe outro código, ou então aborte a inserção. Estando validado o código
(confirmação de não duplicidade), seus dados deverão ser armazenados na estrutura especifica do
tipo “CLIENTE”, que então no momento da inserção na Lista será atribuída a parte de dados (do nó),
que fará parte da Lista Dinâmica. Após a inserção, apagar a tela e voltar ao menu principal.
Tecnologia em Análise e Desenvolvimento de Sistemas 2026-2
EDA1 - Estruturas de Dados 1
Geração de relatório – Lista Total
A aplicação deverá contar com uma listagem total de clientes em tela, na forma de relatório,
com todos os dados dos clientes armazenados na Lista Dinâmica. Nesta listagem será possível a
verificação dos códigos dos clientes, para posterior utilização em outras funcionalidades. Após a
exibição, apagar a tela e voltar ao menu principal.
Geração de relatório individual – busca por identificador
Este relatório funciona de forma individual para confirmação de dados de clientes específicos.
Informa-se o código de identificação, e então a aplicação exibe todos os dados daquele cliente para
consulta. Após a exibição, apagar a tela e voltar ao menu principal.
Geração de relatório – busca por nome
De forma similar ao anterior, este relatório busca os clientes por nome, sendo também mais
uma forma de identificação dos clientes na base de dados. Vale ressaltar que nesta função é possível
encontrar mais de um cliente com o mesmo nome. Neste caso, todos com o mesmo nome devem
ser exibidos. Um detalhe dever ser observado: A linguagem C é Case Sensitive, tome cuidado com as
buscas. Após a exibição, apagar a tela e voltar ao menu principal.
Edição de dados do contato – busca por identificador
Esta funcionalidade permite a busca, exibição e posterior edição de um cliente. Ela deve ser
disparada pelo fornecimento do código de identificação do cliente.
Após o cliente ser encontrado na Lista Dinâmica, seus dados devem ser exibidos para
confirmação, juntamente com uma mensagem perguntando se o usuário realmente deseja editar
seus dados. Em caso afirmativo, a edição deve acontecer enquanto a aplicação ainda exibe os dados
antigos por uma questão facilitadora para a edição. Na edição de dados, o código não poderá ser
alterado. Caso o erro que se deseja corrigir esteja no código, o elemento deve então ser removido.
Em caso negativo para a edição, a aplicação deverá simplesmente apagar a tela e retornar ao
menu principal.
Remoção de contato – busca por identificador
O funcionamento desta opção do menu é similar ao anterior. A aplicação executará uma
busca pelo código de identificação do cliente armazenado na lista dinâmica, e em seguida exibirá os
dados do cliente em tela. Na sequência deverá exibir uma mensagem solicitando a confirmação de
exclusão. Em caso afirmativo, remove-o da Lista; em caso negativo nada realiza. Ao término de ambos
os casos, a aplicação apaga a tela e retorna ao menu principal.
Tecnologia em Análise e Desenvolvimento de Sistemas 2026-2
EDA1 - Estruturas de Dados 1
Sair do programa – encerramento com segurança
Esta opção encerra a execução da aplicação Lista de Contatos. Porém antes do encerramento
do aplicativo, deve ser executada a rotina para a gravação de todos os dados que estão presentes
na Lista Dinâmica, para o arquivo de dados de forma que não haja perda de informações.
Regras:
• Implementar o código utilizando somente Linguagem C;
• Utilizar o código da estrutura de dados do tipo Lista Dinâmica apresentados em sala de aula
– vetores convencionais para armazenamento dos dados dos clientes, a não utilização de
alocações de memória, códigos de terceiros (pessoas estranhas ao nosso círculo ou código
gerado por IA), invalidam o projeto;
• O arquivo de dados salvos da lista de contatos, deverá entregue para avaliação juntamente
com o aplicativo, possuindo no mínimo 10 registros de clientes previamente gravados para
os testes funcionais de avaliação, assim como todos os arquivos gerados pela IDE
CodeBlocks;
• Extremamente importante informar, com comentários, o que e como as rotinas (funções)
funcionam (lembrem-se: eu não conheço o seu raciocínio, portanto comentem!!!), vale
pontos;
• Projetos copiados (e o Trabalho que serviu de fonte - inclusive) terão nota 0 – Lembre-se:
todos os projetos de semestres anteriores estão arquivados e serão checados;
• O projeto poderá ser realizado em duplas ou individualmente;
• Use o bom senso, faça o simples não complique! Implemente uma funcionalidade por vez,
facilitando assim a correção dos possíveis erros durante o seu desenvolvimento.
O Trabalho deve ser entregue com:
• Todos os arquivos do projeto (executáveis, fontes, bibliotecas, TODOS os arquivos gerados
pela IDE CodeBlocks e módulos de funções), todos bem indentados e comentados quando for
o caso, em data especificada na plataforma AVA/Moodle;
• Um relatório deverá ser entregue, em padrão ABNT juntamente com o projeto, em formato
PDF (sua falta acarreta em penalização de 2 pontos) e deverá conter:
o Nome e prontuário individual ou dos integrantes da dupla.
o As decisões de implementação tomadas, uma visão geral do funcionamento do
programa, resultado dos testes, quais foram os problemas, e como foram resolvidos,
etc
