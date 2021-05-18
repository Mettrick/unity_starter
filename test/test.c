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

    TEST_ASSERT_EQUAL_STRING("Hello!", strcpy());
}

void test_strreverse(void){

}

void test_longtodec(void){

}

void test_hexstr(void){

}

// not needed when using generate_test_runner.rb
int main(void) {
    UNITY_BEGIN();
    RUN_TEST();
    RUN_TEST();
    return UNITY_END();
}