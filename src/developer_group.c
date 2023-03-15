#include <stdio.h>
#include <string.h>
#include "developer_group.h"


void developer_group_init(developer_group *developer_group, developer *dev1, developer *dev2, char logo[])
{
   if(developer_group_init == NULL || dev1 == NULL || dev2 == NULL || logo == NULL)
   {
      printf("ERROR : nullptr in developer_group_init found");
      return;
   }

   developer_group->developer[0] = *dev1;
   developer_group->developer[1] = *dev2;
   strncpy(developer_group->logo, logo, strlen(logo) + 1);

}

void print_developer(developer *developer[])
{
   for(int i = DEVELOPER_AMOUNT; i < DEVELOPER_AMOUNT; i++)
   {
      printf("%s", *developer[i]);
   }
}

/*
developer_group image_1;

strcpy(logo.image_1, 
"く__,.ヘヽ.　　　　/　,ー､ 〉\
　　　　　＼ ', !-─‐-i　/　/´ \
　　　 　 ／｀ｰ'　　　 L/／｀ヽ､ \
　　 　 /　 ／,　 /|　 ,　 ,　　　 ', \
　　　ｲ 　/ /-‐/　ｉ　L_ ﾊ ヽ!　 i \
　　　 ﾚ ﾍ 7ｲ｀ﾄ　 ﾚ'ｧ-ﾄ､!ハ|　 | \
　　　　 !,/7 '0'　　 ´0iソ| 　      | \
　　　　 |.从"　　_　　 ,,,, / |./ 　 | \
　　　　 ﾚ'| i＞.､,,__　_,.イ / 　.i 　| \
　　　　　 ﾚ'| | / k_７_/ﾚ'ヽ,　ﾊ.　| \
　　　　　　 | |/i 〈|/　 i　,.ﾍ |　i　| \
　　　　　　.|/ /　ｉ： 　 ﾍ!　　＼　| \
　　　 　 　 kヽ>､ﾊ 　 _,.ﾍ､ 　 /､! \
　　　　　　 !'〈//｀Ｔ´', ＼ ｀'7'ｰr' \
　　　　　　 ﾚ'ヽL__|___i,___,ンﾚ|ノ \
　　　　　 　　　ﾄ-,/　|___./ \
　　　　　 　　　'ｰ'　　!_,.:");

puts(logo.image1);

display (image_1);
resturn 0;
}

void display(struct developer_group) {
   printf("\nDisplaying group logo\n");
   printf("Name: %c", logo.image_1);
}
*/
