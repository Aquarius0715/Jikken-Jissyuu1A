#include <stdio.h>

int main() {

    /*
     * 課題１
     *入力された１０進数の各桁をa愛列に入れるプログラムを作りなさい。
     */

    /*
     * 変数宣言
     */

    long n;
    long lengthNum;
    int length = 0;
    int a[9];

    /*
     *数を取得する。
     */

    printf("Input n: "); scanf("%ld", &n);

    /*
     * 桁数を取得する。
     */

    lengthNum = n;

    while (lengthNum != 0){

        lengthNum = lengthNum / 10;

        length++;

    }

    if (length > 9) {

        printf("入力された数字が９桁を超えました。プログラムを終了します。\n");

        return 0;

    }

    printf("n = %ld\n", n);

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