@interface AWEPrivacySettingBaseViewController : AWESettingBaseViewController
@property (nonatomic) AWEUILoadingView loadingView;
@property (nonatomic) AWESettingBaseViewModel viewModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)useCardUIStyle;
- (BOOL)configWithRouterParamDict:;
- (void)viewModelStartsLoading:;
- (void)viewModelDidReload:;
- (void)viewModel:didInsertSections:;
- (void)viewModel:didDeleteSections:;
- (void)viewModel:didUpdateItemsAtIndexPaths:;
- (void)viewModel:didInsertItemsAtIndexPaths:;
- (void)viewModel:didDeleteItemsAtIndexPaths:;
- (void)viewModelBeginsUpdates:;
- (void)viewModelEndsUpdates:;
- (void)viewModelEndsLoading:;
- (void)tableView:willDisplayCell:forRowAtIndexPath:;
- (void)setLoadingView:;
- (id)viewModel;
- (void)viewDidLoad;
- (id)loadingView;
- (void)setViewModel:;
- (void).cxx_destruct;
@end
