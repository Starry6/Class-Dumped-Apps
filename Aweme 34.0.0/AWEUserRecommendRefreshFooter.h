@interface AWEUserRecommendRefreshFooter : AWERefreshFooter
@property (nonatomic) DUXLoadingParticleView loadingView;
@property (nonatomic) UILabel label;
@property (nonatomic) BOOL isFirstAppear;
@property (nonatomic) AWEUserRecommendTableViewManager tableViewManager;
- (void)placeSubviews;
- (id)scrollViewOriginalInset;
- (void)setIsFirstAppear:;
- (void)executeRefreshingCallback;
- (long long)mj_insetBResetedOffset;
- (id)tableViewManager;
- (void)setTableViewManager:;
- (void)setLabel:;
- (void)dealloc;
- (void)setLoadingView:;
- (void)prepare;
- (id)initWithFrame:;
- (void)applicationWillEnterForeground:;
- (id)loadingView;
- (id)label;
- (void)setHidden:;
- (void).cxx_destruct;
- (void)setState:;
- (BOOL)isFirstAppear;
@end
