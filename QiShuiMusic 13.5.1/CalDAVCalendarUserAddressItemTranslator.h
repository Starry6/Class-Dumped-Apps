@interface CalDAVCalendarUserAddressItemTranslator : NSObject
+ (id)calDAVUserAddressForItem:;
+ (id)_preferredAttributeForItem:;
+ (id)userAddressesForAddressSetItem:;
+ (id)calDAVUserAddressForItem:prependMailTo:;
@end
