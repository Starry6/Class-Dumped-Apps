@interface AWEIMGroupDeleteInactiveMemberListViewController : AWEIMGroupInactiveMemberListViewController
@property (nonatomic) NSMutableArray selectedArrayM;
@property (nonatomic) UIView<IESIMLoadingViewProtocol> loadingView;
- (void)updateMultiselectCount:;
- (void)deleteMember;
- (id)selectedArrayM;
- (void)__trackDeleteMemberWithUserIDArray:blockListOn:shouldBlock:;
- (void)updateNaviTitle;
- (BOOL)canShowGroupOwner;
- (BOOL)canShowGroupAdmin;
- (BOOL)isMultiselectMode;
- (BOOL)canShowSortingSwitch;
- (BOOL)shouldAssignDefaultSortingType;
- (BOOL)canShowInactiveEntry;
- (BOOL)shouldHideSearchBar;
- (BOOL)isSelectedWithModel:;
- (void)didSelectListModel:indexPath:;
- (void)p_didTapDelete;
- (void)setSelectedArrayM:;
- (void)setLoadingView:;
- (id)loadingView;
- (void).cxx_destruct;
@end
