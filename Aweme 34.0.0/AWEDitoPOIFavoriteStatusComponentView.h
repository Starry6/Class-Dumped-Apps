@interface AWEDitoPOIFavoriteStatusComponentView : DitoComponentView
@property (nonatomic) AWEDitoPOIFavoriteStatusComponentViewModel viewModel;
@property (nonatomic) AWEPOILoadingView loadingView;
@property (nonatomic) AWEDitoPOIFavoriteStatusErrorVC errorVC;
@property (nonatomic) AWEDitoPOIFavoritePageContext context;
- (void)updateViewModel:;
- (void)bindActionAndState;
- (void)hiddenErrorView;
- (void)updateWithLoadMoreState:;
- (id)errorVC;
- (void)tryShowErrorView;
- (void)retryLoadFeedsData;
- (void)setErrorVC:;
- (void)setLoadingView:;
- (id)viewModel;
- (id)initWithFrame:;
- (id)loadingView;
- (void)setViewModel:;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (void).cxx_destruct;
- (void)setupUI;
- (void)showErrorView;
@end
