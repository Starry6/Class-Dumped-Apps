@interface AWESettingsTableViewController : AWESettingBaseViewController
@property (nonatomic) UIView topGapView;
@property (nonatomic) UILabel versionLabel;
@property (nonatomic) UIView userInfoView;
@property (nonatomic) q nextHighlightType;
@property (nonatomic) BOOL hasTrackSettingPageShow;
@property (nonatomic) UIView searchBgView;
@property (nonatomic) DUXSearchBar searchBar;
@property (nonatomic) UIViewController<AFDSettingSearchViewControllerProtocol> searchVC;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogin;
- (void)didFinishLogoutWithUid:;
- (void)didFinishUpdateAwemeUser;
- (BOOL)configWithRouterParamDict:;
- (BOOL)awe_shouldAutorotate;
- (unsigned long long)awe_supportedInterfaceOrientations;
- (void)setStatusBarBackgroundColor:;
- (void)backBtnClick:;
- (void)addNoti;
- (void)enterBasicModeIsLogin:;
- (void)setUserInfoView:;
- (id)versionLabel;
- (void)setVersionLabel:;
- (void)p_search:;
- (void)p_resetSearchVC;
- (id)searchVC;
- (void)setSearchVC:;
- (void)showUserInfo;
- (void)updateSettingsCell;
- (id)getCurrentVersionStr;
- (void)uidLabelTapped:;
- (void)didLabelTapped:;
- (void)_popSettingsViewController;
- (void)setTopGapView:;
- (id)topGapView;
- (void)setNextHighlightType:;
- (long long)nextHighlightType;
- (void)updateTableViewAfterSetTeenMode;
- (void)p_trackSettingShowIfNeeded;
- (BOOL)hasTrackSettingPageShow;
- (void)setHasTrackSettingPageShow:;
- (BOOL)needUpdateSectionData;
- (id)searchBgView;
- (void)p_exitSearch;
- (void)p_enterSearch;
- (void)setupSearchVC;
- (void)setSearchBgView:;
- (void)viewWillDisappear:;
- (id)searchBar;
- (id)init;
- (void)dealloc;
- (void)setSearchBar:;
- (BOOL)isSearching;
- (id)viewModel;
- (void)viewDidLoad;
- (void)setup;
- (void)scrollViewDidScroll:;
- (void)viewWillAppear:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (void)setupSearchBar;
- (id)versionString:;
- (unsigned long long)footerMargin;
- (id)userInfoView;
@end
