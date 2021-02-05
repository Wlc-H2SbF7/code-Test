/*
本章介绍回调函数
*/

#if 0
#include <stdio.h>

static int area(int _length,int _width);
static int perimeter(int _length,int _width);

struct Rectangle {
    int length;
    int width;
    //char select;
    int (*Select_fanction)(int _length,int _width);
};

int main()
{
    int result;
    int select;
    struct Rectangle rectangle;

    //rectangle.Select_fanction = (int *) malloc(sizeof(struct Rectangle));

    printf("请输入长和宽：\n");
    scanf("%d %d",&rectangle.length,&rectangle.width);

    printf("请选择要作的操作：\n");
    printf("'A'：area   'B'：perimeter\n");
    scanf("%d",&select);

    switch (select)
    {
    case 0:
        rectangle.Select_fanction = area;
        break;
    case 1:
        rectangle.Select_fanction = perimeter;
        break;
    default:
        rectangle.Select_fanction = NULL;
        printf("输入选择模式错误！！！\n");
        break;
    }

    result = rectangle.Select_fanction(rectangle.length,rectangle.width);
    printf("Select %c : the result is %d.\n",select,result);

    return 0;
}

static int area(int _length,int _width)
{
    return (_length * _width);
}

static int perimeter(int _length,int _width)
{
    return (2 * (_length + _width) );
}

#endif

#if 0

#include <stdio.h>

static int area(int _width,int _height);
static int perimeter(int _width,int _height);

typedef struct 
{
    int width;
    int height;
    int (*select_fuction)(int,int);
}Rectangle;

int main()
{
    int result;
    int opt;
    Rectangle my_rectangle;

    printf("input \n");
    scanf("%d",&my_rectangle.width);
    printf("input \n");
    scanf("%d",&my_rectangle.height);

    printf("please\n");
    scanf("%d",&opt);

    switch (opt)
    {
    case 0:my_rectangle.select_fuction = area;
        break;
    case 1:my_rectangle.select_fuction = perimeter;
        break;
    default:my_rectangle.select_fuction = NULL;
        break;
    }
    result = my_rectangle.select_fuction(my_rectangle.width,my_rectangle.height);
    printf("the result is %d\n",result);
    return 0;
}

static int area(int _width,int _height)
{
    return _width * _height;
}

static int perimeter(int _width,int _height)
{
    return 2 * (_width + _height);
}
#endif



#if 1
#include <stdio.h>

static int area(int _length,int _width);
static int perimeter(int _length,int _width);

typedef struct {
    int length;
    int width;
    //char select;
    int (*Select_fanction)(int _length,int _width);
}Rectangle;

int main()
{
    int result;
    int select;
    Rectangle rectangle;

    //rectangle.Select_fanction = (int *) malloc(sizeof(struct Rectangle));

    printf("请输入长：\n");
    scanf("%d",&rectangle.length);
    printf("请输入宽：\n");
    scanf("%d",&rectangle.width);

    printf("请选择要作的操作：\n");
    printf("'0'：area   '1'：perimeter\n");
    scanf("%d",&select);

    switch (select)
    {
    case 0:
        rectangle.Select_fanction = area;
        break;
    case 1:
        rectangle.Select_fanction = perimeter;
        break;
    default:
        rectangle.Select_fanction = NULL;
        printf("输入选择模式错误！！！\n");
        break;
    }

    result = rectangle.Select_fanction(rectangle.length,rectangle.width);
    printf("Select %d : the result is %d.\n",select,result);

    return 0;
}

static int area(int _length,int _width)
{
    return (_length * _width);
}

static int perimeter(int _length,int _width)
{
    return (2 * (_length + _width) );
}

#endif