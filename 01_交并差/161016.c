#include<stdio.h>
#include<stdlib.h>
struct node  //定义名为node的结构体
{
    char elem_c;  //存储字符类型数据
    double elem_n;  //存储整数类型数据以及指示该节点数据类型的参数
    int type;
    struct node *next;  //指针元素
};
struct node *read(struct node *n_node);
void print();
int main()
{
    struct node *head;
    head=NULL;
    head=read(head);
    print(head);
    return 0;
}
struct node *read(struct node *n_node)  //形参为node类型的指针
{
    struct node *p1,*p2;
    p1=p2=(struct node*)malloc(sozeof(struct node));
    p1->type=0;
    p1->elem_c='\0';
    if(scanf("%lf",&p1->elem_n)==0)
    {
        p1->type=2;
        scanf("%c",&p1->elem_c);
    }
    else
        p1->type=1;
    p1->next=NULL;
    while(p1->type!=0)
    {
        if(n_node==NULL)
            n_node=p1;
        else
            p2->next=p1;
        p2=p1;
        p1=(struct node*)malloc(sozeof(struct node));
        if(scanf("lf",&p1->elem_n)==0)
    {
        p1->type=2;
        scanf("%c",&p1->elem_c);
    }
        else
            p1->type=1;
        p2=p1;
        p1=(struct node*)malloc(sizeof(struct node));
        p1->type=0;
        p1->elem_c='\0';
        if(scanf("%lf",&p1->elem_n)==0)
        {
            p1->type=2;
            scanf("%c",&p1->elem_c);
        }
        else
            p1->type=1;
    }
    free(p1);  //申请到的没录入，所以释放掉
    p1=NULL;   //使指向空
    p2->next = NULL;
    return n_node;
}
