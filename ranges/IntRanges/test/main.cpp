#include <iterator> // begin(), end()

#include "gtest/gtest.h"
#include "../include/int_ranges.h"

using namespace ir;

TEST(IntRange, NegateBasic)
{
    ir::value_type A[]{ 1, 2, 3, 4, 5 };
    ir::value_type A_E[]{ -1, -2, -3, -4, -5 };

    auto len_before{ std::distance( std::begin(A), std::end(A) ) };
    ir::negate( std::begin(A), std::end(A) );
    auto len_after{ std::distance( std::begin(A), std::end(A) ) };
    ASSERT_EQ( len_before, len_after );
    ASSERT_TRUE( std::equal( std::begin(A), std::end(A), std::begin(A_E) ) );
}

TEST(IntRange, NegateZeros)
{
    ir::value_type A[]{ 0, 0, 0, 0, 0 };
    ir::value_type A_E[]{ 0, 0, 0, 0, 0 };

    auto len_before{ std::distance( std::begin(A), std::end(A) ) };
    ir::negate( std::begin(A), std::end(A) );
    auto len_after{ std::distance( std::begin(A), std::end(A) ) };
    ASSERT_EQ( len_before, len_after );
    ASSERT_TRUE( std::equal( std::begin(A), std::end(A), std::begin(A_E) ) );
}
TEST(IntRange, NegateMixed)
{
    ir::value_type A[]{ 0, -2, 1, -3, 0 };
    ir::value_type A_E[]{ 0, 2, -1, 3, 0 };

    auto len_before{ std::distance( std::begin(A), std::end(A) ) };
    ir::negate( std::begin(A), std::end(A) );
    auto len_after{ std::distance( std::begin(A), std::end(A) ) };
    ASSERT_EQ( len_before, len_after );
    ASSERT_TRUE( std::equal( std::begin(A), std::end(A), std::begin(A_E) ) );
}

TEST(IntRange, MinBasic)
{
    ir::value_type A[]{ 1, 2, 3, 4, 5 };   

    auto min = ir::min( std::begin(A), std::end(A) );

    ASSERT_EQ(*min, 1);

}

TEST(IntRange, MinNegatives)
{
    ir::value_type A[]{ -1, -2, -3, -4, -5 };   

    auto min = ir::min( std::begin(A), std::end(A) );

    ASSERT_EQ(*min, -5);

}

TEST(IntRange, ReverseBasic)
{
    ir::value_type A[]{ -1, -2, -3, -4, -5 };  
    ir::value_type A_E[]{ -5, -4, -3, -2, -1 };  


    auto len_before{ std::distance( std::begin(A), std::end(A) ) };
    ir::reverse(std::begin(A), std::end(A));
    auto len_after{ std::distance( std::begin(A), std::end(A) ) };

    ASSERT_EQ( len_before, len_after );
    ASSERT_TRUE (std::equal( std::begin(A), std::end(A), std::begin(A_E) ));
}

TEST(IntRange, Scalar_MultBasic)
{
    ir::value_type A[]{ -1, -2, -3, -4, -5 };  
    ir::value_type A_E[]{ -3, -6, -9, -12, -15 }; 

    auto len_before{ std::distance( std::begin(A), std::end(A) ) };
    ir::scalar_multiplication(std::begin(A), std::end(A), 3);
    auto len_after{ std::distance( std::begin(A), std::end(A) ) };

    ASSERT_EQ( len_before, len_after );
    ASSERT_TRUE (std::equal( std::begin(A), std::end(A), std::begin(A_E) ));
}

TEST(IntRange, DotProductBasic)
{
    ir::value_type A[]{ -18, -15, -12, -9, -6, -3};  
    ir::value_type B[]{ 1, 2, 3, 4, 5, 6 };  

    ir::value_type RESULT(-168);  

    
    auto product = ir::dot_product(std::begin(A), std::end(A), std::begin(B));
    
    ASSERT_EQ( product, RESULT );
    

}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
