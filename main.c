#include <stdio.h>

/*int main(){
    int a;
    int b;
    printf("请输入两个整数：");
    scanf("%d %d", &a, &b);
    printf("%d + %d = %d\n", a, b, a + b);

    return 0;
}

int main() 
{
    const int MINOR = 35;
    int age = 0;

    printf("请输入年龄：");
    scanf("%d", &age);
    if (age < MINOR) 
    {
        printf("未成年\n");
     } 
    else 
    {
        printf("成年\n");
    }
}               
*/

/*int main() 
{
    int a = 0;
    printf("请输入一个整数：");
    scanf("%d", &a); 
    printf("您输入的整数是：%d\n", a);

    return 0;
}
*/

/*int main() 
{
    int input = 0;
    srand((unsigned int)time(NULL));
    do {
        printf("--1.play--\n");
        printf("--0.exit--\n");
        printf("请输入一个数：");
        scanf("%d", &input);
        switch(input){
            case 1:
                game();
                break;
            case 0:
                printf("退出游戏\n");
                break;
            default:
                printf("输入错误，请重新选择\n");
            
        }
        
    } while (input);
    return 0;
}
    */


//练习找数组中的最大数
/*int main()
{
   int arr[] = {1, 2, 3, 4, 5};
   int n = sizeof(arr) / sizeof(arr[0]);//整个数组的总字节数除以数组第一个元素的长度
   int max = arr[0];
   for(int i = 1; i<n; i++){
         if(arr[i] > max){
                max = arr[i];
          }
     }
     printf("数组中的最大值是：%d\n", max);
     return 0;
   }


   // return 0; 不是质数
    // return 1; 是质数

int main()
{
    int num;
    printf("请输入一个整数：");
    scanf("%d", &num);

    if (num <= 1) {
        printf("%d 不是质数\n", num);
        return 0;
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            printf("%d 不是质数\n", num);
            return 0;
        }
    }

    printf("%d 是质数\n", num);
    return 0;
}
*/
//数组练习 c语言用charr数组和\0来表示字符串，\0是字符串结束标志，数组的长度要比实际字符数多1
//先暂停到这里，还暂时不知道怎么用mac弄出c99 
/*int main()
{
    char arr1[] = "welcome to BNBU";
    char arr2[] = "################";
    int left = 0;
    int right = strlen(arr1) - 1;
    while(left<=right)
    {
        arr2[left] = arr1[left];
        arr2[right] = arr1[right];
        left++;
        right--;

    }
}
*/

//数组终极考核哈哈哈哈2种方法
/*方法一，较麻烦必须要一个一个走循环，不经济但是代码较简单
int main()
{
    int arr1[] = {1, 2, 3, 4, 5};
    int k = 4;
    int i = 0;
    int n = sizeof(arr1) / sizeof(arr1[0]);
    for (i = 0; i < n; i++){
        if (arr1[i] == k){
            printf("找到了，结果是：%d\n", i);
            break;
        }

    }
    if (i == n){
        printf("没找到\n");
    }

}
*/
// 1 2 3 4 5
// 0 1 2 3 4
//方法二，代码较复杂但是效率较高，直接用二分法查找
/*int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int k = 5;
    int left = 0;
    int n = sizeof(arr) / sizeof(arr[0]); //158 159两行内容可以用法二代替：int right = strlen(arr) - 1;
    int right = n - 1;
    while(left <= right){
        int mid = (left + right) / 2;
        if(arr[mid] == k){
            printf("找到了，下标结果是：%d\n", mid);
            break;
        }
        else if(arr[mid] < k){
            left = mid + 1;

        }
        else{
            right = mid - 1;
        }

        
        
    }
    if(left > right){
        printf("没找到\n");
    }
}

//函数的基础练习，明确调用，以加减法为案列
int add(int s, int r){
    int result = s + r;
    return result;
}
int main()
{
   int a = 5;
    int b = 2;
    int fuck = add(a, b);
    printf("%d + %d = %d\n", a, b, fuck);
    return 0;
 
   
   }
*/
 
//二阶数组做函数参数的训练,void可以调用但没有返回值

void set_arr(int arr[3][5], int r, int c)
{
    int i = 0;
    for(i = 0; i < r; i++)
    {
        int j = 0;
        for(j = 0; j < c; j++)
        {
            arr[i][j] = i + j;
            

        }
    }
    

}

void print_arr(int arr[3][5], int r, int c)
{
    int i = 0;
    for(i = 0; i < r; i++)
    {
        int j = 0;
        for(j = 0; j < c; j++)
        {
            printf("%d", arr[i][j]);
            

        }
        printf("\n");
    }
    printf("\n");
}



int main()
{
    int arr [3][5] = { 0 };
    set_arr(arr, 3, 5);
    print_arr(arr, 3, 5);
    return 0;
}
