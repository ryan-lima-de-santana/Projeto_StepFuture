#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <time.h>
#include <dos.h>
#include <string.h>
#include <wchar.h>
#include <direct.h>
#define SIZE 200
#define MAX_SENHA 12
#define MAX_LOGIN 50
#define CLEAN_BUFF do{ int c; while((c = getchar()) != '\n' && c != EOF);}while(0)
char TECNOLOGIADAINFORMCAO[200];
char LOGISTICA [200];
char MEDICINA [200];
char MARKENTING [200];
char ARQUITETURA [200];
char BIOMEDICINA [200];
char nome [SIZE][50];
char email [SIZE][50];
char telefone [SIZE][50];
char senha [SIZE][50];
char cpf [SIZE][50];
int OpcoesLogin, OpcoesCliente, OpcoesAdm, OpcoesAcesso, Login, OpcoesAlteraCadastro, OpcoesTelaEmpresa, OpcoesTelaSuporte;   //DECLARA플O DE FUN플O
int contador, limpar = 0,c = 3; //DECLARA플O DE VARI햂EL GLOBAL

int main()
{
        system("MODE con cols=160 lines=60");
        logo();      //CHAMADA DE FUN플O PARA MENSAGEM NA TELA
        Sleep(3000);
        telaInicial();   //CHAMADA DE FUN플O DE ESCOLHA DE OP플O
                        //AGUARDA ENTRADA DO USU핾IO
    return 0;
}
int Usuario( FILE* file, char* user, char* senha ) //valida usuario
{
	char tmpLogin[MAX_LOGIN];
	char tmpSenha[MAX_SENHA];
        fscanf(file, "%s", tmpLogin);
	while( !feof(file) )
{
    if( !strcmp(tmpLogin, user))
{
        fscanf(file, "%s", tmpSenha);
    if( !strcmp(tmpSenha, senha))
    return 1;
}
    else
{
        fscanf(file, "%*s");
}
		fscanf(file, "%s", tmpLogin);
}
	return 0;
}
void Logo_2(){
        printf("\t\t\t\t\t\t\t***********************************************************\n");
        printf("\t\t\t\t\t\t\t#                                                         #\n");
        printf("\t\t\t\t\t\t\t#                                                         #\n");
        printf("\t\t\t\t\t\t\t#---------------STEP-----FUTURE-----COMPANY---------------#\n");
        printf("\t\t\t\t\t\t\t#                                                         #\n");
        printf("\t\t\t\t\t\t\t#                                                         #\n");
        printf("\t\t\t\t\t\t\t***********************************************************\n");
}
void SucessoLogin(){
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t************************************************************\n");
        printf("\t\t\t\t\t\t\t#                                                          #\n");
        printf("\t\t\t\t\t\t\t#                                                          #\n");
        printf("\t\t\t\t\t\t\t#          !!!  SEJA BEM VINDO AO FUTURO  !!!              #\n");
        printf("\t\t\t\t\t\t\t#                                                          #\n");
        printf("\t\t\t\t\t\t\t#                                                          #\n");
        printf("\t\t\t\t\t\t\t************************************************************\n");
        Sleep(2000);
}
void ErroLogin(){
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t************************************************************\n");
        printf("\t\t\t\t\t\t\t#                                                          #\n");
        printf("\t\t\t\t\t\t\t#                                                          #\n");
        printf("\t\t\t\t\t\t\t#          !!!  USU%cRIO N%cO REGISTRADO  !!!                #\n",181,199);
        printf("\t\t\t\t\t\t\t#                                                          #\n");
        printf("\t\t\t\t\t\t\t#                                                          #\n");
        printf("\t\t\t\t\t\t\t************************************************************\n");
        Sleep(2000);
}
void Invalido(){
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t************************************************************\n");
        printf("\t\t\t\t\t\t\t#                                                          #\n");
        printf("\t\t\t\t\t\t\t#                                                          #\n");
        printf("\t\t\t\t\t\t\t#          !!!  OP%c%cO ESCOLHIDA %C INV%cLIDA  !!!            #\n",128,199,144,181);
        printf("\t\t\t\t\t\t\t#                                                          #\n");
        printf("\t\t\t\t\t\t\t#                                                          #\n");
        printf("\t\t\t\t\t\t\t************************************************************\n");
        Sleep(1000);
}
void TelaSair(){
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t************************************************************\n");
        printf("\t\t\t\t\t\t\t#                                                          #\n");
        printf("\t\t\t\t\t\t\t#                                                          #\n");
        printf("\t\t\t\t\t\t\t#   !!!  NOSSA EQUIPE EST%c SEMPRE A DISPOSI%c%cO  !!!        #\n",181,128,199);
        printf("\t\t\t\t\t\t\t#   !!!   AGUARDANDO ANSIOSOS PARA SUA VOLTA.   !!!        #\n");
        printf("\t\t\t\t\t\t\t#                                                          #\n");
        printf("\t\t\t\t\t\t\t#                                                          #\n");
        printf("\t\t\t\t\t\t\t************************************************************\n");
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        Sleep(2000);
}
void ContatoSuporte(){
        system ("cls");
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t************************************************************\n");
        printf("\t\t\t\t\t\t\t#                                                          #\n");
        printf("\t\t\t\t\t\t\t#                                                          #\n");
        printf("\t\t\t\t\t\t\t#   !!! ENTRE EM CONTATO ATRAV%cS DE NOSSO EMAIL !!!        #\n",144);
        printf("\t\t\t\t\t\t\t#                                                          #\n");
        printf("\t\t\t\t\t\t\t#           EMAIL: stepfuture077@gmail.com                 #\n");
        printf("\t\t\t\t\t\t\t#                                                          #\n");
        printf("\t\t\t\t\t\t\t#                                                          #\n");
        printf("\t\t\t\t\t\t\t************************************************************\n");
        printf("\t\t\t\t\t\t\t     PARA RETORNAR AO MENU ANTERIOR DIGITE QUALQUER CARACTER\n");
}
void TI()
{
        FILE*Arquivo_curriculo;
        Arquivo_curriculo = fopen("Dados do curriculo T.I.txt", "a");
    struct Curriculo_cliente
{
    char nome_completo[200];
    char e_mail[200];
    char telefone[200];
    char endereco[200];
    char idade[200];
    char formacao[500];
    char exp_pro[500];
    char idiomas[200];
    char cursos_atv[500];
};
    struct Curriculo_cliente Curriculo;
        printf ("\n----------DADOS DO CURRICULO----------\n\n\n");
        printf ("\nNOME COMPLETO:\n");
        scanf("\n%[^\n]s",&Curriculo.nome_completo);
        printf ("\nDIGITE SEU EMAIL:\n");
        scanf ("%s",&Curriculo.e_mail);
        printf ("\nDIGITE SEU TELEFONE:\n");
        scanf ("\n%[^\n]s",&Curriculo.telefone);
        printf ("\nDIGITE SEU ENDERE%cO (Ex:Rua-cidade-estado):\n",128);
        scanf("\n%[^\n]s",&Curriculo.endereco);
        printf ("\nDIGITE SUA IDADE:\n");
        scanf ("\n%[^\n]s",&Curriculo.idade);
        printf("\nDIGITE SUA FORMA%c%cO:\n",128,199);
        scanf("\n%[^\n]s", &Curriculo.formacao);
        printf("\nDIGITE SUA EXPERI%cNCIA PROFISSIONAL:\n",210);
        scanf("\n%[^\n]s",&Curriculo.exp_pro);
        printf("\nINFORME QUAIS IDIOMAS VOC%c DOMINA E O N%cVEL RESPECTIVO:\n",210,214);
        scanf ("\n%[^\n]s", &Curriculo.idiomas);
        printf("\nINFORME SEUS CURSOS E ATIVIDADES EXTRACURRICULARES:\n");
        scanf("\n%[^\n]s", &Curriculo.cursos_atv);
        system ("cls");
        printf ("\n\n----------DADOS DO CURRICULO----------\n\n");

        printf ("NOME COMPLETO:%s\n", Curriculo.nome_completo);
        fprintf(Arquivo_curriculo,"\nNome completo: %s", Curriculo.nome_completo);
        printf ("\nE-MAIL:%s\n",Curriculo.e_mail);
        fprintf(Arquivo_curriculo,"\nE-mail: %s\n", Curriculo.e_mail);
        printf ("\nTELEFONE:%s\n",Curriculo.telefone);
        fprintf(Arquivo_curriculo,"Telefone: %s\n", Curriculo.telefone);
        printf ("\nENDERE%cO:%s\n",128,Curriculo.endereco);
        fprintf(Arquivo_curriculo,"Endereco: %s\n", Curriculo.endereco);
        printf ("\nIDADE:%s\n",Curriculo.idade);
        fprintf(Arquivo_curriculo,"Idade: %s\n", Curriculo.idade);
        printf ("\nFORMA%c%cO:%s\n",128,199,Curriculo.formacao);
        fprintf(Arquivo_curriculo, "Formacao: %s\n", Curriculo.formacao);
        printf ("\nEXPERI%cNCIA PROFISSIONAL:%s\n",210,Curriculo.exp_pro);
        fprintf(Arquivo_curriculo,"Experiencia profissional: %s\n", Curriculo.exp_pro);
        printf ("\nIDIOMAS:%s\n",Curriculo.idiomas);
        fprintf(Arquivo_curriculo,"Idiomas: %s\n", Curriculo.idiomas);
        printf ("\nCURSOS EXTRACURRICULARES:%s\n",Curriculo.cursos_atv);
        fprintf(Arquivo_curriculo,"Cursos extracurriculares: %s\n\n\n", Curriculo.cursos_atv);
        fclose(Arquivo_curriculo);
        printf("APERTE QUALQUER TECLA PARA RETORNAR AO MENU ANTERIOR");
        getch();
    return(0);
}
void LOGI()
{
        FILE*Arquivo_curriculo;
        Arquivo_curriculo = fopen("Dados do curriculo LOGISTICA.txt", "a");
    struct Curriculo_cliente
{
    char nome_completo[200];
    char e_mail[200];
    char telefone[200];
    char endereco[200];
    char idade[200];
    char formacao[500];
    char exp_pro[500];
    char idiomas[200];
    char cursos_atv[500];
};
    struct Curriculo_cliente Curriculo;
        printf ("\n----------DADOS DO CURRICULO----------\n\n\n");
        printf ("\nNOME COMPLETO:\n");
        scanf("\n%[^\n]s",&Curriculo.nome_completo);
        printf ("\nDIGITE SEU EMAIL:\n");
        scanf ("%s",&Curriculo.e_mail);
        printf ("\nDIGITE SEU TELEFONE:\n");
        scanf ("\n%[^\n]s",&Curriculo.telefone);
        printf ("\nDIGITE SEU ENDERE%cO (Ex:Rua-cidade-estado):\n",128);
        scanf("\n%[^\n]s",&Curriculo.endereco);
        printf ("\nDIGITE SUA IDADE:\n");
        scanf ("\n%[^\n]s",&Curriculo.idade);
        printf("\nDIGITE SUA FORMA%c%cO:\n",128,199);
        scanf("\n%[^\n]s", &Curriculo.formacao);
        printf("\nDIGITE SUA EXPERI%cNCIA PROFISSIONAL:\n",210);
        scanf("\n%[^\n]s",&Curriculo.exp_pro);
        printf("\nINFORME QUAIS IDIOMAS VOC%c DOMINA E O N%cVEL RESPECTIVO:\n",210,214);
        scanf ("\n%[^\n]s", &Curriculo.idiomas);
        printf("\nINFORME SEUS CURSOS E ATIVIDADES EXTRACURRICULARES:\n");
        scanf("\n%[^\n]s", &Curriculo.cursos_atv);
        system ("cls");
        printf ("\n\n----------DADOS DO CURRICULO----------\n\n");
        printf ("NOME COMPLETO:%s\n", Curriculo.nome_completo);
        fprintf(Arquivo_curriculo,"\nNome completo: %s", Curriculo.nome_completo);
        printf ("\nE-MAIL:%s\n",Curriculo.e_mail);
        fprintf(Arquivo_curriculo,"\nE-mail: %s\n", Curriculo.e_mail);
        printf ("\nTELEFONE:%s\n",Curriculo.telefone);
        fprintf(Arquivo_curriculo,"Telefone: %s\n", Curriculo.telefone);
        printf ("\nENDERE%cO:%s\n",128,Curriculo.endereco);
        fprintf(Arquivo_curriculo,"Endereco: %s\n", Curriculo.endereco);
        printf ("\nIDADE:%s\n",Curriculo.idade);
        fprintf(Arquivo_curriculo,"Idade: %s\n", Curriculo.idade);
        printf ("\nFORMA%c%cO:%s\n",128,199,Curriculo.formacao);
        fprintf(Arquivo_curriculo, "Formacao: %s\n", Curriculo.formacao);
        printf ("\nEXPERI%cNCIA PROFISSIONAL:%s\n",210,Curriculo.exp_pro);
        fprintf(Arquivo_curriculo,"Experiencia profissional: %s\n", Curriculo.exp_pro);
        printf ("\nIDIOMAS:%s\n",Curriculo.idiomas);
        fprintf(Arquivo_curriculo,"Idiomas: %s\n", Curriculo.idiomas);
        printf ("\nCURSOS EXTRACURRICULARES:%s\n",Curriculo.cursos_atv);
        fprintf(Arquivo_curriculo,"Cursos extracurriculares: %s\n\n\n", Curriculo.cursos_atv);
        fclose(Arquivo_curriculo);
        printf("APERTE QUALQUER TECLA PARA RETORNAR AO MENU ANTERIOR");
        getch();
    return(0);
}
void MED()
{
        FILE*Arquivo_curriculo;
        Arquivo_curriculo = fopen("Dados do curriculo MEDICINA.txt", "a");
    struct Curriculo_cliente
{
    char nome_completo[200];
    char e_mail[200];
    char telefone[200];
    char endereco[200];
    char idade[200];
    char formacao[500];
    char exp_pro[500];
    char idiomas[200];
    char cursos_atv[500];
};
    struct Curriculo_cliente Curriculo;
        printf ("\n----------DADOS DO CURRICULO----------\n\n\n");
        printf ("\nNOME COMPLETO:\n");
        scanf("\n%[^\n]s",&Curriculo.nome_completo);
        printf ("\nDIGITE SEU EMAIL:\n");
        scanf ("%s",&Curriculo.e_mail);
        printf ("\nDIGITE SEU TELEFONE:\n");
        scanf ("\n%[^\n]s",&Curriculo.telefone);
        printf ("\nDIGITE SEU ENDERE%cO (Ex:Rua-cidade-estado):\n",128);
        scanf("\n%[^\n]s",&Curriculo.endereco);
        printf ("\nDIGITE SUA IDADE:\n");
        scanf ("\n%[^\n]s",&Curriculo.idade);
        printf("\nDIGITE SUA FORMA%c%cO:\n",128,199);
        scanf("\n%[^\n]s", &Curriculo.formacao);
        printf("\nDIGITE SUA EXPERI%cNCIA PROFISSIONAL:\n",210);
        scanf("\n%[^\n]s",&Curriculo.exp_pro);
        printf("\nINFORME QUAIS IDIOMAS VOC%c DOMINA E O N%cVEL RESPECTIVO:\n",210,214);
        scanf ("\n%[^\n]s", &Curriculo.idiomas);
        printf("\nINFORME SEUS CURSOS E ATIVIDADES EXTRACURRICULARES:\n");
        scanf("\n%[^\n]s", &Curriculo.cursos_atv);
        system ("cls");
        printf ("\n\n----------DADOS DO CURRICULO----------\n\n");
        printf ("NOME COMPLETO:%s\n", Curriculo.nome_completo);
        fprintf(Arquivo_curriculo,"\nNome completo: %s", Curriculo.nome_completo);
        printf ("\nE-MAIL:%s\n",Curriculo.e_mail);
        fprintf(Arquivo_curriculo,"\nE-mail: %s\n", Curriculo.e_mail);
        printf ("\nTELEFONE:%s\n",Curriculo.telefone);
        fprintf(Arquivo_curriculo,"Telefone: %s\n", Curriculo.telefone);
        printf ("\nENDERE%cO:%s\n",128,Curriculo.endereco);
        fprintf(Arquivo_curriculo,"Endereco: %s\n", Curriculo.endereco);
        printf ("\nIDADE:%s\n",Curriculo.idade);
        fprintf(Arquivo_curriculo,"Idade: %s\n", Curriculo.idade);
        printf ("\nFORMA%c%cO:%s\n",128,199,Curriculo.formacao);
        fprintf(Arquivo_curriculo, "Formacao: %s\n", Curriculo.formacao);
        printf ("\nEXPERI%cNCIA PROFISSIONAL:%s\n",210,Curriculo.exp_pro);
        fprintf(Arquivo_curriculo,"Experiencia profissional: %s\n", Curriculo.exp_pro);
        printf ("\nIDIOMAS:%s\n",Curriculo.idiomas);
        fprintf(Arquivo_curriculo,"Idiomas: %s\n", Curriculo.idiomas);
        printf ("\nCURSOS EXTRACURRICULARES:%s\n",Curriculo.cursos_atv);
        fprintf(Arquivo_curriculo,"Cursos extracurriculares: %s\n\n\n", Curriculo.cursos_atv);
        fclose(Arquivo_curriculo);
        printf("APERTE QUALQUER TECLA PARA RETORNAR AO MENU ANTERIOR");
        getch();
    return(0);
}
void MARKET()
{
        FILE*Arquivo_curriculo;
        Arquivo_curriculo = fopen("Dados do curriculo MARKETING.txt", "a");
    struct Curriculo_cliente
{
    char nome_completo[200];
    char e_mail[200];
    char telefone[200];
    char endereco[200];
    char idade[200];
    char formacao[500];
    char exp_pro[500];
    char idiomas[200];
    char cursos_atv[500];
};
    struct Curriculo_cliente Curriculo;
        printf ("\n----------DADOS DO CURRICULO----------\n\n\n");
        printf ("\nNOME COMPLETO:\n");
        scanf("\n%[^\n]s",&Curriculo.nome_completo);
        printf ("\nDIGITE SEU EMAIL:\n");
        scanf ("%s",&Curriculo.e_mail);
        printf ("\nDIGITE SEU TELEFONE:\n");
        scanf ("\n%[^\n]s",&Curriculo.telefone);
        printf ("\nDIGITE SEU ENDERE%cO (Ex:Rua-cidade-estado):\n",128);
        scanf("\n%[^\n]s",&Curriculo.endereco);
        printf ("\nDIGITE SUA IDADE:\n");
        scanf ("\n%[^\n]s",&Curriculo.idade);
        printf("\nDIGITE SUA FORMA%c%cO:\n",128,199);
        scanf("\n%[^\n]s", &Curriculo.formacao);
        printf("\nDIGITE SUA EXPERI%cNCIA PROFISSIONAL:\n",210);
        scanf("\n%[^\n]s",&Curriculo.exp_pro);
        printf("\nINFORME QUAIS IDIOMAS VOC%c DOMINA E O N%cVEL RESPECTIVO:\n",210,214);
        scanf ("\n%[^\n]s", &Curriculo.idiomas);
        printf("\nINFORME SEUS CURSOS E ATIVIDADES EXTRACURRICULARES:\n");
        scanf("\n%[^\n]s", &Curriculo.cursos_atv);
        system ("cls");
        printf ("\n\n----------DADOS DO CURRICULO----------\n\n");
        printf ("NOME COMPLETO:%s\n", Curriculo.nome_completo);
        fprintf(Arquivo_curriculo,"\nNome completo: %s", Curriculo.nome_completo);
        printf ("\nE-MAIL:%s\n",Curriculo.e_mail);
        fprintf(Arquivo_curriculo,"\nE-mail: %s\n", Curriculo.e_mail);
        printf ("\nTELEFONE:%s\n",Curriculo.telefone);
        fprintf(Arquivo_curriculo,"Telefone: %s\n", Curriculo.telefone);
        printf ("\nENDERE%cO:%s\n",128,Curriculo.endereco);
        fprintf(Arquivo_curriculo,"Endereco: %s\n", Curriculo.endereco);
        printf ("\nIDADE:%s\n",Curriculo.idade);
        fprintf(Arquivo_curriculo,"Idade: %s\n", Curriculo.idade);
        printf ("\nFORMA%c%cO:%s\n",128,199,Curriculo.formacao);
        fprintf(Arquivo_curriculo, "Formacao: %s\n", Curriculo.formacao);
        printf ("\nEXPERI%cNCIA PROFISSIONAL:%s\n",210,Curriculo.exp_pro);
        fprintf(Arquivo_curriculo,"Experiencia profissional: %s\n", Curriculo.exp_pro);
        printf ("\nIDIOMAS:%s\n",Curriculo.idiomas);
        fprintf(Arquivo_curriculo,"Idiomas: %s\n", Curriculo.idiomas);
        printf ("\nCURSOS EXTRACURRICULARES:%s\n",Curriculo.cursos_atv);
        fprintf(Arquivo_curriculo,"Cursos extracurriculares: %s\n\n\n", Curriculo.cursos_atv);
        fclose(Arquivo_curriculo);
        printf("APERTE QUALQUER TECLA PARA RETORNAR AO MENU ANTERIOR");
        getch();
    return(0);
}
void ARQUI()
{
        FILE*Arquivo_curriculo;
        Arquivo_curriculo = fopen("Dados do curriculo ARQUITETURA.txt", "a");
    struct Curriculo_cliente
{
    char nome_completo[200];
    char e_mail[200];
    char telefone[200];
    char endereco[200];
    char idade[200];
    char formacao[500];
    char exp_pro[500];
    char idiomas[200];
    char cursos_atv[500];
};
    struct Curriculo_cliente Curriculo;
        printf ("\n----------DADOS DO CURRICULO----------\n\n\n");
        printf ("\nNOME COMPLETO:\n");
        scanf("\n%[^\n]s",&Curriculo.nome_completo);
        printf ("\nDIGITE SEU EMAIL:\n");
        scanf ("%s",&Curriculo.e_mail);
        printf ("\nDIGITE SEU TELEFONE:\n");
        scanf ("\n%[^\n]s",&Curriculo.telefone);
        printf ("\nDIGITE SEU ENDERE%cO (Ex:Rua-cidade-estado):\n",128);
        scanf("\n%[^\n]s",&Curriculo.endereco);
        printf ("\nDIGITE SUA IDADE:\n");
        scanf ("\n%[^\n]s",&Curriculo.idade);
        printf("\nDIGITE SUA FORMA%c%cO:\n",128,199);
        scanf("\n%[^\n]s", &Curriculo.formacao);
        printf("\nDIGITE SUA EXPERI%cNCIA PROFISSIONAL:\n",210);
        scanf("\n%[^\n]s",&Curriculo.exp_pro);
        printf("\nINFORME QUAIS IDIOMAS VOC%c DOMINA E O N%cVEL RESPECTIVO:\n",210,214);
        scanf ("\n%[^\n]s", &Curriculo.idiomas);
        printf("\nINFORME SEUS CURSOS E ATIVIDADES EXTRACURRICULARES:\n");
        scanf("\n%[^\n]s", &Curriculo.cursos_atv);
        system ("cls");
        printf ("\n\n----------DADOS DO CURRICULO----------\n\n");
        printf ("NOME COMPLETO:%s\n", Curriculo.nome_completo);
        fprintf(Arquivo_curriculo,"\nNome completo: %s", Curriculo.nome_completo);
        printf ("\nE-MAIL:%s\n",Curriculo.e_mail);
        fprintf(Arquivo_curriculo,"\nE-mail: %s\n", Curriculo.e_mail);
        printf ("\nTELEFONE:%s\n",Curriculo.telefone);
        fprintf(Arquivo_curriculo,"Telefone: %s\n", Curriculo.telefone);
        printf ("\nENDERE%cO:%s\n",128,Curriculo.endereco);
        fprintf(Arquivo_curriculo,"Endereco: %s\n", Curriculo.endereco);
        printf ("\nIDADE:%s\n",Curriculo.idade);
        fprintf(Arquivo_curriculo,"Idade: %s\n", Curriculo.idade);
        printf ("\nFORMA%c%cO:%s\n",128,199,Curriculo.formacao);
        fprintf(Arquivo_curriculo, "Formacao: %s\n", Curriculo.formacao);
        printf ("\nEXPERI%cNCIA PROFISSIONAL:%s\n",210,Curriculo.exp_pro);
        fprintf(Arquivo_curriculo,"Experiencia profissional: %s\n", Curriculo.exp_pro);
        printf ("\nIDIOMAS:%s\n",Curriculo.idiomas);
        fprintf(Arquivo_curriculo,"Idiomas: %s\n", Curriculo.idiomas);
        printf ("\nCURSOS EXTRACURRICULARES:%s\n",Curriculo.cursos_atv);
        fprintf(Arquivo_curriculo,"Cursos extracurriculares: %s\n\n\n", Curriculo.cursos_atv);
        fclose(Arquivo_curriculo);
        printf("APERTE QUALQUER TECLA PARA RETORNAR AO MENU ANTERIOR");
        getch();
    return(0);
}
void BIOMED()
{

        FILE*Arquivo_curriculo;
        Arquivo_curriculo = fopen("Dados do curriculo BIOMEDICINA.txt", "a");
    struct Curriculo_cliente
{
    char nome_completo[200];
    char e_mail[200];
    char telefone[200];
    char endereco[200];
    char idade[200];
    char formacao[500];
    char exp_pro[500];
    char idiomas[200];
    char cursos_atv[500];
};
    struct Curriculo_cliente Curriculo;
        printf ("\n----------DADOS DO CURRICULO----------\n\n\n");
        printf ("\nNOME COMPLETO:\n");
        scanf("\n%[^\n]s",&Curriculo.nome_completo);
        printf ("\nDIGITE SEU EMAIL:\n");
        scanf ("%s",&Curriculo.e_mail);
        printf ("\nDIGITE SEU TELEFONE:\n");
        scanf ("\n%[^\n]s",&Curriculo.telefone);
        printf ("\nDIGITE SEU ENDERE%cO (Ex:Rua-cidade-estado):\n",128);
        scanf("\n%[^\n]s",&Curriculo.endereco);
        printf ("\nDIGITE SUA IDADE:\n");
        scanf ("\n%[^\n]s",&Curriculo.idade);
        printf("\nDIGITE SUA FORMA%c%cO:\n",128,199);
        scanf("\n%[^\n]s", &Curriculo.formacao);
        printf("\nDIGITE SUA EXPERI%cNCIA PROFISSIONAL:\n",210);
        scanf("\n%[^\n]s",&Curriculo.exp_pro);
        printf("\nINFORME QUAIS IDIOMAS VOC%c DOMINA E O N%cVEL RESPECTIVO:\n",210,214);
        scanf ("\n%[^\n]s", &Curriculo.idiomas);
        printf("\nINFORME SEUS CURSOS E ATIVIDADES EXTRACURRICULARES:\n");
        scanf("\n%[^\n]s", &Curriculo.cursos_atv);
        system ("cls");
        printf ("\n\n----------DADOS DO CURRICULO----------\n\n");
        printf ("NOME COMPLETO:%s\n", Curriculo.nome_completo);
        fprintf(Arquivo_curriculo,"\nNome completo: %s", Curriculo.nome_completo);
        printf ("\nE-MAIL:%s\n",Curriculo.e_mail);
        fprintf(Arquivo_curriculo,"\nE-mail: %s\n", Curriculo.e_mail);
        printf ("\nTELEFONE:%s\n",Curriculo.telefone);
        fprintf(Arquivo_curriculo,"Telefone: %s\n", Curriculo.telefone);
        printf ("\nENDERE%cO:%s\n",128,Curriculo.endereco);
        fprintf(Arquivo_curriculo,"Endereco: %s\n", Curriculo.endereco);
        printf ("\nIDADE:%s\n",Curriculo.idade);
        fprintf(Arquivo_curriculo,"Idade: %s\n", Curriculo.idade);
        printf ("\nFORMA%c%cO:%s\n",128,199,Curriculo.formacao);
        fprintf(Arquivo_curriculo, "Formacao: %s\n", Curriculo.formacao);
        printf ("\nEXPERI%cNCIA PROFISSIONAL:%s\n",210,Curriculo.exp_pro);
        fprintf(Arquivo_curriculo,"Experiencia profissional: %s\n", Curriculo.exp_pro);
        printf ("\nIDIOMAS:%s\n",Curriculo.idiomas);
        fprintf(Arquivo_curriculo,"Idiomas: %s\n", Curriculo.idiomas);
        printf ("\nCURSOS EXTRACURRICULARES:%s\n",Curriculo.cursos_atv);
        fprintf(Arquivo_curriculo,"Cursos extracurriculares: %s\n\n\n", Curriculo.cursos_atv);
        fclose(Arquivo_curriculo);
        printf("APERTE QUALQUER TECLA PARA RETORNAR AO MENU ANTERIOR");
        getch();
    return(0);
}
void OpcoesProfissao(){
        Logo_2();
        printf("\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t\t\t***********************************************************\n");
        printf("\t\t\t\t\t\t\t#                                                         #\n");
        printf("\t\t\t\t\t\t\t#                   ESCOLHA SUA OP%c%cO:                    #\n",128,199);
        printf("\t\t\t\t\t\t\t#                                                         #\n");
        printf("\t\t\t\t\t\t\t#                                                         #\n");
        printf("\t\t\t\t\t\t\t#        [1]    TECNOLOGIA DA INFORM%c%cO     [1]           #\n",128,199);
        printf("\t\t\t\t\t\t\t#        [2]          LOGISTICA             [2]           #\n");
        printf("\t\t\t\t\t\t\t#        [3]          MEDICINA              [3]           #\n");
        printf("\t\t\t\t\t\t\t#        [4]         MARKENTING             [4]           #\n");
        printf("\t\t\t\t\t\t\t#        [5]         ARQUITETURA            [5]           #\n");
        printf("\t\t\t\t\t\t\t#        [6]         BIO MEDICINA           [6]           #\n");
        printf("\t\t\t\t\t\t\t#        [0]         MENU ANTERIOR          [0]           #\n");
        printf("\t\t\t\t\t\t\t#                                                         #\n");
        printf("\t\t\t\t\t\t\t***********************************************************\n");
        printf("\n\t\t\t\t\t\t\t-> ");
        scanf("%d" , &OpcoesAcesso);
        system("cls");
    switch(OpcoesAcesso){
    case 1:
        TI();
    break;
    case 2:
        LOGI();
    break;
    case 3:
        MED();
    break;
    case 4:
        MARKET();
    break;
    case 5:
        ARQUI();
    break;
    case 6:
        BIOMED();
    break;
    case 0:
        MenuCliente();
    break;
    default:
        system("cls");
        Invalido();
        OpcoesAcesso = getchar();
        OpcoesProfissao();
}
}
void MenuVisuCliente(){
        Logo_2();
        printf("\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t\t\t***********************************************************\n");
        printf("\t\t\t\t\t\t\t#                                                         #\n");
        printf("\t\t\t\t\t\t\t#                   ESCOLHA SUA OP%c%cO:                    #\n",128,199);
        printf("\t\t\t\t\t\t\t#                                                         #\n");
        printf("\t\t\t\t\t\t\t#                                                         #\n");
        printf("\t\t\t\t\t\t\t#        [1]    TECNOLOGIA DA INFORM%c%cO     [1]           #\n",128,199);
        printf("\t\t\t\t\t\t\t#        [2]          LOGISTICA             [2]           #\n");
        printf("\t\t\t\t\t\t\t#        [3]          MEDICINA              [3]           #\n");
        printf("\t\t\t\t\t\t\t#        [4]         MARKENTING             [4]           #\n");
        printf("\t\t\t\t\t\t\t#        [5]         ARQUITETURA            [5]           #\n");
        printf("\t\t\t\t\t\t\t#        [6]         BIO MEDICINA           [6]           #\n");
        printf("\t\t\t\t\t\t\t#        [0]         MENU ANTERIOR          [0]           #\n");
        printf("\t\t\t\t\t\t\t#                                                         #\n");
        printf("\t\t\t\t\t\t\t***********************************************************\n");
        printf("\n\t\t\t\t\t\t\t-> ");
        scanf("%d" , &OpcoesAcesso);
        system("cls");
    switch(OpcoesAcesso){
    case 1:
        VisuCV_TI() ;
    break;
    case 2:
        VisuCV_Log();
    break;
    case 3:
        VisuCV_med();
    break;
    case 4:
        VisuCV_mark();
    break;
    case 5:
        VisuCV_ARQUI();
    break;
    case 6:
        VisuCV_BIOMED();
    break;
    case 0:
        MenuCliente();
    break;
    default:
        system("cls");
        Invalido();
        OpcoesAcesso = getchar();
        OpcoesProfissao();
}
}
void MenuVisuEmpresa(){
        Logo_2();
        printf("\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t\t\t***********************************************************\n");
        printf("\t\t\t\t\t\t\t#                                                         #\n");
        printf("\t\t\t\t\t\t\t#                   ESCOLHA SUA OP%c%cO:                    #\n",128,199);
        printf("\t\t\t\t\t\t\t#                                                         #\n");
        printf("\t\t\t\t\t\t\t#                                                         #\n");
        printf("\t\t\t\t\t\t\t#        [1]    TECNOLOGIA DA INFORM%c%cO     [1]           #\n",128,199);
        printf("\t\t\t\t\t\t\t#        [2]          LOGISTICA             [2]           #\n");
        printf("\t\t\t\t\t\t\t#        [3]          MEDICINA              [3]           #\n");
        printf("\t\t\t\t\t\t\t#        [4]         MARKENTING             [4]           #\n");
        printf("\t\t\t\t\t\t\t#        [5]         ARQUITETURA            [5]           #\n");
        printf("\t\t\t\t\t\t\t#        [6]         BIO MEDICINA           [6]           #\n");
        printf("\t\t\t\t\t\t\t#        [0]         MENU ANTERIOR          [0]           #\n");
        printf("\t\t\t\t\t\t\t#                                                         #\n");
        printf("\t\t\t\t\t\t\t***********************************************************\n");
        printf("\n\t\t\t\t\t\t\t-> ");
        scanf("%d" , &OpcoesAcesso);
        system("cls");
    switch(OpcoesAcesso){
    case 1:
        VisuCV_TI() ;
    break;
    case 2:
        VisuCV_Log();
    break;
    case 3:
        VisuCV_med();
    break;
    case 4:
        VisuCV_mark();
    break;
    case 5:
        VisuCV_ARQUI();
    break;
    case 6:
        VisuCV_BIOMED();
    break;
    case 0:
        MenuEmpresa();
    break;
    default:
        system("cls");
        Invalido();
        OpcoesAcesso = getchar();
        OpcoesProfissao();
}
}
void MenuVisuADM(){
        Logo_2();
        printf("\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t\t\t***********************************************************\n");
        printf("\t\t\t\t\t\t\t#                                                         #\n");
        printf("\t\t\t\t\t\t\t#                   ESCOLHA SUA OP%c%cO:                    #\n",128,199);
        printf("\t\t\t\t\t\t\t#                                                         #\n");
        printf("\t\t\t\t\t\t\t#                                                         #\n");
        printf("\t\t\t\t\t\t\t#        [1]    TECNOLOGIA DA INFORM%c%cO     [1]           #\n",128,199);
        printf("\t\t\t\t\t\t\t#        [2]          LOGISTICA             [2]           #\n");
        printf("\t\t\t\t\t\t\t#        [3]          MEDICINA              [3]           #\n");
        printf("\t\t\t\t\t\t\t#        [4]         MARKENTING             [4]           #\n");
        printf("\t\t\t\t\t\t\t#        [5]         ARQUITETURA            [5]           #\n");
        printf("\t\t\t\t\t\t\t#        [6]         BIO MEDICINA           [6]           #\n");
        printf("\t\t\t\t\t\t\t#        [0]         MENU ANTERIOR          [0]           #\n");
        printf("\t\t\t\t\t\t\t#                                                         #\n");
        printf("\t\t\t\t\t\t\t***********************************************************\n");
        printf("\n\t\t\t\t\t\t\t-> ");
        scanf("%d" , &OpcoesAcesso);
        system("cls");
    switch(OpcoesAcesso){
    case 1:
        VisuCV_TI() ;
    break;
    case 2:
        VisuCV_Log();
    break;
    case 3:
        VisuCV_med();
    break;
    case 4:
        VisuCV_mark();
    break;
    case 5:
        VisuCV_ARQUI();
    break;
    case 6:
        VisuCV_BIOMED();
    break;
    case 0:
        MenuADM();
    break;
    default:
        system("cls");
        Invalido();
        OpcoesAcesso = getchar();
        OpcoesProfissao();
}
}
void direcionamento(){
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t************************************************************\n");
        printf("\t\t\t\t\t\t\t#                                                          #\n");
        printf("\t\t\t\t\t\t\t#                                                          #\n");
        printf("\t\t\t\t\t\t\t#   !!! VOC%c SER%c DIRECIONADO PARA INICIAR SEU LOGIN !!!   #\n",181,210);
        printf("\t\t\t\t\t\t\t#                                                          #\n");
        printf("\t\t\t\t\t\t\t#                                                          #\n");
        printf("\t\t\t\t\t\t\t************************************************************\n");
        Sleep(2000);
        system("cls");
}
void VisuCadastros()
{
        FILE*Arquivo;
    char texto_str [1000];
        Arquivo= fopen ("DadosClientes.txt","r");
    while (fgets(texto_str,1000,Arquivo)!=NULL)
        printf ("%s",texto_str);
        fclose(Arquivo);
        printf("APERTE QUALQUER TECLA PARA RETORNAR AO MENU ANTERIOR");
        getch();
    return (0);
}
void VisuCV_TI()
{
        FILE*Arquivo;
    char texto_str [1000];
        Arquivo= fopen ("Dados do curriculo T.I.txt","r");
    while (fgets(texto_str,1000,Arquivo)!=NULL)
        printf ("%s",texto_str);
        fclose(Arquivo);
        printf("APERTE QUALQUER TECLA PARA RETORNAR AO MENU ANTERIOR");
        getch();
    return (0);
}
void VisuCV_Log()
{
        FILE*Arquivo;
    char texto_str [1000];
        Arquivo= fopen ("Dados do curriculo LOGISTICA.txt","r");
    while (fgets(texto_str,1000,Arquivo)!=NULL)
        printf ("%s",texto_str);
        fclose(Arquivo);
        printf("APERTE QUALQUER TECLA PARA RETORNAR AO MENU ANTERIOR");
        getch();
    return (0);
}
void VisuCV_med()
{
        FILE*Arquivo;
    char texto_str [1000];
        Arquivo= fopen ("Dados do curriculo MEDICINA.txt","r");
    while (fgets(texto_str,1000,Arquivo)!=NULL)
        printf ("%s",texto_str);
        fclose(Arquivo);
        printf("APERTE QUALQUER TECLA PARA RETORNAR AO MENU ANTERIOR");
        getch();
    return (0);
}
void VisuCV_mark()
{
        FILE*Arquivo;
    char texto_str [1000];
        Arquivo= fopen ("Dados do curriculo MARKETING.txt","r");
    while (fgets(texto_str,1000,Arquivo)!=NULL)
        printf ("%s",texto_str);
        fclose(Arquivo);
        printf("APERTE QUALQUER TECLA PARA RETORNAR AO MENU ANTERIOR");
        getch();
    return (0);
}
void VisuCV_ARQUI()
{
        FILE*Arquivo;
    char texto_str [1000];
        Arquivo= fopen ("Dados do curriculo ARQUITETURA.txt","r");
    while (fgets(texto_str,1000,Arquivo)!=NULL)
        printf ("%s",texto_str);
        fclose(Arquivo);
        printf("APERTE QUALQUER TECLA PARA RETORNAR AO MENU ANTERIOR");
        getch();
    return (0);
}
void VisuCV_BIOMED()
{
        FILE*Arquivo;
    char texto_str [1000];
        Arquivo= fopen ("Dados do curriculo BIOMEDICINA.txt","r");
    while (fgets(texto_str,1000,Arquivo)!=NULL)
        printf ("%s",texto_str);
        fclose(Arquivo);
        printf("APERTE QUALQUER TECLA PARA RETORNAR AO MENU ANTERIOR");
        getch();
    return (0);
}
void MenuCliente(){
        system("cls");
        Logo_2();
        printf("\n\n\n\n\n\n\n\n\t\t     ************************************************************************************************************************** \n");
        printf("\t\t    #\t\t\t                                                                                                       #\n");
        printf("\t\t    #\t\t\t                          !!! SELECIONE A SUA OP%c%cO !!!                                                #\n",128,199);
        printf("\t\t    #\t\t\t                                                                                                       #\n");
        printf("\t\t    #\t\t\t                           [1] CRIA CURR%cCULO       [1]                                                #\n",214);
        printf("\t\t    #\t\t\t                           [2] VISUALIZAR CURR%cCULO [2]                                                #\n",214);
        printf("\t\t    #\t\t\t                           [3] CONTATO COM SUPORTE  [3]                                                #\n");
        printf("\t\t    #\t\t\t                           [0] SAIR                 [0]                                                #\n");
        printf("\t\t    #\t\t\t                                                                                                       #\n");
        printf("\t\t     ************************************************************************************************************************** \n");
        printf("\t\t-> ");
        scanf ("%d", &OpcoesAcesso);
    switch (OpcoesAcesso)
{
    case 1:
        system("cls");
        OpcoesProfissao();
        MenuCliente();
    break;
    case 2:
        system("cls");
        MenuVisuCliente();
        MenuCliente();
        contador++;
    break;
    case 3:
        ContatoSuporte();
        printf("\n\t\t-> ");
        scanf ("%d", &OpcoesTelaSuporte);
        switch(OpcoesTelaSuporte){
            case 1:
                system("cls");
                MenuCliente();
                contador++;
                break;
            default:
                system("cls");
                OpcoesTelaSuporte = getchar();
                MenuCliente();
}
        break;
    case 0:
        system("cls");
        TelaSair();
        system("EXIT");
    break;
    default:
        system("cls");
        Invalido();
        OpcoesAcesso = getchar();
        MenuCliente();
}
}
void MenuEmpresa(){

        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t     ************************************************************************************************************************** \n");
        printf("\t\t    #\t                                                                                                                       #\n");
        printf("\t\t    #\t\t\t                          !!! SELECIONE A SUA OP%c%cO !!!                                                #\n",128,199);
        printf("\t\t    #\t                                                                                                                       #\n");
        printf("\t\t    #\t\t\t                           [1] VISUALIZAR CURR%cCULOS [1]                                                #\n",214);
        printf("\t\t    #\t\t\t                           [2] CONTATO COM SUPORTE   [2]                                                      #\n");
        printf("\t\t    #\t\t\t                           [0] SAIR                  [0]                                                      #\n");
        printf("\t\t    #\t                                                                                                                       #\n");
        printf("\t\t     ************************************************************************************************************************** \n");
        printf("\t\t-> ");
        scanf ("%d", &OpcoesAcesso);
    switch (OpcoesAcesso)
{
    case 1:
        system("cls");
        MenuVisuEmpresa();
        contador++;
    break;
    case 2:
        ContatoSuporte();
        printf("\n\t\t-> ");
        scanf ("%d", &OpcoesTelaSuporte);
        switch(OpcoesTelaSuporte){
            case 1:
                system("cls");
                MenuEmpresa();
                contador++;
                break;
            default:
                system("cls");
                OpcoesTelaSuporte = getchar();
                MenuEmpresa();
}
        break;
    case 0:
        system("cls");
        TelaSair();
        system("EXIT");
    break;
    default:
        system("cls");
        Invalido();
        OpcoesAcesso = getchar();
        MenuEmpresa();
}
        system ("pause");
}
void MenuADM(){
        system("cls");
        Logo_2();
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t     **************************************************************************************************************************** \n");
        printf("\t\t    #\t\t\t                                                                                                         #\n");
        printf("\t\t    #\t\t\t                          !!! SELECIONE A SUA OP%c%cO !!!                                                  #\n",128,199);
        printf("\t\t    #\t\t\t                                                                                                         #\n");
        printf("\t\t    #\t\t\t                           [1] CADASTROS REALIZADOS    [1]                                               #\n");
        printf("\t\t    #\t\t\t                           [2] CURR%cCULOS CADASTRADOS  [2]                                               #\n",214);
        printf("\t\t    #\t\t\t                           [0] SAIR                    [0]                                               #\n");
        printf("\t\t    #\t\t\t                                                                                                         #\n");
        printf("\t\t     **************************************************************************************************************************** \n");
        printf("\t\t-> ");
        scanf ("%d", &OpcoesAcesso);
    switch (OpcoesAcesso)
{
    case 1:
        system("cls");
        VisuCadastros();
        MenuADM();
        contador++;
    break;
    case 2:
        system("cls");
        MenuVisuADM();
        MenuADM();
    break;
    case 0:
        system("cls");
        TelaSair();
        system("EXIT");
    break;
    default:
        system("cls");
        Invalido();
        OpcoesAcesso = getchar();
        MenuADM();
}
}
int logo(){
        printf("\n");
        system("color B"); //ALTERA A COR DO TEXTO A SER EXIBIDO
        printf("\n\t\t    #**************************************************************************************************************************#\n");
        printf("\t\t    #     ______   __________   _______    _______       _______              __________               _______    _______      #\n");
        printf("\t\t    #    |      |      ||      |          |       |     |         |       |       ||      |       |   |       |  |             #\n");
        printf("\t\t    #   |              ||      |          |       |     |         |       |       ||      |       |   |       |  |             #\n");
        printf("\t\t    #   |              ||      |          |       |     |         |       |       ||      |       |   |       |  |             #\n");
        printf("\t\t    #    |_____        ||      |_______   |______/      |_____    |       |       ||      |       |   |______/   |_______      #\n");
        printf("\t\t    #          |       ||      |          |             |         |       |       ||      |       |   |   \       |             #\n");
        printf("\t\t    #   |       |      ||      |          |             |         |       |       ||      |       |   |    \      |             #\n");
        printf("\t\t    #   |       |      ||      |          |             |         |       |       ||      |       |   |     \     |             #\n");
        printf("\t\t    #    |_____|       ||      |_______   |             |         |_______|       ||      |_______|   |      \    |_______      #\n");
        printf("\t\t    #                                                                                                                          #\n");
        printf("\t\t    #\t\t    ______       ______      __      __     _______                                                            #\n");
        printf("\t\t    #\t\t   |      |     |      |    |  |    |  |   |       |        /\\         |\\       |  \\       /                   #\n");
        printf("\t\t    #\t\t  |        |   |        |   |   |  |   |   |       |       /  \\        | \\      |   \\     /                    #\n");
        printf("\t\t    #\t\t  |            |        |   |    ||    |   |       |      /    \\       |  \\     |    \\   /                     #\n");
        printf("\t\t    #\t\t  |            |        |   |          |   |______/      /  /\\  \\      |   \\    |     \\ /                      #\n");
        printf("\t\t    #\t\t  |            |        |   |          |   |            /  /__\\  \\     |    \\   |      |                       #\n");
        printf("\t\t    #\t\t  |            |        |   |          |   |           /          \\    |     \\  |      |                       #\n");
        printf("\t\t    #\t\t  |        |   |        |   |          |   |          /            \\   |      \\ |      |                       #\n");
        printf("\t\t    #\t\t   |______|     |______|    |          |   |         /______________\\  |       \\|      |                       #\n");
        printf("\t\t    #\t\t                                                                                                               #\n");
        printf("\t\t    #**************************************************************************************************************************#\n");
	return(0);
}
void CadastroCliente(){
    static int linha;
        printf("\t\t     ************************************************************************************************************************** \n");
        printf("\t\t    #\t                                                                                                                       #\n");
        printf("\t\t    #\t\t\t                 !!! SEJA BEM VINDO A STEP FUTURE COMPANY !!!                                          #\n");
        printf("\t\t    #\t                                                                                                                       #\n");
        printf("\t\t     ************************************************************************************************************************** \n");
    do{
        printf("\n");
        printf ("\t\t\t\t\t             __                                                     __         \n");
        printf ("\t\t\t\t\t            |  |                                                   |  |     \n");
        printf ("\t\t\t\t\t           _|  |_            REALIZE SEU CADASTRO A BAIXO         _|  |_     \n");
        printf ("\t\t\t\t\t           \\    /                                                 \\    /     \n");
        printf ("\t\t\t\t\t            \\  /                                                   \\  /      \n");
        printf ("\t\t\t\t\t             \\/                                                     \\/         \n");
        FILE * Arquivo;
        Arquivo = fopen("DadosClientes.txt", "a");
    for (contador=0 ; contador<=5; contador++)
{
    if(contador == 0){
    char arquivo[50];
    int x;
        printf ("\n\n\t\t\t\t                  Digite o nome completo: ");
        scanf("\n%[^\n]s", arquivo);
    for( x = 0; x < strlen(arquivo); x++ )
{
        arquivo[x] += 3;
}
        fprintf(Arquivo, "%-3.100s\n", arquivo);
}
    if(contador == 1){

{
    char cpf[12];
    int icpf[12];
    int i,somador=0,digito1,result1,result2,digito2,valor;
        printf("                                                  Digite o cpf: ");
        scanf(" %s",cpf);
//Efetua a conversao de array de char para um array de int.
    for(i=0;i<11;i++)
{
        icpf[i]=cpf[i]-48;
}

//PRIMEIRO DIGITO.
    for(i=0;i<9;i++)
{
        somador+=icpf[i]*(10-i);
}
        result1=somador%11;

    if( (result1==0) || (result1==1) )
{
        digito1=0;
}
    else
{
        digito1 = 11-result1;
}
//SEGUNDO DIGITO.
        somador=0;
    for(i=0;i<10;i++)
{
        somador+=icpf[i]*(11-i);
}
        valor=(somador/11)*11;
        result2=somador-valor;
    if( (result2==0) || (result2==1) )
{
        digito2=0;
}
    else
{
        digito2=11-result2;
}
//RESULTADOS DA VALIDACAO.
    if((digito1==icpf[9]) && (digito2==icpf[10]))
{
        printf("                                                  CPF VALIDO.");
}
    else
{
        system("cls");
        printf("                                                  CPF INVALIDO.");
        CadastroCliente();
}
        fprintf (Arquivo, "%-3.100s\n",cpf);
        contador++;
}
}
    if(contador == 2){
        printf("\n\t\t\t\t                  Digite seu email: ");
        scanf("\t%[^\n]s", email);
        fprintf (Arquivo, "%-3.100s\n",email);
        contador++;
}
    if(contador ==3){
        printf ("\t\t\t\t                  Digite sua senha: ");
        scanf("\t%[^\n]s", senha);
        fprintf (Arquivo, "%-3.100s\n\n",senha);
        contador++;
}
}
        fclose(Arquivo);
        system("cls");
        OpcoesAcesso = 0;
}
    while (OpcoesAcesso == 1);
}

