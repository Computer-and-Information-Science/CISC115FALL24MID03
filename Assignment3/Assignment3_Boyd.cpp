#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <map>

class MovieTicketCalculator {
private:
    // Base ticket prices
    const double BASE_ADULT_PRICE = 12.00;
    const double BASE_CHILD_PRICE = 8.00;
    const double BASE_SENIOR_PRICE = 10.00;

    // Seat type price modifiers
    const std::map<std::string, double> SEAT_TYPE_PRICES = {
        {"standard", 1.0},
        {"premium", 1.5},
        {"combo", 2.0},
        {"gold", 2.5}
    };

    // Loyalty program
    std::map<std::string, double> loyaltyDiscounts = {
        {"bronze", 0.95},   // 5% off
        {"silver", 0.90},   // 10% off
        {"gold", 0.85}      // 15% off
    };

    // Discount and surcharge factors
    const double WEEKDAY_DISCOUNT = 0.9;  // 10% off on weekdays
    const double WEEKEND_SURCHARGE = 1.2; // 20% extra on weekends
    const double EVENING_SURCHARGE = 1.15; // 15% extra for evening shows

    // Helper functions
    bool isValidShowtime(const std::string& showtime) const {
        return showtime == "morning" || showtime == "afternoon" || 
               showtime == "evening" || showtime == "night";
    }

    bool isWeekend(const std::string& day) const {
        return day == "saturday" || day == "sunday";
    }

    bool isValidSeatType(const std::string& seatType) const {
        return SEAT_TYPE_PRICES.find(seatType) != SEAT_TYPE_PRICES.end();
    }

    bool isValidLoyaltyCard(const std::string& loyaltyCard) const {
        return loyaltyDiscounts.find(loyaltyCard) != loyaltyDiscounts.end();
    }

public:
    // Calculate ticket price with comprehensive pricing
    double calculateTicketPrice(
        const std::string& ageGroup, 
        const std::string& day, 
        const std::string& showtime,
        const std::string& seatType,
        const std::string& loyaltyCard = "none"
    ) {
        // Validate inputs
        if (ageGroup != "adult" && ageGroup != "child" && ageGroup != "senior") {
            std::cerr << "Invalid age group!" << std::endl;
            return -1;
        }

        if (!isValidShowtime(showtime)) {
            std::cerr << "Invalid showtime!" << std::endl;
            return -1;
        }

        if (!isValidSeatType(seatType)) {
            std::cerr << "Invalid seat type!" << std::endl;
            return -1;
        }

        if (loyaltyCard != "none" && !isValidLoyaltyCard(loyaltyCard)) {
            std::cerr << "Invalid loyalty card!" << std::endl;
            return -1;
        }

        // Start with base price based on age group
        double ticketPrice;
        if (ageGroup == "adult") {
            ticketPrice = BASE_ADULT_PRICE;
        } else if (ageGroup == "child") {
            ticketPrice = BASE_CHILD_PRICE;
        } else {
            ticketPrice = BASE_SENIOR_PRICE;
        }

        // Apply seat type modifier
        ticketPrice *= SEAT_TYPE_PRICES.at(seatType);

        // Apply weekend surcharge or weekday discount
        if (isWeekend(day)) {
            ticketPrice *= WEEKEND_SURCHARGE;
        } else {
            ticketPrice *= WEEKDAY_DISCOUNT;
        }

        // Apply evening surcharge
        if (showtime == "evening" || showtime == "night") {
            ticketPrice *= EVENING_SURCHARGE;
        }

        // Apply loyalty card discount
        if (loyaltyCard != "none") {
            ticketPrice *= loyaltyDiscounts[loyaltyCard];
        }

        return ticketPrice;
    }

    // Display comprehensive price breakdown
    void displayPriceBreakdown(
        const std::string& ageGroup, 
        const std::string& day, 
        const std::string& showtime,
        const std::string& seatType,
        const std::string& loyaltyCard = "none"
    ) {
        double price = calculateTicketPrice(ageGroup, day, showtime, seatType, loyaltyCard);
        
        if (price > 0) {
            std::cout << "\n--- Movie Ticket Price Breakdown ---" << std::endl;
            std::cout << "Age Group: " << ageGroup << std::endl;
            std::cout << "Day: " << day << std::endl;
            std::cout << "Showtime: " << showtime << std::endl;
            std::cout << "Seat Type: " << seatType << std::endl;
            
            if (loyaltyCard != "none") {
                std::cout << "Loyalty Card: " << loyaltyCard << std::endl;
            }
            
            std::cout << "Total Ticket Price: $" 
                      << std::fixed << std::setprecision(2) << price << std::endl;
        }
    }

    // Upgrade to Gold Membership
    void upgradeToGoldMembership() {
        std::cout << "\n--- Gold Membership Upgrade ---" << std::endl;
        std::cout << "Benefits:" << std::endl;
        std::cout << "- 15% off all ticket prices" << std::endl;
        std::cout << "- Free seat upgrades" << std::endl;
        std::cout << "- Priority booking" << std::endl;
        std::cout << "- Complimentary snacks" << std::endl;
        
        char choice;
        std::cout << "\nWould you like to upgrade to Gold Membership? (y/n): ";
        std::cin >> choice;

        if (choice == 'y' || choice == 'Y') {
            std::cout << "Congratulations! You are now a Gold Member!" << std::endl;
        }
    }
};

int main() {
    MovieTicketCalculator calculator;

    // Example ticket price calculations with seat types and loyalty cards
    std::vector<std::tuple<std::string, std::string, std::string, std::string, std::string>> testCases = {
        {"adult", "monday", "afternoon", "standard", "none"},
        {"child", "saturday", "evening", "premium", "bronze"},
        {"senior", "sunday", "morning", "combo", "silver"},
        {"adult", "wednesday", "night", "gold", "gold"}
    };

    // Calculate and display prices for test cases
    for (const auto& testCase : testCases) {
        calculator.displayPriceBreakdown(
            std::get<0>(testCase), 
            std::get<1>(testCase), 
            std::get<2>(testCase),
            std::get<3>(testCase),
            std::get<4>(testCase)
        );
    }

    // Interactive mode
    char choice;
    std::cout << "\nWould you like to calculate a custom ticket price? (y/n): ";
    std::cin >> choice;

    if (choice == 'y' || choice == 'Y') {
        std::string ageGroup, day, showtime, seatType, loyaltyCard;

        std::cout << "Enter age group (adult/child/senior): ";
        std::cin >> ageGroup;

        std::cout << "Enter day of week (lowercase): ";
        std::cin >> day;

        std::cout << "Enter showtime (morning/afternoon/evening/night): ";
        std::cin >> showtime;

        std::cout << "Enter seat type (standard/premium/combo/gold): ";
        std::cin >> seatType;

        std::cout << "Do you have a loyalty card? (y/n): ";
        std::cin >> choice;

        if (choice == 'y' || choice == 'Y') {
            std::cout << "Enter loyalty card type (bronze/silver/gold): ";
            std::cin >> loyaltyCard;
        } else {
            loyaltyCard = "none";
        }

        calculator.displayPriceBreakdown(ageGroup, day, showtime, seatType, loyaltyCard);
    }

    // Gold Membership Upgrade Option
    std::cout << "\nInterested in our Gold Membership? ";
    calculator.upgradeToGoldMembership();

    return 0;
}