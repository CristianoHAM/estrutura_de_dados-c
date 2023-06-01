## Listade Exercícios - Structs

<ol>

<li>
Crie uma struct "Pessoa" com os campos "nome", "idade" e "altura". Emseguida, declare duas variáveis desse tipo e preencha-as com dados diferentes. Imprima as informações na tela. Você deverá exibir seu nome e mais um outro aleatório.
</li>

<li>
Crie uma struct "Carro" com os campos "marca", "modelo", "ano" e "preço". Emseguida, declare um array dessa struct com tamanho 3 e preencha-o com informações de carros diferentes. Em seguida, percorra o array e imprima as informações de cada carro na tela. 
</li>

<li>
Crie uma struct "Livro" com os campos "título", "autor", "ano de publicação" e "editora". Em seguida, declare um ponteiro para essa struct e aloque espaço na memória para ele. Preencha as informações do livro usando o ponteiro e imprima as informações na tela.
</li>

<li>
Crie uma struct "Retângulo" com os campos "largura" e "altura". Em seguida, declare uma variável dessa struct e preencha-a com valores lidos do teclado. Em seguida, calcule a área do retângulo e imprima o resultado na tela.
</li>

<li>
Crie uma struct "Ponto" com os campos "x" e "y". Em seguida, declare duas variáveis dessa struct e preencha-as com valores lidos do teclado. Em seguida, calcule a distância entre esses dois pontos e imprima o resultado na tela.
</li>

</ol>


##  Tarefa 2 - Exercícios - Structs - TypeDef

<li>
Crie uma estrutura para representar um aluno, contendo nome, matrícula, nota AV1, nota AV2 e nota AV3. 
</li>

<li>
Essa estrutura deve armazenar 3 alunos.
</li>

<li>
Obs.: O primeiro aluno deverá ter  o seu nome.
</li>

<li>
Crie uma outra estrutura para representar uma turma, contendo nome, código da disciplina e um vetor de alunos. 
</li>

<li>
OBS.: o código da turma será digitado pro você e deve corresponder ao criado no SIA. 
</li>

<li>
Use typedef para criar novos tipos para essas estruturas.
</li>

<li>
Escreva funções para calcular a média (deverá ser desconsiderada a menor nota entre a AV1, AV2 e AV3). 
</li>

<li>
As notas só poderão ir de 0 a 10.
</li>

<li>
Escreva a situação final (aprovado ou reprovado) de cada aluno. Lembrando que para aprovação a média deverá ser maior do que 6.
</li>

## Listade Exercícios - Procedimentos e Funções
<ol>
<li>Escreva uma função em C que receba dois números inteiros e retorne a soma dos mesmos.</li>

<li>Crie um procedimento que receba uma string e imprima a mesma invertida.</li>

<li>Escreva uma função que receba um vetor de inteiros e retorne o maior valor presente no vetor.</li>

<li>Crie uma função que receba dois números inteiros e retorne o resultado da multiplicação desses números.</li>

<li>Escreva um procedimento que receba um vetor de inteiros e imprima na tela todos os valores presentes no vetor.</li>

<li>Crie uma função que receba um número inteiro e retorne o fatorial desse número.</li>

<li>Escreva um procedimento que receba dois vetores de inteiros e um terceiro vetor vazio. O procedimento deve preencher o terceiro vetor com a soma dos valores dos dois primeiros vetores nas respectivas posições.</li>

<li>Crie uma função que receba um número inteiro e retorne verdadeiro caso o número seja primo e falso caso contrário.</li>

<li>Escreva um procedimento que receba um vetor de inteiros e ordene o vetor em ordem crescente.</li>

<li>Crie uma função que receba um número inteiro e retorne a quantidade de dígitos presentes no número.</li>
</ol>


## Lista de Exercícios - Manipulando Arquivos

1. Escreva um programa em C para criar e armazenar informações em um arquivo de texto. Dados de teste: Insira uma frase para o arquivo: Este é o conteúdo do arquivo teste.txt. Saída esperada:

O arquivo teste.txt foi criado com sucesso...!!

2. Escreva um programa em C para ler um arquivo existente.