void CadastroEmpresa(){
    static int linha;
        printf("\t\t     ************************************************************************************************************************** \n");
        printf("\t\t    #\t                                                                                                                       #\n");
        printf("\t\t    #\t\t\t                 !!! SEJA BEM VINDO A STEP FUTURE COMPANY !!!                                          #\n");
        printf("\t\t    #\t                                                                                                                       #\n");
        printf("\t\t     ************************************************************************************************************************** \n");
    do{
        printf("\n");
        printf ("\t\t\t\t\t             __                                                                  __         \n");
        printf ("\t\t\t\t\t            |  |                                                                |  |     \n");
        printf ("\t\t\t\t\t           _|  |_            REALIZE O CADASTRO DA SUA EMPRESA A BAIXO         _|  |_     \n");
        printf ("\t\t\t\t\t           \\    /                                                            \\    /     \n");
        printf ("\t\t\t\t\t            \\  /                                                              \\  /      \n");
        printf ("\t\t\t\t\t             \\/                                                                \\/         \n");
        FILE * Arquivo;
        Arquivo = fopen("DadosEmpregador.txt", "a");
    for (contador=0 ; contador<=4 ; contador++)
{
    if(contador == 0){
        char arquivo[50];
        int x;
        printf ("\n\n\t\t\t\t                  Digite o nome da Empresa: ");
        scanf("\n%[^\n]s", nome);
        for( x = 0; x < strlen(arquivo); x++ )
{
        arquivo[x] += 3;
}
        fprintf (Arquivo, "%-3.100s\n",nome);
        contador++;
}
    if(contador == 1){
        printf ("\n\t\t\t\t                  Digite seu CPF/CNPJ: ");
        scanf("\n%[^\n]s", cpf);
        fprintf (Arquivo, "%-3.100s\n",cpf);
        contador++;
}
    if(contador ==2){
        printf ("\n\t\t\t\t                  Digite o principal telefone de contato: ");
        scanf("\n%[^\n]s", telefone);
        fprintf (Arquivo, "%-3.100s\n",telefone);
        contador++;
}
    if(contador == 3){
        printf("\n\t\t\t\t                  Digite o email da Empresa: ");
        scanf("\n%[^\n]s", email);
        fprintf (Arquivo, "%-3.100s\n",email);
        contador++;
}
    if(contador ==4){
        printf ("\n\t\t\t\t                  Digite sua senha: ");
        scanf("\n%[^\n]s", senha);
        fprintf (Arquivo, "%-3.100s\n",senha);
        contador++;
}
}
        fclose(Arquivo);
        system("cls");
        OpcoesAcesso = 0;
}
    while (OpcoesAcesso == 2);
}

