@interface CNAccountsAndGroupsSection : NSObject
@property (nonatomic) @? titleProvider;
@property (nonatomic) NSString title;
@property (nonatomic) NSArray items;
@property (nonatomic) NSString identifier;
@property (nonatomic) BOOL isAllContactsGlobalSection;
- (id)items;
- (id)identifier;
- (void)setTitle:;
- (unsigned long long)hash;
- (void)setItems:;
- (id)title;
- (void).cxx_destruct;
- (void)setIdentifier:;
- (BOOL)isEqual:;
- (BOOL)isAllContactsGlobalSection;
- (void)setIsAllContactsGlobalSection:;
- (id)titleProvider;
- (void)setTitleProvider:;
@end
