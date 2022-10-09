#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    bool isPM = false;
    if(s[8] == 'P'){
        isPM = true;
    }
    
    string time_s = s.substr(0, 2);
    int    time_i = std::stoi(time_s);
    
    if(isPM == false){
        if(time_i == 12){
            s.replace(0, 2, "00");
        }
    }
    else{
        if(time_i < 12){
            time_i += 12;
            time_s = to_string(time_i);
            s.replace(0, 2, time_s);
        }
    }
    s.pop_back();
    s.pop_back();
    return s;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
