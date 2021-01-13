#include <iostream>
#include <map>
#include <sstream>
#include <string>
using namespace std;

int main() {
    int n, q;
    string curr = "", attr, val;
    map<string, string> data;
    cin >> n >> q;
    cin.ignore();

    for (int i = 0; i < n; i++) {
        string line, tag, word;
        getline(cin, line);
        stringstream ss(line);

        while(getline(ss, word, ' ')) {
            if (word[0] == '<') {
                if (word[1] != '/') {
                    tag = word.substr(1);
                    if (tag[tag.length() - 1] == '>') {
                        tag.pop_back();
                    }
                    if (curr.size() > 0) {
                        curr += "." + tag;
                    }
                    else {
                        curr = tag;
                    }
                }
                else {
                    tag = word.substr(2, (word.find('>') - 2));
                    size_t pos = curr.find("." + tag);
                    if (pos != string::npos) {
                        curr = curr.substr(0, pos);
                    }
                    else {
                        curr = "";
                    }
                }
            }
            else if (word[0] == '"') {
                size_t pos = word.find_last_of('"');
                val = word.substr(1, pos-1);
                data[attr] = val;
            }

            else {
                if (word != "=") {
                    attr = curr + "~" + word;
                }
            }
        }
    }
    string query;
    for (int i = 0; i < q; i++) {
        getline(cin, query);
        map<string, string>::iterator itr = data.find(query);
        if (itr != data.end()) {
            cout << itr->second << endl;
        }
        else {
            cout << "Not Found!" << endl;
        }
    }

    return 0;
}
