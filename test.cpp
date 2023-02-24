// 입력된 파라미터를 출력해주는 C++ 코드 작성해줘.

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    cout << "입력된 파라미터는 다음과 같습니다:" << endl;
    for (int i = 0; i < argc; i++) {
        cout << argv[i] << endl;
    }
    return 0;
}
