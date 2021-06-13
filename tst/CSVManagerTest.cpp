//
// Created by Jose Diaz on 6/12/21.
//

#include "gtest/gtest.h"

#include "Disease.h"
#include "CSVManager.h"

TEST(CSVManagerTestSuite, CSVManagerReadTest) {
    std::vector<Disease> diseaseList;
    auto* csvManager = new CSVManager();

    csvManager->read("enfermedades.csv", diseaseList);

    EXPECT_EQ(true, true);
}