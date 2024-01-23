# Inteli - Instituto de Tecnologia e Liderança


<p align="center">
<a href= "https://www.inteli.edu.br/"><img src="./document/assets/inteli.png" alt="Inteli - Instituto de Tecnologia e Liderança" border="0" width=40% height=40%></a>
</p>


<br>

# FieldTracker


## Ashton


## 👨‍🎓 Integrantes:
- <a href="https://www.linkedin.com/in/bruna-brasil-alexandre/">Bruna Brasil Alexandre</a>
- <a href="https://www.linkedin.com/in/fuchsfelipel/">Felipe Liberman Fuchs</a>
- <a href="https://www.linkedin.com/in/gabriel-farias-alves/">Gabriel Farias Alves</a>
- <a href="https://www.linkedin.com/in/gabriel-demacedosantos/">Gabriel de Macedo Santos</a>
- <a href="https://www.linkedin.com/in/leandro-dos-santos-gomes/">Leandro dos Santos Gomes</a>
- <a href="www.linkedin.com/in/raissa-moraes-a89179264">Raíssa de Cássia Moraes Paula</a>


## 👩‍🏫 Professores:
### Orientador(a)
- <a href="https://www.linkedin.com/in/marcelo-gon%C3%A7alves-phd-a550652/">Marcelo Gonçalves</a>
### Instrutores
- <a href="https://www.linkedin.com/in/fatima-toledo/">Fatima Toledo</a>
- <a href="https://www.linkedin.com/in/henrique-mohallem-paiva-6854b460/">Henrique Mohallem Paiva</a>
- <a href="https://www.linkedin.com/in/cristiano-benites-687647a8/">Cristiano Benites</a>
- <a href="https://www.linkedin.com/in/juliastateri/">Julia Stateri</a>
- <a href="https://www.linkedin.com/in/profclaudioandre/">Claudio Fernando André</a>
- <a href="https://www.linkedin.com/in/sergio-venancio-a509b342/">Sérgio Venancio</a>
- <a href="https://www.linkedin.com/in/andreluizbraga/">André Luiz Braga</a>
- <a href="https://www.linkedin.com/in/bruna-mayer-00a556174/">Bruna Mayer</a>
- <a href="https://www.linkedin.com/in/laizaribeiro/">Laíza Ribeiro</a>
- <a href="https://www.linkedin.com/in/andr%C3%A9-leal-a57b2065/">André Leal</a>


## 📜 Descrição


O projeto em questão é um sistema de rastreamento e monitoramento baseado em IoT (Internet das Coisas) desenvolvido para acompanhar o transporte de insumos agrícolas, como fertilizantes, visando garantir um monitoramento preciso, confiável e em tempo real durante todo o percurso.

Essa solução integrada é composta por uma arquitetura complexa que utiliza uma variedade de componentes interconectados para cumprir seu propósito principal. O coração desse sistema é o dispositivo IoT, que abriga componentes essenciais, como o ESP32, módulo GPS, sensor de distância, LEDs, botão, display LCD com I2C, entre outros.

O ESP32, como microcontrolador central, desempenha um papel crucial na conectividade entre os componentes, processamento de dados em tempo real e transmissão de informações para o servidor por meio do protocolo MQTT. É responsável por gerenciar o fluxo de dados e garantir a comunicação sem fio via Wi-Fi ou LTE, proporcionando uma conectividade estável e confiável.

O sensor de distância é fundamental para o monitoramento da carga, detectando a presença ou ausência dos insumos durante o transporte. A sua calibração, realizada por meio de um botão físico, permite ajustar a distância segura para a carga no caminhão. A detecção de qualquer remoção não autorizada é imediatamente reportada ao ESP32, que aciona os LEDs para indicar o status do sensor.

Os LEDs desempenham um papel visual crucial, informando sobre o status do sensor de distância e da carga. O vermelho indica que a peça rastreada não está sendo localizada, o verde mostra que a detecção está ativa e o amarelo sinaliza o processo de calibração em andamento.

O módulo GPS, integrado à solução, fornece atualizações periódicas sobre a localização da carga, permitindo que os colaboradores identifiquem possíveis desvios e localizem o ponto exato onde ocorreram, caso necessário.

O display LCD, operando em conjunto com o protocolo I2C, oferece uma interface de interação com o usuário, exibindo mensagens informativas sobre o status do sistema. Durante a calibração ou detecção de remoção da carga, o display fornece informações detalhadas para orientar o usuário sobre o processo em andamento.

Entendido, vou reformular o trecho sobre o backend e frontend para incorporar o uso do Ubidots:

Além do dispositivo físico, a arquitetura do sistema é complementada pela integração com a plataforma Ubidots, uma solução de IoT que oferece recursos avançados para coleta, armazenamento e visualização de dados. O ESP32, responsável pela coleta de informações dos sensores, se conecta ao Ubidots por meio do protocolo MQTT, enviando os dados para a nuvem.

Esses dados, uma vez transmitidos para o Ubidots, são processados e apresentados em um Dashboard intuitivo e de fácil acesso. Esse Dashboard permite que diferentes usuários, como operadores de maquinário agrícola e profissionais de manutenção, acessem e visualizem informações em tempo real sobre a localização e status dos insumos monitorados.

Essa solução foi desenvolvida levando em consideração uma série de requisitos não funcionais, como confiabilidade, eficiência energética, usabilidade, segurança, disponibilidade, compatibilidade com navegadores e dispositivos móveis, além de facilitar a manutenção e atualização contínua. A integração eficaz de todos esses elementos resulta em um sistema confiável, adaptável e essencial para garantir o monitoramento e a segurança dos insumos agrícolas durante o transporte.


