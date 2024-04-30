//not working 
#include<iostream>
using namespace std;
class Matrix{
	int matrix[2][2];
	public: void setMatrix(Matrix &mt,int m[2][2])
	{
		for(int i=0;i<2;i++)
			{
				for(int j=0;j<2;j++)
				{
					matrix[i][j]=m[i][j];
				}
			}
	}
	public: void getMatrix()
	{
		for(int i=0;i<2;i++)
			{
				for(int j=0;j<2;j++)
				{
					cout<<matrix[i][j];
				}
				cout<<"\n";
			}
	}
	Matrix operator >>(istream &input,matrix &m)
		{
			for(int i=0;i<2;i++)
			{
				for(int j=0;j<2;j++)
				{
					cin>>m[i][j];
				}
			}
		}	
	mt.setMatrix(Matrix &mt,int m[2][2]);
}
	public: Matrix operator +(Matrix &mt2)
	{
		for(int i=0;i<2;i++)
			{
				for(int j=0;j<2;j++)
				{
					return mt3.matrix[i][j]=matrix[i][j]+mt2.matrix[i][j];
				}
			}
	}
	
	/*public: Matrix operator -(Matrix &mt2)
	{
		for(int i=0;i<2;i++)
			{
				for(int j=0;j<2;j++)
				{
					return mt4.matrix[i][j]=matrix[i][j]-mt2.matrix[i][j];
				}
			}
	}

	public: Matrix operator *(Matrix &mt)
	{
		for(int i=0;i<2;i++)
			{
				for(int j=0;j<2;j++)
				{
					return mt5.matrix[i][j]=matrix[i][j]*mt2.matrix[i][j];
				}
			}
	}*/
};


int main()
{
	int m[2][2];
	Matrix mt1;
	Matrix mt2;
	Matrix mt3;
	cin>>mt1;
	cin>>mt2;
	mt3=mt1+mt2;
	
}
