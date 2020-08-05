#include "uidgen.h"

#include <string>
#include <gtest/gtest.h>

TEST(UID, UID_is_generated_within_length_limit) {
  std::string uid = uidgen();
  ASSERT_TRUE(uid.length() > 0);
  
}
TEST(UID, UID_is_generated_notin_length_limit) {
  std::string uid = uidgen();
  ASSERT_FALSE(uid.length() > 64);
  
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
