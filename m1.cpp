//not working 
#include<iostream>
using namespace std;
class Matrix{
	int matrix[2][2];
		
	Matrix()
	{
		for(int i=0;i<2;i++)
			{
				for(int j=0;j<2;j++)
				{
					matrix[i][j]=0;
				}
			}
	}
	public: Matrix operator +(Matrix &mt)
	{
		Matrix m=mt;
		for(int i=0;i<2;i++)
			{
				for(int j=0;j<2;j++)
				{
					m.matrix[i][j]=matrix[i][j]+mt.matrix[i][j];
				}
			}
		return m;
	}
	public: Matrix operator -(Matrix &mt)
	{
		Matrix m=mt;
		for(int i=0;i<2;i++)
			{
				for(int j=0;j<2;j++)
				{
					m.matrix[i][j]=matrix[i][j]-mt.matrix[i][j];
				}
			}
		return m;
	}

	public: Matrix operator *(Matrix &mt)
	{
		Matrix m=mt;
		for(int i=0;i<2;i++)
			{
				for(int j=0;j<2;j++)
				{
					m.matrix[i][j]=matrix[i][j]*mt.matrix[i][j];
				}
			}
		return m;
	}
public: Matrix operator /(Matrix &mt)
	{
		Matrix m=mt;
		for(int i=0;i<2;i++)
			{
				for(int j=0;j<2;j++)
				{
					m.matrix[i][j]=matrix[i][j]/mt.matrix[i][j];
				}
			}
		return m;
	}
	
};
 	 istream operator >>(istream &input,matrix &m)
		{
			for(int i=0;i<2;i++)
			{
				for(int j=0;mj<2;j++)
				{
					input>>m.matrix[i][j];
				}
			}
	               return m;
		}	
	 ostream operator <<(ostream &output,matrix &m)
		{
			for(int i=0;i<2;i++)
			{
				for(int j=0;j<2;j++)
				{
					output>>m.matrix[i][j];
				}
			}
			return m;
		}



int main()
{
	
	Matrix mt1,mt2,mt3;
	cin>>mt1;
	cin>>mt2;
	cout<<"Addition:";
	mt3=mt1+mt2;
	cout<<mt1;
	cout<<"Subtraction:";
	mt3=mt1-mt2;
	cout<<mt1;
	cout<<"Multiplication:";
	mt3=mt1*mt2;
	cout<<mt1;
	cout<<"Division:";
	mt3=mt1/mt2;
	cout<<mt1;
}
