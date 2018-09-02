/* André de Souza Ferreira

Programa-Resposta do desafio 3 */

# include <stdio.h>

int main() {

    unsigned int M, N, i, j = 0, k = 1;

    scanf("%d", &N);
    unsigned int Fila[N];

    for (i = 0; i < N; i++) {

        scanf("%d", &Fila[i]);

    }

    i = 0;

    scanf("%d", &M);
    unsigned int Fila_retirado[M];

    for (; i < M; i++) {

        scanf("%d", &Fila_retirado[i]);

    }

    i = 0;

    for (; i < N; i++) {

        k = 1;
                
        for (j = 0; j < M; j++) {

            if (Fila[i] == Fila_retirado[j]) {

                k = 0;
                break;

            }
           
        }

        if (k == 1) {

            printf("%d ", Fila[i]);

        }

        
    }

    printf("\n");

    return 0;
}