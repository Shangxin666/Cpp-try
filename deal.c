#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

#define NUM_SUITS 4 
#define NUM_RANKS 13

int main()
{
	bool a[4][13] = {false};    // 4行 13列 
	int num_cards, rank, suit;
	const char rank_code[] = {'2','3','4','5','6','7','8','9','t','j','q','k','a'};  
	const char suit_code[] = {'c','d','h','s'};
	
	srand((unsigned) time (NULL));    //随机数生成器 
	
	printf("Enter number of cards in hand: ");
	scanf("%d",&num_cards);
	
	printf("Your hand : ");
	while (num_cards > 0)
	{
		suit = rand() % 4;
		rank = rand() % 13;
		if (!a[suit][rank])
		{
			a[suit][rank] = true;
			num_cards--;
			printf(" %c%c", rank_code[rank], suit_code[suit]);
		} 	
	}
	printf("\n");
	
    return 0;
} 
