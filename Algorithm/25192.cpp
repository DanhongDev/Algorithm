#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    int cnt = 0; 
    string temp;
    unordered_set<string> arr; 

    while (T--) {
        cin >> temp;

        if (temp == "ENTER") 
        {
            arr.clear(); // ���ο� �׷� ����
        }
        else 
        {
            // �ߺ� üũ �� ����Ƽ�� ��� ī��Ʈ ����
            if (arr.insert(temp).second) 
            {
                cnt++;
            }
        }
    }

    cout << cnt << '\n';
    return 0;
}
