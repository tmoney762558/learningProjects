#include <fstrea>
#include <"ItemType.h">
ItemType::ItemType() {
  value = 0;
}
RelationType ItemType::ComaredTo(ItemType otherItem) const {
  if (value < otherItem.value) {
    return LESS;
  }
  else if (value > otherItem.value) {
    return GREATER;
  }
  else {
    return EQUAL;
  }

void 