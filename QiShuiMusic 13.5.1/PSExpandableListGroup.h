@interface PSExpandableListGroup : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)specifiers;
- (void)reloadSpecifiers;
- (void)reloadSpecifier:;
- (void).cxx_destruct;
- (void)addSpecifiers:;
- (long long)_groupIndex;
- (id)spinnerSpecifier;
- (void)showAll;
- (id)initWithListController:groupSpecifier:;
- (id)initWithListController:groupSpecifierID:collapseAfterCount:;
- (void)removeAllSpecifiers;
- (id)showAllSpecifier;
@end
