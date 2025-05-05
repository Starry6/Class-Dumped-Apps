@interface CNAccountsAndGroupsStyle : NSObject
- (id)backgroundColor;
- (long long)buttonBehavior;
- (BOOL)isInset;
- (id)sectionConfigurationForLayoutEnvironment:withLeadingActionsProvider:withTrailingActionsProvider:hasHeader:;
- (id)parentCellConfigurationWithText:;
- (id)cellConfigurationUpdateHandler;
- (id)cellAccessoriesForItem:;
- (BOOL)shouldShowCellSelection;
- (id)parentCellAccessories;
- (id)cellAccessoriesForContextMenuPreviewForItem:;
+ (id)styleForTraitCollection:;
@end
