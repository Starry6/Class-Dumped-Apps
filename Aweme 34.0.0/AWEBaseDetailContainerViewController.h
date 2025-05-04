@interface AWEBaseDetailContainerViewController : AWEBaseListViewController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)aweui_emptyPagePrimaryButtonTapped:;
- (void)dismissLoadingView;
- (BOOL)enableMemoryOptimizeWithNunki;
- (void)didReceiveMemeoryDangerLevelTopNotification;
- (void)_addNotifications;
- (void)setupContainerUI;
- (void)bindContainerViewModel;
- (void)addContainerNavigationView;
- (BOOL)prefersStatusBarHidden;
- (void)viewWillDisappear:;
- (id)init;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)viewWillAppear:;
- (void)showLoadingView;
- (void)setupCollectionView:;
@end
