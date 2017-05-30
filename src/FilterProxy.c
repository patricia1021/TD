/* O que fazer:
+ Pegar a requisição
+ Vejo se foi POST ou GET
+ Pego o site que ele quer acessar
+ Vejo se está na lista branca ou na preta
+ Se estiver na branca, deixa acessar
+ Se estiver na preta, não deixa acessar e manda mensagem pro remetente
+ Se não estiver em nenhuma, olha nos dados da requisição, algum termo proibido. Se não tiver, faz como na lista branca. Se tiver, faz como na lista preta.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *strstr(char *haystack, char *needle);

int filterProxy(char *buffer,char *path,char *method, char *version, char *host)
{

    switch (host, buscaLista(path, buffer))
    {
        case 1:
	mandaMsg_dest();
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

	FILE *fp, fq, fr;
	char linha[100];
	char* resultado;
	fp = fopen("whitelist.txt", "r");
	fq = fopen("blacklist.txt", "r");
	fr = fopen("deny_terms.txt", "r");
	

	if (fp == NULL)
		return -1;

	while (fgets(linha, 100, fp) != NULL)
	{
		resultado = strstr(linha, path);

		if (resultado != NULL)
			return 1;
		
		if (feof (fp))
			break;
	}
	fclose(fp);
	
	if (fq == NULL)
		return -1;
	
	while (fgets(linha, 100, fq) != NULL)
	{
		resultado = strstr(linha, path);

		if (resultado != NULL)
			return 1;
		
		if (feof (fq))
			break;
	}
	fclose(fq);
	


    // Procura no deny terms termos dentro do buffer proibidos
    // Se achar, return 2
    // Se não achar, return 1


}
