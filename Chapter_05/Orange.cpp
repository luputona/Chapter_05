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

//생성자의 정의
//객체가 생성될 때 최초의 1회만 호출
OrangeBox::OrangeBox()
{
	total = 0;
	cout << "OrangeBox 오브젝트 생성" << endl;
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
	//오브젝트 생성
	//정적으로 오렌지 상자 생성
	//사용하지 않을때도 메모리를 확보 한다
	OrangeBox myOrangeBox;

	//오렌지 박스 객체를 생성하면서 10개의 오렌지를 넣는다 
	OrangeBox myOrangeBox1(10);

	//동적으로 오렌지 상자 생성
	//장점 : 필요할 때 메모리를 확보할 수 있다.
	//OrangeBox *pOrangeBox = new OrangeBox;
	
	//오렌지 상자를 비움
	myOrangeBox.Empty();

	//오렌지 하나를 넣음
	myOrangeBox.Add(1);

	printf("상자 속의 오렌지 : %d \n", myOrangeBox.GetTotal());

	//동적으로 int형 배열 생성
	int *pNum = new int[10];
	//배열 메모리 해제
	delete [] pNum;

	//오렌지 상자 오브젝트 배열 동적생성
	OrangeBox *pOrangeBox;
	pOrangeBox = new OrangeBox[10];
	//배열 메모리 해제
	delete []pOrangeBox;

	OrangeBox *pOrangeBox1 = new OrangeBox;
	//동적으로 생성한 오렌지 박스 오브젝트를 해제
	delete pOrangeBox1;

	OrangeBox *pOrangeBox2 = new OrangeBox(30);

}