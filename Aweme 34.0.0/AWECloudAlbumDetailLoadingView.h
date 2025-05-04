@interface AWECloudAlbumDetailLoadingView : UIView
@property (nonatomic) UIView<ACCLoadingViewProtocol> loadingView;
@property (nonatomic) AWECloudAlbumDetailErrorView errorView;
@property (nonatomic) @? retryBlock;
- (void)setLoadingView:;
- (id)initWithFrame:;
- (void)setup;
- (id)loadingView;
- (void)retryAction;
- (void).cxx_destruct;
- (void)setLoading:;
- (id)errorView;
- (void)setErrorView:;
- (id)retryBlock;
- (void)setRetryBlock:;
@end
