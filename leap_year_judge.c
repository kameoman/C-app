/*
 * C言語のサンプルプログラム - Webkaru
 * - 入力した西暦が閏年かを判断 -
 */

// chcp 65001 ターミナルへ打つ（文字化け修正）
#include <stdio.h>
int main(void){

int year;
printf("西暦を入力してください = ");

scanf("%d",&year);

  if(year%4 == 0) {
    if( year%100 == 0) {
      if ( year%400 == 0) {
        printf("%d年は閏年です。\n", year);
      } else {
        printf("%d年は閏年ではありません。\n", year);
      }
    } else {
      printf("%d年は閏年です。\n", year);
    }
  } else {
    printf("%d年は閏年ではありません。\n", year);
  }
 
  return 0;
}
