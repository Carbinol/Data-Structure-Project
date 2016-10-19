#include<stdio.h>    //包含malloc函数
#include<stdlib.h>
struct node    //定义名为node的结构体
{
    char elem_c;    //存储字符类型数据
    double elem_n;    //存储整数类型数据
    int type;    //存储指示该节点数据类型的参数
    struct node *next;    //指针元素
};
//函数声明
struct node *read(struct node *n_node);
void print();
//主函数
int main()
{
    struct node *head;    //定义头结点
    head=NULL;    //赋值为空
    head=read(head);
    print(head);
    return 0;
}
struct node *read(struct node *n_node)    //形参为node类型的指针
{
    struct node *p1,*p2;
    p1=(struct node*)malloc(sozeof(struct node));    //申请一块新的内存空间
    p1->type=0;    //默认数据类型=0，作为输入结束的标志
    p1->next=NULL;    //新节点的指针置为空
    if(scanf("%lf",&p1->elem_n)!=0)    //如果读入了数字
        p1->type=1;    //数据类型=1
    else    //如果读入的不是数字
    {
        scanf("%c",&p1->elem_c);    //读入字符
        p1->type=2;    //数据类型=2
    }
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
    p2->next=NULL;
    return n_node;
}
void print(struct node*head)/*出以head为头的链表各节点的值*/
{
    struct node *temp;
    temp=head;/*取得链表的头指针*/

    printf("\n\n\n链表存入的值为：\n");
    while(temp!=NULL)/*只要是非空表*/
    {
        printf("%6d\n",temp->num);/*输出链表节点的值*/
        temp=temp->next;/*跟踪链表增长*/
    }
    printf("链表打印结束!!");
}
