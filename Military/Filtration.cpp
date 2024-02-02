#include "Filtration.h"
#define Fi Filtration
#include "nlohmann/json.hpp"
#include <vector>
#include <sstream>
#include <string>

using json = nlohmann::json;

vector<string> Fi::PrintObjectsWithGreaterThan(int distance, int caliber) {

    try {
        vector<string> arr_filtr;

        Serealization ser(data_name);
        for (auto it = ser.data.begin(); it != ser.data.end(); ++it) {

            const auto& item = *it;
            const string& objectName = it.key();

            if ((item["distance"] >= distance) && (item["caliber"] >= caliber)) {
                // ������� �������� ������ � �����������
                stringstream ss;

                //ĳ�� ����� ��������� ��� ��� ���� �� ���������� �����
                //+ � �������� �������� ����� ����� ���� ����� ������� ��� ���� ����������� ����� �� ��� (� ��� ����)
                //+ �� ������ ������ ��� ������ � �� ���� (Qt)
            
                ss << ConvertToUkr(objectName) << "(��������� (" << item["distance"] << "), ����� (" << item["caliber"] << "))";

                arr_filtr.push_back(ss.str());
            }
        }
        return arr_filtr;
    }
    catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;
    }
}
string Fi::ConvertToUkr(string englishWord) {
    if (englishWord == "Mines")
        return "̳��";
    else if (englishWord == "MLRS")
        return "����";
    else if (englishWord == "Tanks")
        return "����";
    else if (englishWord == "Artillery")
        return "��������";
    else if (englishWord == "Shooter")
        return "��������";
    else if (englishWord == "Aviation")
        return "������";
    else if (englishWord == "Mortars")
        return "̳�����";
    else if (englishWord == "Armored vehicles")
        return "��������� ������/���";
    else if (englishWord == "Anti-tank missile")
        return "���";
    else
        return "�����";

}
