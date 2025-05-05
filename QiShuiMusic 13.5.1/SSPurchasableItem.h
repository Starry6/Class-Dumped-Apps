@interface SSPurchasableItem : NSObject
- (void)dealloc;
- (long long)storeID;
- (long long)pid;
- (id)description;
- (BOOL)isHidden;
- (id)propertyValues;
- (id)datePurchased;
- (long long)accountUniqueIdentifier;
- (id)initWithPropertyValues:;
+ (id)databaseTable;
+ (id)sortByDatePurchasedKey;
+ (id)allPropertyKeys;
@end
