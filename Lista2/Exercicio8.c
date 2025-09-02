#include<stdio.h>

int main()
{
    float prova1,prova2,prova3,prova4,prova5,prova6,prova7,prova8,media_provas;
    float lista1,lista2,lista3,lista4,lista5,media_listas;
    float nota_trabalho_final, nota_final;
    float horas_requisito, horas_aluno;
    int matricula;

    horas_requisito = 128 * (0.75); // Mínimo 96 horas ;
    scanf("%d",&matricula);

    while(matricula != -1)
    {
        scanf("%f %f %f %f %f %f %f %f", &prova1, &prova2, &prova3, &prova4, &prova5, &prova6, &prova7, &prova8);
        scanf("%f %f %f %f %f", &lista1, &lista2, &lista3, &lista4, &lista5);
        scanf("%f", &nota_trabalho_final);
        scanf("%f", &horas_aluno);

        media_provas = (prova1+prova2+prova3+prova4+prova5+prova6+prova7+prova8)/8;
        media_listas = (lista1+lista2+lista3+lista4+lista5)/5;
        nota_final = 0.7 * media_provas + 0.15 * media_listas + 0.15 * nota_trabalho_final;

        if(nota_final >= 6 && horas_aluno >= horas_requisito)
        {
            printf("Matricula: %d, Nota Final: %.2f, Situacao Final: APROVADO\n", matricula,nota_final);
        }
        else if (nota_final < 6 && horas_aluno >= horas_requisito )
        {
            printf("Matricula: %d, Nota Final: %.2f, Situacao Final: REPROVADO POR NOTA\n", matricula,nota_final);
        }
        else if (nota_final >= 6 && horas_aluno < horas_requisito)
        {
             printf("Matricula: %d, Nota Final: %.2f, Situacao Final: REPROVADO POR FREQUENCIA INSUFICIENTE\n ", matricula,nota_final);
        }
        else if (nota_final < 6 && horas_aluno < horas_requisito)
        {
             printf("Matricula: %d, Nota Final: %.2f, Situacao Final: REPROVADO POR NOTA E FREQUENCIA\n", matricula,nota_final);
        }
        scanf("%d",&matricula);
    }

    return 0;
}