void TelaEquipe(){
        system("cls");
        Logo_2();
        printf("\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t\t\t\t*************************************\n");
        printf("\t\t\t\t\t\t\t\t#                                   #\n");
        printf("\t\t\t\t\t\t\t\t#    !!! SELECIONE SUA OP%c%cO !!!    #\n",128,199);
        printf("\t\t\t\t\t\t\t\t#                                   #\n");
        printf("\t\t\t\t\t\t\t\t#       [1]  ADMNISTRADOR [1]       #\n");
        printf("\t\t\t\t\t\t\t\t#       [0] MENU ANTERIOR [0]       #\n");
        printf("\t\t\t\t\t\t\t\t#                                   #\n");
        printf("\t\t\t\t\t\t\t\t*************************************\n");
        printf("\n");
        printf("\t\t\t\t\t\t\t ->  ");
        scanf("%d" , &OpcoesLogin);
        system("cls");
        OpcoesAcesso++;
    switch(OpcoesLogin)
{
    case 1:
        TelaLoginEquipe();
    break;
    case 0:
        telaInicial();
    break;
    default:
        system("cls");
        Invalido();
        OpcoesLogin = getchar();
        TelaEquipe();
}
        OpcoesAcesso = 0;
        system("cls");
}
void TelaLoginCliente() {
        system("cls");
        FILE* Arquivo;
    static int linha;
    register int i;
    char *user  = (char*)malloc(sizeof *user * MAX_LOGIN);
    char* senha = (char*)malloc(sizeof *senha * MAX_SENHA);
        Logo_2();
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t     !!! ENTRE COM SEU LOGIN !!!    ");
        printf("\n\t\t\t\t\t\t\t\t            TENTATIVAS: [%d]              ",c );
        printf("\n\t\t\t\t\t\t\t\t              EMAIL:\n");
        printf("\t\t\t\t\t\t\t              ");
        scanf("%s" , &email[linha]);
        printf("\n\t\t\t\t\t\t\t\t              SENHA:\n");
        printf("\t\t\t\t\t\t\t              ");
    for(i = 0; i < MAX_SENHA; i++)
{
        senha[i] = getch();
    if(senha[i] == '\r')
    break;
    else
        printf("*");
}
        senha[i] = '\0';
        Arquivo = fopen("DadosClientes.txt", "a+");
    if(Usuario(Arquivo, email, senha)){
        SucessoLogin();
        system("cls");
        MenuCliente();
}
    else{
    if(c>1 && c<=3){
        ErroLogin();
        system("cls");
        c = c - 1;
        TelaLoginCliente();
};
        telaInicial();
}
        fclose(Arquivo);
        free(senha);
        system("cls");
}
void TelaLoginEmpresa() {
        system("cls");
        FILE* Arquivo;
    static int linha;
    register int i;
	char *user  = (char*)malloc(sizeof *user * MAX_LOGIN);
    char* senha = (char*)malloc(sizeof *senha * MAX_SENHA);
        Logo_2();
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t     !!! ENTRE COM O LOGIN EMPRESA !!!    ");
        printf("\n\t\t\t\t\t\t\t\t              TENTATIVAS: [%d]              ",c );
        printf("\n\t\t\t\t\t\t\t\t             EMAIL EMPRESARIAL:\n");
        printf("\t\t\t\t\t\t\t              ");
        scanf("%s" , &email[linha]);
        printf("\n\t\t\t\t\t\t\t\t                SENHA:\n");
        printf("\t\t\t\t\t\t\t              ");
    for(i = 0; i < MAX_SENHA; i++)
{
        senha[i] = getch();
    if(senha[i] == '\r')
    break;
    else
        printf("*");
}
        senha[i] = '\0';
        Arquivo = fopen("DadosEmpregador.txt", "a+");
    if(Usuario(Arquivo, email, senha)){
        SucessoLogin();
        system("cls");
        MenuEmpresa();
}
    else{
    if(c>1 && c<=3){
        ErroLogin();
        system("cls");
        c = c - 1;
        TelaLoginEmpresa();
}
        telaInicial();
}
        fclose(Arquivo);
        free(senha);
        system("cls");
}

