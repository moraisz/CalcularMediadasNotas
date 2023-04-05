#include <stdio.h>
#include <stdlib.h>

int main()
{
	//declaracao das variaveis
	float n1, n2, n3, media1, media2, media3;
	printf("CALCULAR A MEDIA DA NOTA\n");
	
	printf("Digite a primeira nota: ");
	scanf("%f", &n1);
	
	printf("Digite a segunda nota: ");
	scanf("%f", &n2);
	
	media1 = (n1+n2)/2;

	if(media1 >= 6)
	{
		printf("Parabens, voce esta aprovado com a media: %.2f\n", media1);
	}
	
	else if(media1 < 4)
	{
		printf("Voce esta reprovado, sua media foi: %.2f\n", media1);
	}
	
	else if(media1 >= 4 && media1 < 6)
	{
		printf("Voce precisa fazer a recuperacao, voce ficou com a media: %.2f\n", media1);
		
		printf("Digite a terceira nota: ");
		scanf("%f", &n3);
		
		if(n1 < n2)
		{
			printf("Sua primeira nota sera substituida\n");
			media2 = (n3+n2)/2;
			
			if(media2 >= 6)
			{
				printf("Voce foi aprovado da recuperacao com a media: %.2f\n", media2);
			}
			
			else
			{
				printf("Voce reprovou na recuperacao com a media: %.2f\n", media2);
			}
		}
		
		else if(n2 < n1)
			{
				printf("Sua segunda nota sera substituida\n");
				
				media3 = (n3+n1)/2;
				if(media3 >= 6)
				{
					printf("Voce foi aprovado da recuperacao com a media: %.2f\n", media3);
				}
			
				else
				{
					printf("Voce reprovou na recuperacao com a media: %.2f\n", media3);
				}
			}
		
		else if(n2 = n1)
			{
				printf("Sua segunda nota sera substituida\n");
				
				media3 = (n3+n1)/2;
				if(media3 >= 6)
				{
					printf("Voce foi aprovado da recuperacao com a media: %.2f\n", media3);
				}
			
				else
				{
					printf("Voce reprovou na recuperacao com a media: %.2f\n", media3);
				}
			}
		
	}
	
	system("pause");

	return 0;
}

