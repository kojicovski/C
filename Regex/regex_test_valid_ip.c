#include <stdio.h>
#include <stdlib.h>
#include <regex>



int main () {

    char valid_ip = "192.168.0.103";
    char er = "^(?:[0-9]{1,3}\.){3}[0-9]{1,3}$"

    if (er != 3) {
		fprintf(stderr,"Uso: match <ER> <input>\n");
		return 1;
	}

	er_match(valid_ip);
    system("PAUSE");
    return 0;
}


void er_match(char *argv[])
{
	/* aloca espaço para a estrutura do tipo regex_t */
	regex_t reg;

	/* compila a ER passada em argv[1]
	 * em caso de erro, a função retorna diferente de zero */
	if (regcomp(&reg , argv[1], REG_EXTENDED|REG_NOSUB) != 0) {
		fprintf(stderr,"erro regcomp\n");
		exit(1);
	}
	/* tenta casar a ER compilada (&reg) com a entrada (argv[2])
	 * se a função regexec retornar 0 casou, caso contrário não */
	if ((regexec(&reg, argv[2], 0, (regmatch_t *)NULL, 0)) == 0)
		printf("Casou\n");
	else
		printf("Não Casou\n");
}
