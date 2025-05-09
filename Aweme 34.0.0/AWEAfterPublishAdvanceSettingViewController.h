@interface AWEAfterPublishAdvanceSettingViewController : UIViewController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) UIButton backButton;
@property (nonatomic) UIView headerView;
@property (nonatomic) UIView headerBar;
@property (nonatomic) UIView navigationView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) <AFDModalViewHelperProtocol> helper;
@property (nonatomic) UITableView tableView;
@property (nonatomic) AWEAfterPublishAdvanceSettingDataController dataController;
@property (nonatomic) UIViewController sourceViewController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) @? confirmDuetPermissonBlock;
@property (nonatomic) @? confirmCommentPermissonBlock;
@property (nonatomic) @? confirmCommentProtectionModeBlock;
@property (nonatomic) @? confirmDanmakuPermissonBlock;
@property (nonatomic) @? confirmXiguaPrivacyTypeBlock;
- (BOOL)wantsDimmingTransitionBackground;
- (void)transitionBackgroundViewTapped:;
- (void)setDataController:;
- (id)initWithDataController:;
- (id)headerBar;
- (void)setHeaderBar:;
- (void)p_setupViews;
- (id)navigationView;
- (void)setNavigationView:;
- (void)registerTableViewCellReuse;
- (id)identifierForCardUIStyleWithOriginalID:;
- (id)confirmDuetPermissonBlock;
- (id)confirmCommentPermissonBlock;
- (id)confirmCommentProtectionModeBlock;
- (id)confirmDanmakuPermissonBlock;
- (id)confirmXiguaPrivacyTypeBlock;
- (void)setConfirmDuetPermissonBlock:;
- (void)setConfirmCommentPermissonBlock:;
- (void)setConfirmCommentProtectionModeBlock:;
- (void)setConfirmDanmakuPermissonBlock:;
- (void)setConfirmXiguaPrivacyTypeBlock:;
- (void)cellDidClickAtIndexPath:item:;
- (id)backButton;
- (id)tableView:cellForRowAtIndexPath:;
- (long long)tableView:numberOfRowsInSection:;
- (void)viewDidLayoutSubviews;
- (void)tableView:didSelectRowAtIndexPath:;
- (void)setTableView:;
- (void)viewDidLoad;
- (void)setBackButton:;
- (id)tableView;
- (id)sourceViewController;
- (id)headerView;
- (double)contentHeight;
- (void)setSourceViewController:;
- (void)setTitleLabel:;
- (void)viewWillAppear:;
- (void)setHelper:;
- (void).cxx_destruct;
- (double)tableView:heightForRowAtIndexPath:;
- (id)helper;
- (id)titleLabel;
- (void)setHeaderView:;
- (id)dataController;
- (void)backButtonTapped:;
- (double)bottomOffset;
@end
