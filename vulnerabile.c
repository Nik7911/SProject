#include <stdio.h>
#include <string.h>

void vuln_function() {
    char buffer[64]; // Buffer di dimensione fissa
    printf("Inserisci il tuo input: ");
    gets(buffer); // VULNERABILITÀ: gets() non controlla la lunghezza 
dell'input
    printf("Hai inserito: %s\n", buffer);
}

int main() {
    vuln_function();
    printf("Esecuzione terminata correttamente.\n");
    return 0;
}