Dados de teste: Insira o nome do arquivo a ser aberto: teste.txt Saída esperada:

O conteúdo do arquivo teste.txt é:

Este é o conteúdo do arquivo teste.txt.

3. Escreva um programa em C para escrever várias linhas em um arquivo de texto. Dados de teste: Insira o número de linhas a serem escritas: 4 :: As linhas são:

linha de teste1 linha de teste 2 linha de teste 3

linha de teste 4

Saída esperada:

O conteúdo do arquivo teste.txt é:

linha de teste 1

linha de teste 2

linha de teste 3

linha de teste 4

4. Escreva um programa em C para encontrar o número de linhas em um arquivo de texto.

Dados de Teste: Insira o nome do arquivo a ser aberto: teste.txt Saída esperada:

As linhas no arquivo teste.txt são:4

5. Escreva um programa em C para contar um número de palavras e caracteres em um arquivo. Dados de Teste: Insira o nome do arquivo a ser aberto: teste.txt Saída esperada:

O conteúdo do arquivo teste.txt é:

linha de teste 1

linha de teste 2

linha de teste 3

linha de teste 4

O número de palavras no arquivo teste.txt são: 12

O número de caracteres no arquivo teste.txt são: 36

6. Escreva um programa em C para deletar uma linha específica de um arquivo.

Suponha que o conteúdo do arquivo teste.txt seja:

linha de teste 1

linha de teste 2

linha de teste 3

linha de teste 4

Dados de teste: Insira o nome do arquivo a ser aberto: teste.txt Insira a linha que deseja remover: 2 Saída esperada:

O conteúdo do arquivo teste.txt é:

linha de teste 1

linha de teste 3

linha de teste 4

7. Escreva um programa em C para substituir uma linha específica por outro texto em um arquivo.

Suponha que o conteúdo do arquivo teste.txt seja:

linha de teste 1

linha de teste 2

linha de teste 3

linha de teste 4

Dados de teste: Insira o nome do arquivo a ser aberto: teste.txt Insira o conteúdo da nova linha: Sim, eu sou o novo texto em vez da linha de teste 2 Insira a linha que você deseja substituir: 2 Saída esperada:

Substituição realizada com sucesso..!!

8. Escreva um programa em C para acrescentar várias linhas no final de um arquivo de texto.

Suponha que o conteúdo do arquivo teste.txt seja:

linha de teste 1

linha de teste 2

linha de teste 3

linha de teste 4

Dados de teste: Insira o nome do arquivo a ser aberto: teste.txt Insira o número de linhas a serem escritas: 3

As linhas são:

linha de teste5 linha de teste 6

linhas de teste 7

Saída esperada:

O conteúdo do arquivo teste.txt é:

linha de teste 1

linha de teste 2

linha de teste 3

linha de teste 4

linha de teste 5

linha de teste 6

linha de teste 7

9. Escreva um programa em C para copiar um arquivo com outro nome.

Suponha que o conteúdo do arquivo teste.txt seja:

linha de teste 1

linha de teste 2

linha de teste 3

linha de teste 4

Dados de teste: Insira o nome do arquivo de origem: teste.txt Insira o novo nome do arquivo: teste1.txt Saída esperada:

O arquivo teste.txt foi copiado com sucesso no arquivo teste1.txt.

Se você ler o novo arquivo, verá o conteúdo do arquivo:

linha de teste 1

linha de teste 2

linha de teste 3

linha de teste 4

10. Escreva um programa em C para mesclar dois arquivos e escreva-o em um novo arquivo.

Suponha que o conteúdo do arquivo teste.txt e teste1.txr seja:

O conteúdo do arquivo teste.txt é:

Este é o arquivo teste.txt.

O conteúdo do arquivo teste1.txt é:

Este é o arquivo teste1.txt.

Dados de teste: Insira o nome do primeiro arquivo: teste.txt Insira o nome do segundo arquivo: teste1.txt Insira o novo nome do arquivo onde mesclar os dois arquivos acima: mergefiles.txt Saída esperada:

Os dois arquivos foram mesclados no arquivo mergefiles.txt com sucesso...!!

Aqui está o conteúdo do arquivo de mesclagem mergefiles.txt :

