/* O que fazer:
+ Pegar a requisição
+ Vejo se foi POST ou GET
+ Pego o site que ele quer acessar
+ Vejo se está na lista branca ou na preta
+ Se estiver na branca, deixa acessar
+ Se estiver na preta, não deixa acessar e manda mensagem pro remetente
+ Se não estiver em nenhuma, olha nos dados da requisição, algum termo proibido. Se não tiver, faz como na lista branca. Se tiver, faz como na lista preta.
*/

char *strstr(char *haystack, char *needle);

int filterProxy(char *buffer,char *path,char *method, char *version, char *host)
{

    switch (host, buscaLista(path, buffer))
    {
        case 1:
            criaLog();
            mandaMsg();
            break;
        case 2:
            criaLog();
            mandaMsg();
            break;
        default:
        break;
    }

    
}

int buscaLista(path, buffer)
{
	
    // Procurar na Whitelist pelo host
    // Se achar, return 1

	FILE *fp;
	char linha[100];
	fp = fopen("Whitelist.txt", "r");
	fq = fopen("Blacklist.txt", "r")

	if (fp == NULL)
		return -1;

	while (EOF != NULL)
	{
		resultado = fgets(linha, 100, fp);

		retorno = strstr(resultado, path);

		if (retorno != NULL)
			return 1;
	}

	fclose(fp);

	



    // Procurar na Blacklist pelo host
    // Se achar, return 2

    // Procura no deny terms termos dentro do buffer proibidos
    // Se achar, return 2
    // Se não achar, return 1


}
