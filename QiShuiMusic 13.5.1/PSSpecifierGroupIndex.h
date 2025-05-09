@interface PSSpecifierGroupIndex : NSObject
@property (nonatomic) NSArray specifiers;
@property (nonatomic) NSArray groupSpecifiers;
- (id)specifiers;
- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)initWithSpecifiers:;
- (id)_init;
- (id)copyWithZone:;
- (unsigned long long)indexOfGroup:;
- (unsigned long long)numberOfGroups;
- (id)indexPathForSpecifier:;
- (id)specifierAtIndexPath:;
- (BOOL)getGroup:row:ofSpecifier:;
- (BOOL)getGroup:row:ofSpecifierAtIndex:;
- (id)specifiersInGroup:;
- (void)performSpecifierUpdates:;
- (void)performSpecifierUpdatesUsingBlock:;
- (id)_initForCopyWithGroupIndex:;
- (void)_createGroupIndex;
- (id)_ungroupedPrefixSpecifiers;
- (void)reloadWithSpecifiers:;
- (void)performUpdateOperation:;
- (void)performUpdateOperation:forSpecifierUpdates:;
- (unsigned long long)numberOfRowsInGroupAtIndex:;
- (void)_manuallyFindSection:row:forSpecifierAtIndex:;
- (void)_getSection:row:forSpecifierAtIndex:forInsertion:;
- (void)_getSection:row:forSpecifierAtIndex:forInsertion:allowGroupSpecifiers:;
- (unsigned long long)_indexOfSpecifierInSection:row:forInsertion:;
- (unsigned long long)indexOfSpecifierAtIndexPath:;
- (unsigned long long)indexOfSpecifierAtIndexPath:forInsertion:;
- (id)indexPathForSpecifierAtIndex:;
- (id)indexPathForSpecifierAtIndex:forInsertion:;
- (id)indexPathForSpecifierWithID:;
- (BOOL)getGroup:row:ofSpecifierWithID:;
- (id)rangeOfSpecifiersInGroupAtGroupIndex:;
- (id)rangeOfSpecifiersInGroup:;
- (id)rangeOfSpecifiersInGroupWithID:;
- (id)specifiersInGroupAtGroupIndex:;
- (id)specifiersInGroupWithID:;
- (id)groupSpecifiers;
- (unsigned long long)groupIndexOfGroup:;
- (unsigned long long)groupIndexOfGroupWithID:;
- (unsigned long long)indexOfGroupAtGroupIndex:;
- (unsigned long long)indexOfGroupWithID:;
- (id)_groupSections;
- (id)_synthesizedSpecifiersFromGroupIndex;
- (void)_willPerformOperation:forSpecifierUpdates:;
- (void)_didPerformOperation:forSpecifierUpdates:;
- (id)_tabStringOfDepth:;
- (void)_appendDescriptionOfArray:toString:withTabLevel:;
+ (id)groupIndexWithSpecifiers:;
+ (BOOL)_wantsDebuggingCallbacks;
@end
