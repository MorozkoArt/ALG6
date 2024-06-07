#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Rus");
	int min = 0;
	int max = 100;
	int d = 1000;
	int otvet = 0;
	int i = 0;
	printf("Загадайте любое число от 0 до 100\n");
	scanf("%d", &otvet);
	while (otvet != d){
		d = (min + max) / 2;
		i++;
		printf("Шаг номер %d | результат %d \n", i, d);
		if (otvet != d){
			if (otvet > d){
				min = d;
			}
			else{
				max = d;
			}
		}
		else {
			printf("ураааа, я отгадал ваше число, оно равно %d, я это сделал за %d попыток ", d, i);
		}
	}
}

