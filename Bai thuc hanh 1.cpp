#include <stdio.h>
#define MAX_N 100
#define MAX_VALUE 30000

int main() {
    int t, n, a[MAX_N], count[MAX_VALUE + 1];

    scanf("%d", &t); 

    while (t--) {
        scanf("%d", &n); 
        for (int i = 0; i <= MAX_VALUE; i++) {
            count[i] = 0;
        }
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
            count[a[i]]++;
		}      
        int maxCount = 0;
        for (int i = 1; i <= MAX_VALUE; i++) {
            if (count[i] > maxCount) {
                maxCount = count[i];
            }
        }
        printf("%d\n", maxCount);
        for (int i = 0; i < n; i++) {
            if (count[a[i]] == maxCount) {
                printf("%d ", a[i]);
            }
        }
        printf("\n");
    }
    return 0;
}
