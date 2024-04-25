#include <iostream>
#include <vector>
#include <unordered_map>

int main()
{
    // 1. Basic usage with primitive types
    auto a = 5;
    auto b = 3.14;

    // 2. Usage with strings
    auto str = std::string("Hello, Auto!");

    // 3. Usage with container iterators
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    auto it = numbers.begin();

    // 4. Usage with container elements
    auto first_element = numbers[0];

    // 5. Usage with complex container types
    std::unordered_map<std::string, int> my_map = {{"a", 1}, {"b", 2}};
    auto map_it = my_map.begin();

    // 6. Usage with lambda functions
    auto add = [](int x, int y)
    { return x + y; };

    // 7. Usage with lambda capture
    int multiplier = 2;
    auto multiply = [multiplier](int x)
    { return x * multiplier; };

    // 8. Usage with template functions
    auto square = [](auto x)
    { return x * x; };

    // 9. Usage with complex type deducing
    auto complex_calculation_result = 2 * 3.14 / 7;

    // 10. Usage with range-based for loop
    for (auto num : numbers)
    {
        std::cout << num << " ";
    }

    // 11. Usage with function return type
    auto get_pi();
    {
        return 3.14;
    }

    // 12. Usage with type casting
    auto pi_int = static_cast<int>(3.14);

    // 13. Usage with type deduction in template classes
    std::vector<std::pair<int, std::string>> pairs = {{1, "one"}, {2, "two"}};
    auto pair_it = pairs.begin();

    // 14. Usage with complex type names
    typedef std::vector<std::pair<int, std::string>> PairVector;
    auto complex_type_var = PairVector();

    // 15. Usage with iterators of complex types
    auto map_begin = my_map.begin();

    // 16. Usage with pointer types
    auto ptr = new int(10);

    // 17. Usage with nullptr
    auto null_ptr = nullptr;

    // 18. Usage with boolean expressions
    auto is_true = (1 == 1);

    // 19. Usage with long type names
    using LongTypeName = std::vector<std::pair<int, std::vector<std::string>>>;
    auto long_type_var = LongTypeName();

    // 20. Usage with decltype
    decltype(a + b) sum = a + b;

    std::cout << "\n";
    return 0;
}