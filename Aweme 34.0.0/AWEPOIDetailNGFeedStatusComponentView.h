@interface AWEPOIDetailNGFeedStatusComponentView : DitoComponentView
@property (nonatomic) AWEPOILoadingView loadingView;
@property (nonatomic) AWEPOIDetailNGFeedStatusComponentViewModel viewModel;
@property (nonatomic) AWEPOIDetailNGFeedStatusEmptyVC errorVC;
@property (nonatomic) DitoGeneralContainerPageContext generalContext;
- (void)updateViewModel:;
- (void)setupUIIfNeeded;
- (void)bindActionAndState;
- (void)hiddenErrorView;
- (id)generalContext;
- (void)updateWithLoadMoreState:;
- (id)errorVC;
- (void)tryShowErrorView;
- (void)retryLoadFeedsData;
- (void)setErrorVC:;
- (void)setGeneralContext:;
- (void)setLoadingView:;
- (id)viewModel;
- (id)loadingView;
- (void)setContext:;
- (void)setViewModel:;
- (void).cxx_destruct;
- (id)context;
- (void)showErrorView;
@end
