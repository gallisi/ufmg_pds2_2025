# ufmg_pds2_2025
Repositório para o trabalho da disciplina "Programação e Desenvolvimento de Software 2" ministrada na UFMG em 2025/1. 
Aluna responsável: Larissa Gabrielli

# Sistema de reserva de passagens e hoteis


Esse projeto visa desenvolver um sistema de reserva de passagems de avião e quartos de hotel semelhante aos aplicativos Decolar, Kayak, entre outros. Através dele é possível que:
- Clientes busquem, efetuem e gerenciem reservas de voos e quartos de hotel;
- Hoteis cadastrem e gerenciem seus quartos;
- Companhias aéreas cadastrem e gerenciem voos.


## Requisitos
Instalação do C++ funcional.


## Configuração do ambiente
*Em construção*


## Como contribuir
*Em construção*


## User stories


Como **cliente**, quero fazer login para interagir com o sistema através da minha conta.


Critérios de aceitação:
- Função de login;
- Função de alterar a senha.




Como **cliente**, quero buscar hotéis por data e localização para encontrar a melhor opção para minha viagem.


Critérios de aceitação:
- Exibir de hotéis disponíveis nos destinos selecionados;
- Exibir de hotéis disponíveis nas datas de check-in/check-out.






Como **cliente**, eu quero visualizar os quartos disponíveis no hotel selecionado para escolher a melhor opção para minha reserva.


Critérios de aceitação:
- Listar quartos disponíveis por data de check-in/check-out;
- Exibir características de cada quarto;
- Se não houver quartos disponíveis, exibir mensagem de aviso.




Como **cliente**, eu quero buscar voos disponíveis, para escolher a opção que melhor atenda às minhas necessidades de viagem.


Critérios de aceitação:
- Exibir voos que chegam ao destino (seja na ida ou na volta) na data selecionada;
- Mostrar dia e horário de partida, dia e horário de chegada, quantidade de conexões e companhia aérea para cada voo;
- Se não houver quartos disponíveis, exibir mensagem de aviso.




Como **cliente**, eu quero visualizar, cancelar ou modificar uma reserva para ajustar minha viagem conforme imprevistos.


Critérios de aceitação:
- Exibir reservas existentes;
- Opção de alterar voo e/ou hotel da reserva;
- Opção de cancelar reserva.


___


Como **hotel**, quero poder cadastrar novos quartos disponíveis para que os clientes possam realizar reservas.


Critérios de aceitação:
- Função de cadastro de quartos com informações de nome, capacidade e comodidades.




Como **hotel**, quero editar ou excluir quartos existentes com mínima interferência em reservas ativas para gerenciar reservas de forma mais eficaz.


Critérios de aceitação:
- Exibir quartos existentes;
- Exibir disponibilidade de cada quarto;
- Opção de alterar detalhes do quarto (apenas quando não existe reserva);
- Opção de alterar disponibilidade do quarto (apenas quando não existe reserva);
- Opção de deletar quarto.


___


Como **companhia aérea**, eu quero cadastrar novos voos para que os clientes possam fazer reservas.


Critérios de aceitação:
- Função de cadastro de voos com campos de origem, destino, horários, conexões e assentos.




Como **companhia aérea**, quero poder alterar informações ou excluir voos existentes no sistema para poder gerenciar reservas de forma mais eficaz.


Critérios de aceitação:
- Exibir voos existentes;
- Exibir disponibilidade de assentos em cada voo;
- Opção de alterar detalhes de assentos;
- Opção de deletar assentos;
- Opção de deletar voos.


## Cartões CRC


**Classe Cliente**
| Responsabilidades    | Colaborações    |
| :------------------- | ----------:     |
| ID                   | Hotel           |
| Nome                 | Companhia Aérea |
| Senha                |  |
| Criar Reserva        |  |
| Alterar Reserva      |  |
| Excluir Reserva      |  |
| Exibir Reservas      |  |


**Classe Hotel**
| Responsabilidades    | Colaborações |
| :------------------- | ----------:  |
| ID                   | Cliente      |
| Senha                |  |
| Nome                 |  |
| Cadastrar Quarto     |  |
| Alterar Quarto       |  |
| Excluir Quarto       |  |
| Exibir Quartos       |  |


**Classe Companhia Aérea**
| Responsabilidades    | Colaborações |
| :------------------- | ----------:  |
| ID                   | Cliente      |
| Senha                |  |
| Nome                 |  |
| Cadastrar Voos       |  |
| Alterar Voos         |  |
| Excluir Voos         |  |
| Exibir Voos          |  |

