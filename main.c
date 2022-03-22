#include <stdio.h>

char name[20], ocupation[50];
int age, quit;

void checkName() {
  printf("\nOlá, como você se chama?\n");
  scanf("%s", name);
  printf("\nOlá, %s. \n", name);
}

void checkAge() {
  printf("Usando apenas digitos, diga a sua idade. \n");
  do {
    scanf("%i", &age);
    if (age == 0) {
      printf("\nDigite uma idade válida, não creio que você seja tão novo. \n");
    } else if (age >= 40) {
      printf("\n%i anos? Nada como a boa e velha experiência. \n", age);
    } else {
      printf(
          "\n%i anos? Cheiro de juventude, vejo um grande caminho a trilhar. \n",
          age);
    }
  } while(age == 0);
}

void checkOcupation() {
  printf("Qual a sua área de ocupação? \n");
  scanf("%s", ocupation);
  printf("\n%s? que legal!. \n", ocupation);
}

void checkExit() {
  printf("\nDigite 1 para sair ou qualquer outra tecla para recomeçar. \n");
  scanf("%d", &quit);
}

int main(void) {
  do {
    checkName();
    printf("Eu sou o RoboC, quero te fazer mais algumas perguntas. \n");
    checkAge();
    checkOcupation();
    printf("Agradeço as suas respostas. \n");
    checkExit();
  } while (quit != 1);

  return 0;
}