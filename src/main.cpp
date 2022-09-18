#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	double k, d1, d2;
	cin >> k >> d1 >> d2;

	const auto& d = (d1 - d2) / 2;
	cout << fixed << setprecision(7) << k * k - d * d;

	return 0;
}