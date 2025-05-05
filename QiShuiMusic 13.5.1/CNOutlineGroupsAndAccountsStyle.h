@interface CNOutlineGroupsAndAccountsStyle : CNAccountsAndGroupsStyle
- (id)backgroundColor;
- (long long)buttonBehavior;
- (BOOL)isInset;
- (id)sectionConfigurationForLayoutEnvironment:withLeadingActionsProvider:withTrailingActionsProvider:hasHeader:;
- (id)parentCellConfigurationWithText:;
- (id)cellConfigurationUpdateHandler;
@end
