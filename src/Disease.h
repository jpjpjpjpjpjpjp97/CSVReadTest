//
// Created by Jose Diaz on 6/12/21.
//

#ifndef CSV_FILE_TEST_DISEASE_H
#define CSV_FILE_TEST_DISEASE_H

#include "string"

class Disease {
private:
    std::string name;
    std::string sequence;
public:
    Disease();
    Disease(const std::string &name, const std::string &sequence);

    const std::string &getName() const;
    void setName(const std::string &name);

    const std::string &getSequence() const;
    void setSequence(const std::string &sequence);

    std::string toString();
    virtual ~Disease();
};


#endif //CSV_FILE_TEST_DISEASE_H
