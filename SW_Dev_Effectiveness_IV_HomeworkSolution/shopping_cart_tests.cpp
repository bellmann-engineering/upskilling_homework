#include <gtest/gtest.h>
#include "shopping_cart.h"

class ShoppingCartTest : public testing::Test {
protected:
    ShoppingCart cart;
};

TEST_F(ShoppingCartTest, AddItemTest) {
    // Arrange
    std::string item = "Product A";
    double price = 10.0;

    // Act
    cart.addItem(item, price);

    // Assert
    EXPECT_EQ(cart.calculateTotal(), price);
}

TEST_F(ShoppingCartTest, RemoveItemTest) {
    // Arrange
    std::string item = "Product B";
    double price = 15.0;
    cart.addItem(item, price);

    // Act
    bool removed = cart.removeItem(item);

    // Assert
    EXPECT_TRUE(removed);
    EXPECT_EQ(cart.calculateTotal(), 0.0);
}

TEST_F(ShoppingCartTest, ApplyDiscountTest) {
    // Arrange
    std::string item = "Product C";
    double price = 20.0;
    double discount = 0.1;  // 10% discount
    cart.addItem(item, price);

    // Act
    cart.applyDiscount(item, discount);

    // Assert
    EXPECT_EQ(cart.calculateTotal(), price - (price * discount));
}

int main(int argc, char** argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
