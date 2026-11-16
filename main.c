#include <stdio.h>
 
// フィボナッチ数を計算する関数（再帰の例）
int fibo(int n) {
if (n == 1 || n == 2) {
return 1;
}
return fibo(n - 1) + fibo(n - 2);
}
 
int main(void) {
int n;
 
// 入力の受け取り
if (scanf("%d", &n) != 1) {
printf("NG\n");
return 0;
}
 
// 範囲外チェック (1 <= n <= 30)
if (n < 1 || n > 30) {
printf("NG\n");
} else {
printf("%d\n", fibo(n));
}
return 0;
}
