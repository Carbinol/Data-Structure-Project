#include<stdio.h>    //����malloc����
#include<stdlib.h>
struct node    //������Ϊnode�Ľṹ��
{
    char elem_c;    //�洢�ַ���������
    double elem_n;    //�洢������������
    int type;    //�洢ָʾ�ýڵ��������͵Ĳ���
    struct node *next;    //ָ��Ԫ��
};
//��������
struct node *read(struct node *n_node);
void print();
//������
int main()
{
    struct node *head;    //����ͷ���
    head=NULL;    //��ֵΪ��
    head=read(head);
    print(head);
    return 0;
}
struct node *read(struct node *n_node)    //�β�Ϊnode���͵�ָ��
{
    struct node *p1,*p2;
    p1=(struct node*)malloc(sozeof(struct node));    //����һ���µ��ڴ�ռ�
    p1->type=0;    //Ĭ����������=0����Ϊ��������ı�־
    p1->next=NULL;    //�½ڵ��ָ����Ϊ��
    if(scanf("%lf",&p1->elem_n)!=0)    //�������������
        p1->type=1;    //��������=1
    else    //�������Ĳ�������
    {
        scanf("%c",&p1->elem_c);    //�����ַ�
        p1->type=2;    //��������=2
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
    free(p1);  //���뵽��û¼�룬�����ͷŵ�
    p1=NULL;   //ʹָ���
    p2->next=NULL;
    return n_node;
}
void print(struct node*head)/*����headΪͷ��������ڵ��ֵ*/
{
    struct node *temp;
    temp=head;/*ȡ�������ͷָ��*/

    printf("\n\n\n��������ֵΪ��\n");
    while(temp!=NULL)/*ֻҪ�Ƿǿձ�*/
    {
        printf("%6d\n",temp->num);/*�������ڵ��ֵ*/
        temp=temp->next;/*������������*/
    }
    printf("�����ӡ����!!");
}
