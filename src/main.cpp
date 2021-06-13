#include "iostream"

#include "Disease.h"
#include "CSVManager.h"

int main() {

    std::vector<Disease> diseaseList;
    auto* csvManager = new CSVManager();

    csvManager->read("enfermedades.csv", diseaseList);

    for(Disease disease : diseaseList){
        std::cout << disease.toString();
    }
    return 0;
}
