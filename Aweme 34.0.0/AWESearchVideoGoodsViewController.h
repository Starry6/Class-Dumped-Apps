@interface AWESearchVideoGoodsViewController : UIViewController
@property (nonatomic) AWESearchPhotoSearchResultsViewController searchResultVC;
@property (nonatomic) AWEUILoadingView loadingView;
@property (nonatomic) NSDictionary extra;
- (BOOL)configWithRouterParamDict:;
- (void)setExtra:;
- (id)searchResultVC;
- (void)setSearchResultVC:;
- (void)searchVideoGoods;
- (id)init;
- (void)startLoading;
- (void)setLoadingView:;
- (void)viewDidLoad;
- (id)extra;
- (void)stopLoading;
- (id)loadingView;
- (long long)preferredStatusBarStyle;
- (void).cxx_destruct;
@end
