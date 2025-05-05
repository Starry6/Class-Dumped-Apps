@interface CoreDAVResourceTypeItem : CoreDAVItem
@property (nonatomic) CoreDAVItemWithNoChildren addressBook;
@property (nonatomic) CoreDAVItemWithNoChildren searchAddressBook;
@property (nonatomic) CoreDAVItemWithNoChildren shared;
@property (nonatomic) CoreDAVItemWithNoChildren principal;
@property (nonatomic) CoreDAVItemWithNoChildren collection;
@property (nonatomic) CoreDAVItemWithNoChildren unauthenticated;
@property (nonatomic) NSSet stringSet;
- (void)setUnauthenticated:;
- (id)shared;
- (id)collection;
- (void)write:;
- (void)setCollection:;
- (id)init;
- (id)stringSet;
- (void)setPrincipal:;
- (id)searchAddressBook;
- (id)principal;
- (id)addressBook;
- (BOOL)isTypeWithNameSpace:andName:;
- (void).cxx_destruct;
- (id)description;
- (void)setAddressBook:;
- (void)setSearchAddressBook:;
- (void)setShared:;
- (id)unauthenticated;
+ (id)copyParseRules;
@end
