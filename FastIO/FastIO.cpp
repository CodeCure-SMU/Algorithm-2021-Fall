// FastIO.cpp
#include <iostream>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie( NULL ); // C++의 Fast Input
	cout.tie( NULL ); // C++의 Fast Output

	// 만약 위의 것들을 선언했다면 printf, scanf등 사용 불가!
	// 이후는 동일
	int a;
	cin >> a;

	int n, m;
	cin >> n >> m;

	int arr[10];
	for ( int i = 0; i < 10; i++ )
		cin >> arr[i];

	// 출력 때 개행문자를 endl로 하는 것은 굉장히 느림! 따라서 빠른 Output 때는 꼭 '\n'으로 개행해주기
	cout << a << '\n';

	cout << n << ' ' << m << '\n';

	for ( int i = 0; i < 10; i++ )
		cout << arr[i] << ' ';
	cout << '\n';

	return 0;
}