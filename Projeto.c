#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void faxina()
{

    fflush(stdin);
    system("cls || clear");
}

void inicio()
{
    int esc;
    HUD();
    printf("\nEscolha a opera��o desejada.\n");
    printf("\n1- Localizador\n");
    printf("\n2- Registro de compras.\n");
    printf("\n3 - Sair.\n\n");

    printf("\nDigite sua escolha: \n");

    scanf("%d", &esc);

    switch (esc)
    {

    case 1:
        faxina();
        localizadordelivros();

        break;

    case 2:

        faxina();
        registro();

    default:
        break;
    }
}
char LoginS(char *Login, char *Senha)
{

    return (strcmp(Login, "Cliente") == 0 && strcmp(Senha, "1234") == 0);
}

void reg()
{

    printf("\n=======================================\n");
    printf("Seja bem-vindo ao registro de vendas.");
    printf("\n=======================================\n");
}

void localizador()
{
    printf("\n========= Localizador de livros ==========\n");
    printf("\t Seja bem vindo(a)\n");
}

void localizadordelivros()
{

    int esc;
    char esco[200];
    localizador();

    printf("\nDigite a categoria desejada!\n\n");
    printf("\n1 - A��o\n");
    printf("\n2 - Comedia.\n");
    printf("\n3- Romance.\n");
    printf("\n4 - Terror.\n");
    printf("\n5 - Motiva��o.\n");
    printf("\n6 - Sair.\n");

    printf("\nPor favor, digite a op��o desejada: ");
    scanf("%d", &esc);

    faxina();

    switch (esco[200])
    {
    case 1:

        printf("\nCategoria de A��o: \n");

        printf("\nLivros disponiveis a baixo:");

        printf("\n1- O Hobbit | 50 R$\n");
        printf("2- Harry Potter e a pedra filosofal | 50 R$");
        printf("\nQual livro voc� deseja?: ");
        scanf("%s", &esco);
        faxina();
        break;
    case 2:

        printf("\nCategoria de Com�dia: \n");

        printf("\nLivros disponiveis a baixo:");

        printf("\n1- Auto da compadecida | 50 R$\n");
        printf("2- As aventuras de Pin�quio | 50 R$");
        printf("\nQual livro voc� deseja?: ");
        scanf("%s", &esco);
        faxina();
        break;

    case 3:

        printf("\nCategoria de Romance: \n");

        printf("\nLivros disponiveis a baixo:");

        printf("\n1- Vermelho, branco e sangue | 50 R$ \n");
        printf("2- Verity | 50 R$");
        printf("\nQual livro voc� deseja?: ");
        scanf("%s", &esco);
        faxina();
        break;
    case 4:

        printf("\nCatergoria de Terror: \n");

        printf("\nLivros disponiveis a baixo:");

        printf("\n1- It- A Coisa | 50 R$ \n");
        printf("2- O cemit�rio maldito | 50 R$");
        printf("\nQual livro voc� deseja?: ");
        scanf("%s", &esco);
        faxina();
        break;

    case 5:

        printf("\nCategoria de Motiva��o: \n");

        printf("Livros disponiveis a baixo:");

        printf("\n1- Arrume sua cama | 50 R$ \n");
        printf("\n2- O poder da A��o | 50 R$");
        printf("\nQual livro voc� deseja?: ");
        scanf("%s", &esco);
        faxina();
        break;

        printf("Erro.");

        faxina();

        printf("Tente novamente.");
        break;
    }
    printf("\n\nDeseja comprar outro livro?");
    printf("\n1- Sim\n");
    printf("2- N�o\n");
    printf("Digite a op��o desejada: ");
    scanf("%d", &esc);
    faxina();
    switch (esc)
    {
    case 1:
        localizadordelivros();
        break;

    case 2:
        registro();
        break;
    default:

        break;
    }
    faxina();
}

void HUD()
{
    printf("\n=========================================\n");
    printf("\tSeja bem vindo a biblioteca.\n");
    printf("\n=========================================\n");
}

void registro()
{
reg();
    int esc;
    char reg[200];

   printf("Quantos livros voc� deseja?: ");
   scanf("%d", &esc);
switch (esc)
   {
   case 1:
    printf("Seu total � de: 50 R$");
    break;
   case 2:
   printf("Seu total � de: 100 R$");
   break;
    case 3:
   printf("Seu total � de: 150 R$");
    case 4:
   printf("Seu total � de: 200 R$");
   break;
    case 5:
   printf("Seu total � de: 250 R$");
   break;
    case 6:
   printf("Seu total � de: 300 R$");
   break;
    case 7:
   printf("Seu total � de: 350 R$");
   break;
    case 8:
   printf("Seu total � de: 400 R$");
   break;
    case 9:
   printf("Seu total � de: 500 R$");
   break;
    case 10:
   printf("Seu total � de: 550 R$");
   break;
   break;
   default:
    break;
   }
   atendente();
}

void atendente()
{
int o;
    char cpf[200], endereco[200], loc[200], cart[200], pass[6];

    printf("\n");
    gets(cart);

    printf("\nDigite o n�mero do cart�o: ");
    gets(cart);

    printf("\nDigite a senha do cart�o: ");
    gets(pass);

    printf("\nQual a localiza��o ou CEP, para a entrega?: ");
    gets(loc);

    printf("\nDigite o seu cpf para confirmar a compra: \n");
    gets(cpf);

    printf("\nCompra efetuada com sucesso!\n");

    int main();
}

void login()
{
    char Login[200];
    char Senha[200];

    do
    {
        printf("\nDigite o seu Login: ");
        gets(Login);

        printf("Digite a sua Senha: ");
        gets(Senha);

        LoginS(Login, Senha);
        if (LoginS(Login, Senha))
        {
            printf("Login e senha corretos. Acesso concedido!\n");
            break;
            faxina();
        }
        else
        {
            printf("\nLogin ou senha incorretos. Tente novamente.\n");
        }
    } while (1);
    faxina();
    int main();
}

int main()
{
    setlocale(LC_ALL, "portuguese");

    int esc;
    HUD();
    printf("Para proseguir, por favor realize o seu login\n");
    login();
   
    HUD();
    inicio();

    return 0;
}