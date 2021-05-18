#include "solution_c_bas_niveau.h
#include "unity.h"

void setUp(void) {
    // set stuff up here
}

void tearDown(void) {
    // clean stuff up here
}

void test_puts(void){
    TEST_ASSERT_EQUAL_INT('!', puts("Hello!"));
}

void test_strlen(void){
    TEST_ASSERT_EQUAL_INT(6, strlen("Hello!"));
}

void test_strcpy(void){
    TEST_ASSERT_EQUAL_STRING("Hello!", strcpy(ns, "Hello!"));
}

void test_strreverse(void){
    TEST_ASSERT_EQUAL_STRING("!olleH", strreverse("Hello!"));
}

void test_longtodec(void){
    TEST_ASSERT_EQUAL_STRING("4294967295", longtodec(4294967295));
}

void test_hexstr(void){
    TEST_ASSERT_EQUAL_STRING("ff", hexstr(255));
}

// not needed when using generate_test_runner.rb
int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_puts);
    RUN_TEST(test_strlen);
    RUN_TEST(test_strcpy);
    RUN_TEST(test_strreverse);
    RUN_TEST(test_longtodec);
    RUN_TEST(test_hexstr);
    return UNITY_END();
}