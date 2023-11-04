#ifndef SHOPPING_CART_H
#define SHOPPING_CART_H

#include <vector>
#include <string>

class ShoppingCart {
public:
    void addItem(const std::string& item, double price) {
        cart.push_back({item, price});
    }

    bool removeItem(const std::string& item) {
        for (auto it = cart.begin(); it != cart.end(); ++it) {
            if (it->item == item) {
                cart.erase(it);
                return true;
            }
        }
        return false;
    }

    double calculateTotal() const {
        double total = 0.0;
        for (const auto& item : cart) {
            total += item.price;
        }
        return total;
    }

    void applyDiscount(const std::string& item, double discount) {
        for (auto& cartItem : cart) {
            if (cartItem.item == item) {
                cartItem.price -= cartItem.price * discount;
            }
        }
    }

private:
    struct CartItem {
        std::string item;
        double price;
    };

    std::vector<CartItem> cart;
};

#endif
