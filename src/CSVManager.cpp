//
// Created by Jose Diaz on 6/12/21.
//

#include <sstream>
#include "CSVManager.h"

CSVManager::CSVManager() {}

int CSVManager::read(std::string filename, std::vector<Disease> &diseaseList) {
    std::string line;
    try {
        std::ifstream file(filename);
        if (file.is_open()) {
            while (!file.eof()) {
                getline(file, line);
                if(!line.empty()) {
                    this->parseLineToObject(line, diseaseList);
                }
            }
        }
        file.close();
    }
    catch (std::ifstream::failure &e) {
        throw std::runtime_error("Exception opening/reading/closing file");
    }
    return 1;
}

int CSVManager::parseLineToObject(std::string &line, std::vector<Disease> &diseaseList) {
    Disease newDisease = Disease();

    std::vector<std::string> lineValues;
    std::string field;
    std::stringstream lineStream(line);

    lineValues.clear();

    while (getline(lineStream, field, char(','))) {
        lineValues.push_back(field);
    }

    newDisease.setName(lineValues[0]);
    newDisease.setSequence(lineValues[1]);
    this->save_disease(diseaseList, newDisease);

    return 1;
}

void CSVManager::save_disease(std::vector<Disease> &diseaseList, Disease disease) {
    diseaseList.push_back(disease);
}

CSVManager::~CSVManager() {

}

