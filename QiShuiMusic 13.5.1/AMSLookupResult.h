@interface AMSLookupResult : AMSURLResult
@property (nonatomic) NSDate expirationDate;
@property (nonatomic) NSArray allItems;
- (id)allItems;
- (void)setExpirationDate:;
- (id)expirationDate;
- (id)itemForKey:;
- (id)valueForProperty:;
- (void).cxx_destruct;
- (id)appStoreURLWithReason:initialIndex:;
- (void)_enumerateItemsWithBlock:;
- (id)initWithResult:dictionary:;
@end
