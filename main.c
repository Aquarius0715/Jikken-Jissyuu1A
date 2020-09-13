#include <stdio.h>

int main() {

    /*
     * 課題１
     *入力された１０進数の各桁をa愛列に入れるプログラムを作りなさい。
     */

    /*
     * 変数宣言
     */
    int n;
    int lengthCount;
    int length = 0;
    int a[9];

    /*
     *数を取得する。
     */
    printf("Input n: ");

    scanf("%d", &n);

    /*
     * 桁数を取得する。
     */
    lengthCount = n;

    while(lengthCount != 0){

        lengthCount = lengthCount / 10;

        length++;

    }

    printf("n = %d\n", n);

    /*
     * 配列に代入していく。
     */
    for (int i = 0; i < length; i++) {

        a[length - 1 - i] = (n % 10);

        n /= 10;

    }
    /*
     * 配列から数を取得していく。
     */
    for (int i = 0; i < length; i++) {

        printf("%d", a[i]);

    }

    return 0;

}