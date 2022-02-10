#include <bitset>
#include <cstdint>
#include <iostream>

int main()
{
    constexpr std::uint8_t option_viewed{ 0x01 }; // 0000 0001
    constexpr std::uint8_t option_edited{ 0x02 }; // 0000 0010
    constexpr std::uint8_t option_favorited{ 0x04 }; // 0000 0100
    constexpr std::uint8_t option_shared{ 0x08 }; // 0000 1000
    constexpr std::uint8_t option_deleted{ 0x10 }; // 0001 0000

    std::uint8_t myArticleFlags{ option_favorited };

    std::cout << std::bitset<8>{myArticleFlags} << '\n';

    // to mark the article as viewed
    std::cout << std::bitset<8>{ (myArticleFlags |= option_viewed) } << '\n';
    
    // to check if the artcile was deleted or not
    std::cout << "The artcle was";
    ((myArticleFlags & option_deleted)?std::cout << " deleted":std::cout << " not deleted") << '\n';
    
    // to remove the article from favourite
    std::cout << std::bitset<8>{ (myArticleFlags &= ~option_favorited) } << '\n';

    return 0;
}