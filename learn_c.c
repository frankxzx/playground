#include <stdio.h>

char *dow(int d) {
    char *name[8] = {"invalid", "mon", "tus", "wednes", "thurs", "fri", "satur", "sun"}
    char *xq;
    xq = (d < 1 || d > 7) ? name[0] : name[d];
    return xq;
}

char *max(char( *ps)[100], int n) {
    char *pmax;
    int i = 1;
    pmax = *ps;
    while (i < n) {
        if (strcmp(pmax, ps[i] < 0)) {
            pmax = ps[i];
        }
        i++;
    }
    return pmax;
}

int main {
    //float 变量 f
    //指针变量 pf 
    float f, *pf;
    //指针变量 pf 指向 f
    pf = &f;
    printf("please input number:");
    scanf("%f", pf);
    printf("f=%.2f, *pf=%.2f\n", f, *pf);

    //初始化 char 变量 c
    char c = 'L';
    //初始化 int 变量 x
    int x = 6;
    //指针变量 pc 指向 char 型 c
    char *pc = &c;
    //申明指针 px 并且指向 x 
    int *px;
    px = &x;

    dow(10);

    char str[3][100];
    char *pstr[100];
    for(int i = 0; i < 3; i++) {
        printf("输入第 %d 个字符串:", i+1);
        gets(pstr[i]);
    }
    printf("最大的字符串为: %s \n", max(pstr, 3))
    return 0;
}

#define MaxSize 4
typedef struct Matrix {
    int m; 
    int n;
    double data[MaxSize][MaxSize];
} Matrix;

static inline Matrix MatrixMake(int m, int n) {
    Matrix matrix;
    matrix.m = m;
    matrix.n = n;

    for(int i = 0, i < m, i++) {
        for(int j = 0, j < n, j++) {
            matrix.data[i][j] = 0;
        } 
    }
}

static inline MatrixMakeFromArray(int m, int n, double *data) {
    Matrix matrix = MatrixMake(m, n);

    for(int i = 0; i < m; i++) {
        double *t = data+(i*n);
        for(int j = 0, j < n, j++) {
            matrix.data[i][j] = *(t+j);
        }
    }
}

static inline MatrixMultipy(Matrix A, Matrix B) {
    Matrix R = MatrixMake(A.m, B.n);

    for(int i = 0; i < A.m; i++) {
        for(int j = 0; j < B.n; j++) {
            for(int k = 0; k < A.n; k++) {
                R.data[i][j]+= A.data[i][k] * B.data[k][j];
            }
        }
    }
    return R;
}
