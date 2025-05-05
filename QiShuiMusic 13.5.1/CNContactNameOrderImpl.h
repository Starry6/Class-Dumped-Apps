@interface CNContactNameOrderImpl : NSObject
- (id)nameProperties;
- (id)phoneticNameProperties;
- (long long)nameOrder;
- (id)sortingNameProperties;
+ (id)defaultOrder;
+ (id)familyNameFirstOrder;
+ (id)defaultNewContactOrder;
+ (id)defaultSortOrder;
+ (id)orderForSortOrder:;
+ (id)givenNameFirstOrder;
@end
