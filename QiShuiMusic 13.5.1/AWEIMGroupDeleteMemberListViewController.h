@interface AWEIMGroupDeleteMemberListViewController : AWEIMGroupMemberListViewController
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
- (void)updateMultiselectCount:;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)loadingView;
- (void)setLoadingView:;
@end
