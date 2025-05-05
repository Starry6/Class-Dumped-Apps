@interface AWEIMGroupDeleteInactiveMemberListViewController : AWEIMGroupInactiveMemberListViewController
@property (nonatomic) NSMutableArray selectedArrayM;
@property (nonatomic) IESIMUILoadingView loadingView;
- (void)updateNaviTitle;
- (BOOL)canShowGroupAdmin;
- (BOOL)canShowGroupOwner;
- (BOOL)canShowInactiveEntry;
- (BOOL)canShowSortingSwitch;
- (void)deleteMember;
- (void)didSelectListModel:indexPath:;
- (BOOL)isMultiselectMode;
- (BOOL)isSelectedWithModel:;
- (void)p_didTapDelete;
- (id)selectedArrayM;
- (void)setSelectedArrayM:;
- (BOOL)shouldAssignDefaultSortingType;
- (BOOL)shouldHideSearchBar;
- (void)updateMultiselectCount:;
- (void).cxx_destruct;
- (id)loadingView;
- (void)setLoadingView:;
@end
