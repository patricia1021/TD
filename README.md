# Web proxy

Trabalho final da matéria de Transmissão de Dados do 1o semestre de 2017.

### Instalação

```
make
```

### Execução

```
./proxy <numero da porta de acesso>
```

### Log

O log do sitema esta dividido em áreas conforme o padrão a baixo. O log se encotra no arquivo resources/log.txt e cada mensagem de log está separada por quebra de linha.
Cada linha começa com uma letra que define o tipo da mensagem.

```
* r - Requisção ~ [tempo]	<cliente>	<método HTTP> 	-	<hospedeiro><caminho>
* b - Acesso bloqueado ~ [tempo]		<cliente>	-	<hospedeiro><caminho>	<motivo do bloqueio>
* c - cache ~ [tempo] 	<client>	- <hospedeiro><caminho>	-	<motivo>
* h - http ~ [tempo]	<hospedeiro><caminho>	<codigo http>	-	<cliente>
```
