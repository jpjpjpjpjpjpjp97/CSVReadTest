//
// Created by Jose Diaz on 6/12/21.
//

#ifndef CSV_FILE_TEST_CSVMANAGER_H
#define CSV_FILE_TEST_CSVMANAGER_H

#include "vector"
#include "fstream"
#include "Disease.h"

class CSVManager {
    void save_disease(std::vector<Disease> &diseaseList, Disease disease);
    int parseLineToObject(std::string &line, std::vector<Disease> &diseaseList);
public:
    CSVManager();

    virtual ~CSVManager();

    int read(std::string filename, std::vector<Disease> &diseaseList);
};


#endif //CSV_FILE_TEST_CSVMANAGER_H
