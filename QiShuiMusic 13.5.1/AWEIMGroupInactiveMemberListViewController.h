@interface AWEIMGroupInactiveMemberListViewController : AWEIMGroupMemberListViewController
- (void)updateNaviTitle;
- (BOOL)canShowGroupAdmin;
- (BOOL)canShowGroupOwner;
- (BOOL)canShowInactiveEntry;
- (BOOL)canShowSortingSwitch;
- (BOOL)isMultiselectMode;
- (BOOL)isSelectedWithModel:;
- (void)p_didTapDelete;
- (void)p_prepareData;
- (BOOL)shouldAssignDefaultSortingType;
- (BOOL)shouldHideSearchBar;
- (void)viewDidLoad;
@end
