//
// Created by truefinch on 15.11.18.
//

#include <gtest/gtest.h>
#include "../src/Printer.h"

class SampleTestFixture : public ::testing::Test {
public:
    Printer obj;
    SampleTestFixture() {}

    virtual void SetUp() {
    }

    static void SetUpTestCase() {
    }

    virtual void TearDown() {};

    static void TearDownTestCase() {};
};

TEST_F(SampleTestFixture, sampleTest) {
    //test test test test
    ASSERT_EQ(obj.Print(), "Hello, World!");
}

TEST_F(SampleTestFixture, sampleTest1) {
    ASSERT_EQ(obj.Print1(1), "Hello, travis!");
}