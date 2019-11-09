# Software de controle de estoque

Grupo:
  - Pedro Henrique Silva Domingues R.A.: 22.218.019-2
  - Edgar Gomes R.A.: 22.118.035-9
  - Ibrahim Jamil Orra R.A.: 22.118.183-7
  
##### O software é dividido na seguinte estrutura:
  1. Armazém
    
    > Função: Abstrair um local onde varios tipos de produto são guardados;
    
    > Implementação: Através de uma Hash(junto a uma LDDE) e uma LDE que armazenam objetos do tipo estoque.
  
  2. Estoque
  
    > Função: Abstrair uma parte do armazém, onde produtos similares se encontram, mantendo controle de valor acumulado e quantidade de produtos;
    
    > Implementação: Através de uma classe stock, que guarda informações relevantes e uma estrutura polimorfica que dita a forma de armazenagem e remoção (podendo ser uma pilha ou uma fila).
  
  3. Produto
  
    > Função: Abstrair um produto genérico, que possui preço, numero de identificação e nome;
    
    > Implementação: Por meio de uma classe product.
    
    
 ## Funcionamento:
 
  Para criar um armazém e inserir estoques e produtos, utilize a barra "arquivo/novo", as opções serão disponibilizadas apenas se possiveis (ex: um produto só pode ser criado quando existe pelomenos um estoque, portanto a opção estará disponivel no momento que pelomenos um estoque for instanciado), como demonstrado a seguir:
  
  ![Criar item](/imgsReadme/Armazem.png)
  
  
  Ao clicar em uma opção de criação (com exceção do armazém, pois só é possivel ter 1 deste), uma janela de customização será aberta.
  
  ![Janelas](/imgsReadme/Adicionar.png)
  
  Conforme itens forem criados, a hierarquia será mostrada no cando esquerdo da tela em forma de arvore, porém para informações mais detaladas clique no item desejado e os detalhes aparecerão no canto direito.
  
  ![Criar item](/imgsReadme/Arvore_info.png)
  
  Se duvidas surgirem durante o uso do software, experimente utilizar o botão de "?" para mais informações.
  
  ![Criar item](/imgsReadme/Info.png)
