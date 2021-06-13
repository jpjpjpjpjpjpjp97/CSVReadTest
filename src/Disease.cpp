//
// Created by Jose Diaz on 6/12/21.
//

#include "sstream"
#include "Disease.h"

Disease::Disease() {}

Disease::Disease(const std::string &name, const std::string &sequence) : name(name), sequence(sequence) {}

const std::string &Disease::getName() const {
    return name;
}

void Disease::setName(const std::string &name) {
    Disease::name = name;
}

const std::string &Disease::getSequence() const {
    return sequence;
}

void Disease::setSequence(const std::string &sequence) {
    Disease::sequence = sequence;
}

std::string Disease::toString() {
    std::stringstream result;
    result << "Name: " << this->name << " | Sequence: " << this->sequence << std::endl;
    return result.str();
}

Disease::~Disease() {

}

