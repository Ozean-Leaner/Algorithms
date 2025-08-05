在**eg2-5**中，每次测试都需要手动输入，数据只保存在命令行中，显得不方便  
一个好的办法是把**输入数据和输出结果保存在文件中**，若有标准答案文件，还可进行文件比较
  
*在Windows中使用fc指令进行文件比较，在Linux下使用diff指令*  
  
使用文件最简单的办法是使用输入输出重定向，只需在main函数入口处加入以下两条语句：
```C
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
```
上面两条语句使得scanf从文件input.txt读入，printf写入文件output.txt  
实际上所有读键盘输入、写屏幕输出均将改用文件  
然而**并非所有竞赛允许用程序读写文件，或允许访问文件，但禁止重定向方式读写文件**  
*参赛之前需仔细阅读文件读写的相关规定！选手应当严格遵守比赛的文件名格式！*
  
有一种可以在本机测试时用文件重定向，但一旦提交就会自动屏蔽重定向的代码：
```C
#define LOCAL
#define INF 1000000
...
int main(){
    #indef LOCAL
      freopen("data.in","r",stdin);
      freopen("data.out","w",stdout);
    #endif
    ...
    /*
        printf("x=%d, min=%d, max=%d\n", x, min, max);
    */
    ...
    return 0;
}
```
这样一来只需**在提交代码之前删除#define LOCAL即可**  
  
若比赛要求用文件输入输出，且禁止使用重定向，则修改后的代码如下：
```C
#include <cstdio>
#define INF 100000000
int main(){
    FILE *fin, *fout;
    fin = fopen("data.in", "rb");
    fout = fopen("data.out", "wb");
    int x, n = 0, min = INF, max = -INF, s = 0;
    while(fscanf(fin, "%d", &x) == 1){
        ...
    }
    fprintf(fout, "%d %d %.3lf\n", min, max, (double)s/n);
    fclose(fin);
    fclose(fout);
    return 0;
}
```
简而言之，即**先声明变量fin, fout，将scanf改为fscanf，第一个参数为fin；把printf改为fprintf，第一个参数为fout，最后执行fclose关闭两个文件**
  
*若想将fopen版程序修改为读写标准输入输出，只需赋值fin=stdin,fout=stdout; 不要调用fopen和fclose*