Inclua um link para o vídeo de demonstração do funcionamento de seu projeto (sprint 5)




## 📁 Estrutura de pastas


Dentre os arquivos e pastas presentes na raiz do projeto, definem-se:


- <b>assets</b>: aqui estão os arquivos relacionados a parte gráfica do projeto, ou seja, as imagens e vídeos que os representam (O logo do grupo pode ser adicionado nesta pasta).

- <b>src</b>: Todo o código fonte criado para o desenvolvimento do projeto, incluindo firmware, notebooks, backend e frontend, se aplicáveis.

- <b>document</b>: aqui estão todos os documentos do projeto, incluindo o manual de instruções. Há também uma pasta denominada <b>outros</b> onde estão presentes outros documentos complementares e uma pasta chamada <b>assets</b> onde estão as imagens da documentação.


- <b>src</b>: Todo o código fonte criado para o desenvolvimento do projeto, incluindo firmware, notebooks, backend e frontend.

- <b>README.md</b>: arquivo que serve como guia e explicação geral sobre o projeto (o mesmo que você está lendo agora).


## 🔧 Instalação


Acrescentar as informações necessárias sobre pré-requisitos (IDEs, serviços etc.) e instalação básica do projeto, descrevendo as versões utilizadas.


#### Instalando o Visual Studio


Clique no link abaixo e siga os passos do site:


https://code.visualstudio.com/


Após abrir o aplicativo instale as dependências da pasta src>firmware>firmware.io




#### Instalando dependências no Visual Studio


Abra um terminal e digite:


pip install Wifi
pip install PubSubCLient


Link para o Manual de Instruções: https://docs.google.com/document/d/1pw9lLolURaRqCaYOQPXHDCMotUH6y1wA/edit?usp=sharing&ouid=116540027284937544697&rtpof=true&sd=true




#### Instalando CLI do EF globalmente
```sh
dotnet tool install --global dotnet-ef --version 7.0.13
```


#### Instalando Postgres
Opção A: [Baixar](https://www.postgresql.org/download/windows/) instalador para Windows
Opção B: Instalar no Ubuntu do WSL via apt:


```sh
sudo sh -c 'echo "deb https://apt.postgresql.org/pub/repos/apt $(lsb_release -cs)-pgdg main" > /etc/apt/sources.list.d/pgdg.list'
wget --quiet -O - https://www.postgresql.org/media/keys/ACCC4CF8.asc | sudo apt-key add -
sudo apt-get update
sudo apt-get -y install postgresql


sudo -u postgres psql template1


ALTER USER postgres with encrypted password 'postgres';


exit;
```




## 🗃 Histórico de lançamentos


* 0.3.3 - Atualização Documentação 23/11/2023


* 0.3.2 - Atualização Documentação 22/11/2023


* 0.3.1 - Criação Back-end site 16/11/2023


* 0.3.0 - Atualização Documentação 15/11/2023


* 0.2.4 - Atualização Documentação 12/11/2023


* 0.2.3 - Atualização Documentação 10/11/2023


* 0.2.2 - Atualização Documentação 09/11/2023


* 0.2.1 - Atualização Documentação 08/11/2023


* 0.2.0 - Atualização Documentação 06/11/2023


* 0.1.7 - Atualização Documentação 27/10/2023


* 0.1.6 - Atualização Documentação 25/10/2023


* 0.1.5 - Atualização Documentação 24/10/2023


* 0.1.4 - Atualização Documentação 23/10/2023


* 0.1.3 - Atualização Firmware 19/10/2023


* 0.1.3 - Atualização Firmware 19/10/2023


* 0.1.2 - Atualização Documentação 19/10/2023


* 0.1.1 - Criação do Firmware 18/10/2023
 
* 0.1.0 - Atualização Documentação 18/10/2023


## Vídeo de demonstração do Projeto

https://youtu.be/aAphB1C6PV8

## 📋 Licença/License


<img style="height:22px!important;margin-left:3px;vertical-align:text-bottom;" src="https://mirrors.creativecommons.org/presskit/icons/cc.svg?ref=chooser-v1"><img style="height:22px!important;margin-left:3px;vertical-align:text-bottom;" src="https://mirrors.creativecommons.org/presskit/icons/by.svg?ref=chooser-v1"><p xmlns:cc="http://creativecommons.org/ns#" xmlns:dct="http://purl.org/dc/terms/"><a property="dct:title" rel="cc:attributionURL" href="https://github.com/2023M4T10Inteli/grupo3">Ashton</a> by <a href="https://github.com/2023M3T10-Inteli">Inteli</a>, <a href="https://www.linkedin.com/in/bruna-brasil-alexandre-734055214/">Bruna Brasil Alexandre, </a>, <a href="https://www.linkedin.com/in/fuchsfelipel/">Felipe Liberman Fuchs</a>, <a href="https://www.linkedin.com/in/gabriel-farias-alves/">Gabriel Farias Alves</a>, <a href="https://www.linkedin.com/in/gabriel-demacedosantos/">Gabriel de Macedo Santos</a>, <a href="https://www.linkedin.com/in/leandro-dos-santos-gomes/">Leandro dos Santos Gomes</a> and <a href="www.linkedin.com/in/raissa-moraes-a89179264">Raíssa de Cássia Moraes Paula</a>  is licensed under <a href="http://creativecommons.org/licenses/by/4.0/?ref=chooser-v1" target="_blank" rel="license noopener noreferrer" style="display:inline-block;">Attribution 4.0 International</a>.</p>

