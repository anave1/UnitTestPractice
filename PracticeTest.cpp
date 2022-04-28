/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"
#include <string>

using std::string;

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PracticeTest, smoke_test)
{
    ASSERT_TRUE(true);
}

TEST(PracticeTest, zzz_repeats) {
    Practice testObject; //creates an object
    ASSERT_EQ(testObject.count_starting_repeats("zzz"), 3);
}

TEST(PracticeTest, word_repeats) {
    Practice testObject; //creates an object
    ASSERT_EQ(testObject.count_starting_repeats("Llama"), 1);
}

TEST(PracticeTest, empty_repeats) {
    Practice testObject; //creates an object
    ASSERT_EQ(testObject.count_starting_repeats(" "), 0);
}

TEST(PracticeTest, word2_repeats) {
    Practice testObject; //creates an object
    ASSERT_EQ(testObject.count_starting_repeats("llama"), 2);
}

TEST(PracticeTest, desc_int) {
    Practice testObject; //creates an object
    int a = 1;
    int b = 2;
    int c = 3;
    testObject.sortDescending(a, b, c);
    ASSERT_EQ(a, 3);
    ASSERT_EQ(b, 2);
    ASSERT_EQ(c, 1);
}

TEST(PracticeTest, desc_int2) {
    Practice testObject; //creates an object
    int a = 17;
    int b = 3;
    int c = 25;
    testObject.sortDescending(a, b, c);
    ASSERT_EQ(a, 25);
    ASSERT_EQ(b, 17);
    ASSERT_EQ(c, 3);
}

TEST(PracticeTest, isPalindrome) {
    Practice testObject;
    string word = "RACECAR";
    bool result;
    result = testObject.isPalindrome(word);
    ASSERT_EQ(result, true);
}

TEST(PracticeTest, isPalindrome3) {
    Practice testObject;
    string word = "Racecar";
    bool result;
    result = testObject.isPalindrome(word);
    ASSERT_EQ(result, true);
}

TEST(PracticeTest, isPalindrome2) {
    Practice testObject;
    string word = "WORD";
    bool result;
    result = testObject.isPalindrome(word);
    ASSERT_EQ(result, false);
}

TEST(PracticeTest, allnighter) {
    Practice testObject;
    int sleep[7];
}
