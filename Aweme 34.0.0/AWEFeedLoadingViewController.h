@interface AWEFeedLoadingViewController : AWEBaseController
@property (nonatomic) AWEUILoadingView loadingView;
@property (nonatomic) BOOL shouldShowLoadingView;
- (void)dismissLoadingView;
- (void)refreshCompletion:error:needAnimation:;
- (void)manualRefreshCompletionMethod;
- (void)beginInitialFetch;
- (void)initialFetchCompletion:error:;
- (void)handleConnectionChanged:;
- (void)handleNoNetworkDetectionResult:;
- (void)setLoadingView:;
- (void)viewDidLoad;
- (id)loadingView;
- (void).cxx_destruct;
- (void)viewDidAppear;
- (void)setShouldShowLoadingView:;
- (BOOL)shouldShowLoadingView;
@end
