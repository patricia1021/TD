#include <stdlib.h>         /* exit */
#include <stdio.h>          /* printf */
#include <string.h>         /* bzero */

#define HUE 1
#define DEBUG 0
#define BUFFSIZE 1000000
#define HOSTSIZE 800
#define TYPE 16               

#define fp_DENYTERMS "resources/filter/deny_terms.txt"
#define fp_WHITELIST "resources/filter/whitelist.txt"
#define fp_BLACKLIST "resources/filter/blacklist.txt"


int decodeHTTP(char *buffer,char *path,char *type,char *method, char *version);
int filterHost(char *host);
int filterTerms(char *buffer);
void makeHTTP(char *response, int cod);
void makeReqModified(char* request, char* cache);
int grepHttpCode(char *http);

