#include iostream
#include algorithm
#include vector

using namespace std;

bool compare(pairpairstring, int, int a, pairpairstring, int, int b)
{
	if (a.first.second != b.first.second)
	{
		return a.first.second  b.first.second;
	}

	else
	{
		return a.second  b.second;
	}
}

int main(void)
{
	int n, m;
	cin  n;  입력받는 학생 수
	cin  m;  출력하는 학생 수
	
	vectorpairpairstring, int, int  student;
	string name;
	int score;
	for (int i = 0; i  n; i++)
	{
		cin  name;
		cin  score;
		student.push_back(pairpairstring, int, int(pairstring, int(name, score), i));
	}

	sort(student.begin(), student.end(), compare);

	for (int i = 0; i  m; i++)
	{
		cout  student[i].first.first  endl;
	}
	return 0;
}