void TelaLoginEquipe(){
        system("cls");
        FILE* Arquivo;
    static int linha;
    register int i;
	char *user  = (char*)malloc(sizeof *user * MAX_LOGIN);
    char* senha = (char*)malloc(sizeof *senha * MAX_SENHA);
        Logo_2();
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t     !!! ENTRE COM O LOGIN INSTITUCIONAL  !!!    ");
        printf("\n\t\t\t\t\t\t\t\t                TENTATIVAS: [%d]              ",c );
        printf("\n\t\t\t\t\t\t\t\t                   EMAIL:\n");
        printf("\t\t\t\t\t\t\t              ");
        scanf("%s" , &email[linha]);
        printf("\n\t\t\t\t\t\t\t\t                   SENHA:\n");
        printf("\t\t\t\t\t\t\t              ");
    for(i = 0; i < MAX_SENHA; i++)
{
        senha[i] = getch();
    if(senha[i] == '\r')
    break;
    else
        printf("*");
}
        senha[i] = '\0';
        Arquivo = fopen("DadosEquipe.txt", "a+");
    if(Usuario(Arquivo, email, senha)){
        SucessoLogin();
        system("cls");
        MenuADM();
}
    else{
    if(c>1 && c<=3){
        ErroLogin();
        system("cls");
        c = c - 1;
        TelaLoginEquipe();
}
        telaInicial();
}
        fclose(Arquivo);
        free(senha);
        system("cls");
}
void TelaCliente(){
        system("cls");
        Logo_2();
        printf("\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t\t\t\t*********************************************\n");
        printf("\t\t\t\t\t\t\t\t#                                           #\n");
        printf("\t\t\t\t\t\t\t\t#      !!! SELECIONE SUA OP%c%cO !!!          #\n",128,199);
        printf("\t\t\t\t\t\t\t\t#                                           #\n");
        printf("\t\t\t\t\t\t\t\t#        [1]     CADASTRAR       [1]        #\n");
        printf("\t\t\t\t\t\t\t\t#        [2]       LOGIN         [2]        #\n");
        printf("\t\t\t\t\t\t\t\t#        [3] CONTATO COM SUPORTE [3]        #\n");
        printf("\t\t\t\t\t\t\t\t#        [0]   MENU ANTERIOR     [0]        #\n");
        printf("\t\t\t\t\t\t\t\t#                                           #\n");
        printf("\t\t\t\t\t\t\t\t*********************************************\n");
        printf("\n");
        printf("\t\t\t\t\t\t\t ->  ");
        scanf("%d" , &OpcoesLogin);
        system("cls");
        OpcoesAcesso++;
    switch(OpcoesLogin)
{
    case 1:
        CadastroCliente();
        direcionamento();
        TelaLoginCliente();
    break;
    case 2:
        TelaLoginCliente();
    break;
    case 3:
        ContatoSuporte();
        printf("\n\t\t-> ");
        scanf ("%d", &OpcoesTelaSuporte);
        switch(OpcoesTelaSuporte){
            case 1:
                system("cls");
                TelaCliente();
                contador++;
                break;
            default:
                system("cls");
                OpcoesTelaSuporte = getchar();
                TelaCliente();
}
    case 0:
        telaInicial();
    break;
    default:
        system("cls");
        Invalido();
        OpcoesLogin = getchar();
        TelaCliente();
}
        OpcoesAcesso = 0;
        system("cls");
}
void TelaEmpresa(){
        system("cls");
        Logo_2();
        printf("\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t\t\t\t*********************************************\n");
        printf("\t\t\t\t\t\t\t\t#                                           #\n");
        printf("\t\t\t\t\t\t\t\t#       !!! SELECIONE SUA OP%c%cO !!!         #\n",128,199);
        printf("\t\t\t\t\t\t\t\t#                                           #\n");
        printf("\t\t\t\t\t\t\t\t#        [1]      CADASTRAR      [1]        #\n");
        printf("\t\t\t\t\t\t\t\t#        [2]        LOGIN        [2]        #\n");
        printf("\t\t\t\t\t\t\t\t#        [3] CONTATO COM SUPORTE [3]        #\n");
        printf("\t\t\t\t\t\t\t\t#        [0]    MENU ANTERIOR    [0]        #\n");
        printf("\t\t\t\t\t\t\t\t#                                           #\n");
        printf("\t\t\t\t\t\t\t\t*********************************************\n");
        printf("\n");
        printf("\t\t\t\t\t\t\t ->  ");
        scanf("%d" , &OpcoesTelaEmpresa);
        OpcoesAcesso++;
    switch(OpcoesTelaEmpresa)
{
    case 0:
        telaInicial();
    break;
    case 1:
        system("cls");
        CadastroEmpresa();
        direcionamento();
        TelaLoginEmpresa();
    break;
    case 2:
        system("cls");
        TelaLoginEmpresa();
    break;
    case 3:
        system("cls");
        ContatoSuporte();
        printf("\n\t\t-> ");
        scanf ("%d", &OpcoesTelaSuporte);
    switch(OpcoesTelaSuporte){
    case 1:
        system("cls");
        TelaEmpresa();
        contador++;
    break;
    default:
        system("cls");
        OpcoesTelaSuporte = getchar();
        TelaEmpresa();
}
    break;
    default:
        system("cls");
        Invalido();
        OpcoesTelaEmpresa = getchar();
        TelaEmpresa();
}
}
void telaInicial(){
        c = 3;
        tela:
        system("cls");
        printf("\n\t\t     ************************************************************************************************************************** \n");
        printf("\t\t    #\t                                                                                                                       #\n");
        printf("\t\t    #\t\t\t                 !!! SELECIONE A SUA HIERARQUIA EM NOSSO SOFTWARE !!!                                  #\n");
        printf("\t\t    #\t                                                                                                                       #\n");
        printf("\t\t    #\t\t\t                               [1] CLIENTE     [1]                                                     #\n");
        printf("\t\t    #\t\t\t                               [2] EMPRESA     [2]                                                     #\n");
        printf("\t\t    #\t\t\t                               [3] EQUIPE      [3]                                                     #\n");
        printf("\t\t    #\t\t\t                               [4] SAIR        [4]                                                     #\n");
        printf("\t\t    #\t                                                                                                                       #\n");
        printf("\t\t     ************************************************************************************************************************** \n");
        printf("\t\t-> ");
        scanf ("%d", &OpcoesAcesso);
    /*ESTRUTURA PARA DEFINI플O DE OP플O
      CADA OP플O DEFINE O CAMINHO A SER TOMADO POR FUN합ES DISTINTAS*/
    switch (OpcoesAcesso)
{
    case 1:
        system("cls");
        TelaCliente();
        contador++;
    break;
    case 2:
        system("cls");
        TelaEmpresa();
        contador++;
    break;
    case 3:
        system("cls");
        TelaEquipe();
    break;
    case 4:
        system("cls");
        TelaSair();
    return 0;
    break;
    default:
        system("cls");
        Invalido();
        OpcoesAcesso = getchar();
        telaInicial();
}
        system ("pause");
}
