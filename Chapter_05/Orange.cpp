#include<iostream>
#include<stdio.h>
using namespace std;

class OrangeBox
{
public:
	OrangeBox();
	OrangeBox(int n);
	void Add(int addOrangeBox);
	void Del(int delOrangeBox);
	void Empty();
	int GetTotal();
	~OrangeBox();
private:
	int total;

};

//�������� ����
//��ü�� ������ �� ������ 1ȸ�� ȣ��
OrangeBox::OrangeBox()
{
	total = 0;
	cout << "OrangeBox ������Ʈ ����" << endl;
}
OrangeBox::OrangeBox(int n)
{
	total = n;
}
OrangeBox::~OrangeBox()
{

}

void OrangeBox::Add(int addOrangeBox)
{
	total += addOrangeBox;
}

void OrangeBox::Del(int delOrangeBox)
{
	total -= delOrangeBox;

	if (total < 0)
	{
		Empty();
	}
}

void OrangeBox::Empty()
{
	total = 0;
}

int OrangeBox::GetTotal()
{
	return total;
}

void main()
{
	//������Ʈ ����
	//�������� ������ ���� ����
	//������� �������� �޸𸮸� Ȯ�� �Ѵ�
	OrangeBox myOrangeBox;

	//������ �ڽ� ��ü�� �����ϸ鼭 10���� �������� �ִ´� 
	OrangeBox myOrangeBox1(10);

	//�������� ������ ���� ����
	//���� : �ʿ��� �� �޸𸮸� Ȯ���� �� �ִ�.
	//OrangeBox *pOrangeBox = new OrangeBox;
	
	//������ ���ڸ� ���
	myOrangeBox.Empty();

	//������ �ϳ��� ����
	myOrangeBox.Add(1);

	printf("���� ���� ������ : %d \n", myOrangeBox.GetTotal());

	//�������� int�� �迭 ����
	int *pNum = new int[10];
	//�迭 �޸� ����
	delete [] pNum;

	//������ ���� ������Ʈ �迭 ��������
	OrangeBox *pOrangeBox;
	pOrangeBox = new OrangeBox[10];
	//�迭 �޸� ����
	delete []pOrangeBox;

	OrangeBox *pOrangeBox1 = new OrangeBox;
	//�������� ������ ������ �ڽ� ������Ʈ�� ����
	delete pOrangeBox1;

	OrangeBox *pOrangeBox2 = new OrangeBox(30);

}