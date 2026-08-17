int main (void){

    int numero;
    int* ponteiro;

    printf("Digite um valor:");
    scanf("%d", &numero);

    ponteiro = &numero;
    printf("Numero = %d \n ponteiro = &p", numero, ponteiro);

    return 0;
}