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

TEST(IntRange, ReverseNegativesBasic)
{
    ir::value_type A[]{ -1, -2, -3, -4, -5 };  
    ir::value_type A_E[]{ -5, -4, -3, -2, -1 };  


    auto len_before{ std::distance( std::begin(A), std::end(A) ) };
    ir::reverse(std::begin(A), std::end(A));
    auto len_after{ std::distance( std::begin(A), std::end(A) ) };

    ASSERT_EQ( len_before, len_after );
    ASSERT_TRUE (std::equal( std::begin(A), std::end(A), std::begin(A_E) ));
}

TEST(IntRange, ReversePositivesBasic)
{
    ir::value_type A[]{ 1, 2, 3, 4, 5 };  
    ir::value_type A_E[]{ 5, 4, 3, 2, 1 };  


    auto len_before{ std::distance( std::begin(A), std::end(A) ) };
    ir::reverse(std::begin(A), std::end(A));
    auto len_after{ std::distance( std::begin(A), std::end(A) ) };

    ASSERT_EQ( len_before, len_after );
    ASSERT_TRUE (std::equal( std::begin(A), std::end(A), std::begin(A_E) ));
}

TEST(IntRange, Scalar_MultBasicNegatives)
{
    ir::value_type A[]{ -1, -2, -3, -4, -5 };  
    ir::value_type A_E[]{ -3, -6, -9, -12, -15 }; 

    auto len_before{ std::distance( std::begin(A), std::end(A) ) };
    ir::scalar_multiplication(std::begin(A), std::end(A), 3);
    auto len_after{ std::distance( std::begin(A), std::end(A) ) };

    ASSERT_EQ( len_before, len_after );
    ASSERT_TRUE (std::equal( std::begin(A), std::end(A), std::begin(A_E) ));
}

TEST(IntRange, Scalar_MultBasicPositives)
{
    ir::value_type A[]{ 1, 2, 3, 4, 5 };  
    ir::value_type A_E[]{ 3, 6, 9, 12, 15 }; 

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

TEST(IntRange, CompactBasic)
{
    ir::value_type A[]{ -2, -8, 2, 7, -3, 10, 1, 0, -3, 7};  
    ir::value_type B[]{ 2, 7, 10, 1, 7};  
    

    
    auto new_last = ir::compact(std::begin(A), std::end(A));
    
    ASSERT_TRUE( std::equal( std::begin(A), new_last, std::begin(B) ));
    

}

TEST(IntRange, CopyBasic)
{
    ir::value_type A[]{1, 2, 3, 4, 5};
    ir::value_type A_E[]{1, 2, 3, 4, 5};  
    ir::value_type B[]{0,0};  

    
    auto copy_last = ir::copy(std::begin(A), std::end(A), std::begin(B) );

    
    
    ASSERT_TRUE( std::equal( std::begin(B), copy_last, std::begin(A_E)));
    

}


int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
