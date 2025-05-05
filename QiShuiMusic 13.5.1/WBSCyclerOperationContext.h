@interface WBSCyclerOperationContext : NSObject
@property (nonatomic) <WBSCyclerTestTarget> testTarget;
@property (nonatomic) WBSCyclerItemListRepresentation topLevelItem;
@property (nonatomic) NSString titlePrefix;
- (void).cxx_destruct;
- (void)setTitlePrefix:;
- (id)filterOutItemsWithoutTitlePrefixInList:;
- (id)randomItemTitle;
- (id)randomDescendantOfList:enforcingTitlePrefixValidity:passingTest:;
- (id)randomValidStrictDescendantOfList:;
- (id)randomValidStrictDescendantOfTopLevelItem;
- (id)randomValidStrictListDescendantOfList:;
- (id)randomValidStrictListDescendantOfTopLevelItem;
- (BOOL)_isItemPrefixed:;
- (BOOL)_isItemValid:;
- (id)_buildDictionaryOfDescendantIdentifiersToParentIdentifiersFromList:;
- (id)_copyItem:filteringWithIdentifierWhitelist:;
- (id)testTarget;
- (void)setTestTarget:;
- (id)topLevelItem;
- (void)setTopLevelItem:;
- (id)titlePrefix;
@end
