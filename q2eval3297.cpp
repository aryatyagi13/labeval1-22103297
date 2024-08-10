#include <bits/stdc++.h>

int main() {
    std::string paragraph;
    std::unordered_map<char, int> frequency;

    // Prompt the user for input
    std::cout << "Enter a paragraph: ";
    std::getline(std::cin, paragraph);

    // Count the frequency of each alphanumeric character
    for (char c : paragraph) {
        if (std::isalnum(static_cast<unsigned char>(c))) {
            c = std::tolower(static_cast<unsigned char>(c));  // Convert to lowercase
            frequency[c]++;
        }
    }

    // Print the frequencies
    std::cout << "Character frequencies:\n";
    for (const auto& pair : frequency) {
        std::cout << pair.first << ": " << pair.second << '\n';
    }

    return 0;
}
