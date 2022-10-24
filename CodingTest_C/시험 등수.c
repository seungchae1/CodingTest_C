#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int score[], int score_len) {
    int answer[score_len]; //비주얼스튜디어로는 에러, 구름에듀에서는 정상 작동함
    for (int i = 0; i < score_len; i++) { answer[i] = score_len; }
    for (int i = 0; i < score_len; i++) {
        for (int j = 0; j < score_len; j++) {
            if (j == i)continue;
            if (score[i] >= score[j]) answer[i]--;
        }
    }
    int* a = answer;
    return a;
}

int main() {
    int score1[] = { 90, 87, 87, 23, 35, 28, 12, 46 };
    int score_len1 = 8;
    int* ret1 = solution(score1, score_len1);

    printf("solution 함수의 반환 값은 [");
    for (int i = 0; i < score_len1; i++) {
        if (i != 0)
            printf(", ");
        printf("%d", ret1[i]);
    }
    printf("] 입니다.\n");

    int score2[] = { 10, 20, 20, 30 };
    int score_len2 = 4;
    int* ret2 = solution(score2, score_len2);

    printf("solution 함수의 반환 값은 [");
    for (int i = 0; i < score_len2; i++) {
        if (i != 0)
            printf(", ");
        printf("%d", ret2[i]);
    }
    printf("] 입니다.\n");
}