O conteúdo do arquivo mergefiles.txt é:

Este é o arquivo teste.txt.

Este é o arquivo teste1.txt.

11. Escreva um programa em C para remover um arquivo do disco.

Dados de teste: Insira o nome do arquivo a ser excluído: teste.txt Saída esperada:

O arquivo teste.txt foi excluído com sucesso...!!



## Trabalhando com Lista Linear - 1 ponto extra

<ul>
<li>Implemente uma lista linear estática (tamanho máximo 100) em C.</li>
<li>Essa lista deve permitir as seguintes operações:
  <ul>
    <li>Inserção de um elemento na lista</li>
    <li>Busca por um elemento na lista</li>
    <li>Remoção de um elemento da lista</li>
  </ul>
</li>
<li>Você deve implementar três funções em seu programa para realizar essas operações: insere(), busca() e remove_valor().</li>
<li>A função insere() deve receber como parâmetros a lista e o valor a ser inserido.</li>
<li>A função busca() deve receber como parâmetros a lista e o valor a ser buscado.</li>
<li>A função remove_valor() deve receber como parâmetros a lista e o valor a ser removido.</li>
<li>Caso a lista esteja cheia, a função insere() deve imprimir uma mensagem de erro informando que a lista está cheia.</li>
<li>A função busca() deve retornar o índice do elemento encontrado ou -1 caso o elemento não seja encontrado.</li>
<li>A função remove_valor() deve imprimir uma mensagem informando se o valor foi removido com sucesso ou se o valor não foi encontrado na lista.</li>
<li>Ao final do programa, você deve testar as funções criando uma lista vazia e realizando algumas operações de inserção, busca e remoção de valores.</li>
</ul>



# Lista de Exercícios - Lista, Pilhas e Filas

## Exercício 1

Implemente um programa em C que receba uma lista encadeada de números inteiros. O programa deve remover todos os elementos da lista que possuam chaves pares e, em seguida, imprimir a lista resultante. Considere que a lista é representada por uma estrutura encadeada, onde cada nó possui um campo 'chave' que armazena o valor do elemento e um ponteiro 'proximo' que aponta para o próximo nó da lista. O programa deve percorrer a lista, identificar os nós com chaves pares e removê-los adequadamente, ajustando os ponteiros dos nós adjacentes. Após a remoção dos elementos com chaves pares, o programa deve imprimir a lista resultante, exibindo os elementos restantes em sua ordem original.

**Exemplo de entrada:**

Lista: [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]

**Saída esperada:**

Lista resultante: [1, 3, 5, 7, 9]

**Observações:**
- O programa deve ser implementado utilizando a linguagem C.
- A implementação da lista encadeada e das operações de remoção devem ser realizadas.

## Exercício 2

Implemente um programa em C que simule o jogo da Torre de Hanói. O jogo consiste em mover uma pilha de discos de uma torre de origem para uma torre de destino, utilizando uma torre auxiliar. As regras do jogo são as seguintes:
- Apenas um disco pode ser movido de cada vez.
- Um disco maior nunca pode ser colocado sobre um disco menor.
- Os discos devem ser movidos da torre de origem para a torre de destino, utilizando a torre auxiliar como suporte.

O programa deve solicitar ao usuário o número de discos a serem movidos e, em seguida, exibir os passos necessários para resolver o jogo da Torre de Hanói com esse número de discos.

**Exemplo de entrada:**

Digite o número de discos: 3

**Saída esperada:**

Passos para resolver a Torre de Hanoi com 3 discos:
- Mover disco 1 da Torre A para a Torre C
- Mover disco 2 da Torre A para a Torre B
- Mover disco 1 da Torre C para a Torre B
- Mover disco 3 da Torre A para a Torre C
- Mover disco 1 da Torre B para a Torre A
- Mover disco 2 da Torre B para a Torre C
- Mover disco 1 da Torre A para a Torre C

**Observações:**
- O programa deve ser implementado em linguagem C.
- Utilize uma função recursiva para resolver o problema da Torre de Hanoi.
- Considere que o número de discos fornecido pelo usuário será um valor válido e positivo.
