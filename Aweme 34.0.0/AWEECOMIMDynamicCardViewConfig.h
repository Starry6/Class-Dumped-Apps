@interface AWEECOMIMDynamicCardViewConfig : NSObject
@property (nonatomic) {CGSize=dd} viewSize;
@property (nonatomic) UIView<AWEECOMIMDynamicCardLoadingViewProtocol> loadingView;
@property (nonatomic) UIView failedView;
@property (nonatomic) @? onDidCreateCardView;
@property (nonatomic) @? onDidBindCardData;
@property (nonatomic) @? onStartLoading;
@property (nonatomic) @? onStopLoading;
- (id)failedView;
- (void)setFailedView:;
- (id)onStartLoading;
- (id)onStopLoading;
- (id)onDidCreateCardView;
- (id)onDidBindCardData;
- (void)setOnDidCreateCardView:;
- (void)setOnDidBindCardData:;
- (void)setOnStartLoading:;
- (void)setOnStopLoading:;
- (id)viewSize;
- (void)setLoadingView:;
- (id)loadingView;
- (void).cxx_destruct;
- (void)setViewSize:;
@end
