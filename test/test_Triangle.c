#include "unity.h"
#include "Triangle.h"

void setUp(void){}

void tearDown(void){}

void test_getTriangleName_for_2_2_5_expect_isoceles(void)
{
  char *triangleName = getTriangleName(2,2,5);
  TEST_ASSERT_EQUAL_STRING("isosceles", triangleName);
}

void test_getTriangleName_for_2_3_3_expect_isoceles(void)
{
  char *triangleName = getTriangleName(2,3,3);
  TEST_ASSERT_EQUAL_STRING("isosceles", triangleName);
}

void test_getTriangleName_for_4_3_4_expect_isoceles(void)
{
  char *triangleName = getTriangleName(4,3,4);
  TEST_ASSERT_EQUAL_STRING("isosceles", triangleName);
}

void test_getTriangleName_for_2_2_minus5_expect_it_is_not_triangle(void)
{
  char *triangleName = getTriangleName(2,2,-5);
  TEST_ASSERT_EQUAL_STRING("It is not a triangle", triangleName);
}

void test_getTriangleName_for_2_minus2_5_expect_it_is_not_triangle(void)
{
  char *triangleName = getTriangleName(2,-2,5);
  TEST_ASSERT_EQUAL_STRING("It is not a triangle", triangleName);

}

void test_getTriangleName_for_minus2_2_5_expect_it_is_not_triangle(void)
{
  char *triangleName = getTriangleName(-2,2,5);
  TEST_ASSERT_EQUAL_STRING("It is not a triangle", triangleName);
}

void test_getTriangleName_for_2_0_5_expect_it_is_not_triangle(void)
{
  char *triangleName = getTriangleName(2,0,5);
  TEST_ASSERT_EQUAL_STRING("It is not a triangle", triangleName);
}

void test_getTriangleName_for_0_2_5_expect_it_is_not_triangle(void)
{
  char *triangleName = getTriangleName(0,2,5);
  TEST_ASSERT_EQUAL_STRING("It is not a triangle", triangleName);
}

void test_getTriangleName_for_2_2_0_expect_it_is_not_triangle(void)
{
  char *triangleName = getTriangleName(2,2,0);
  TEST_ASSERT_EQUAL_STRING("It is not a triangle", triangleName);
}

void test_getTriangleName_for_2_2_2_expect_equilateral(void)
{
  char *triangleName = getTriangleName(2,2,2);
  TEST_ASSERT_EQUAL_STRING("equilateral", triangleName);
}

void test_getTriangleName_for_5_5_5_expect_equilateral(void)
{
  char *triangleName = getTriangleName(5,5,5);
  TEST_ASSERT_EQUAL_STRING("equilateral", triangleName);
}

void test_getTriangleName_for_2_3_5_expect_scalene(void)
{
  char *triangleName = getTriangleName(2,3,5);
  TEST_ASSERT_EQUAL_STRING("scalene", triangleName);
}

void test_getTriangleName_for_7_8_9_expect_scalene(void)
{
  char *triangleName = getTriangleName(7,8,9);
  TEST_ASSERT_EQUAL_STRING("scalene", triangleName);
}

void test_add_2_with_5_except_7(void)
{
  int result = add(2,5);
  TEST_ASSERT_EQUAL(7,result);
}

void test_9_minus_20_expect_minus11(void)
{
  int result = minus(9,20);
  TEST_ASSERT_EQUAL(-11,result);
}
