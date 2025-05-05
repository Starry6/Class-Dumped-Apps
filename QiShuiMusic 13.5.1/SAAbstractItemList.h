@interface SAAbstractItemList : SADomainObject
@property (nonatomic) NSArray domainObjects;
@property (nonatomic) NSNumber selectedIndex;
- (id)groupIdentifier;
- (id)selectedIndex;
- (id)encodedClassName;
- (void)setSelectedIndex:;
- (void)setDomainObjects:;
- (id)domainObjects;
+ (id)abstractItemList;
+ (id)abstractItemListWithDictionary:context:;
@end
