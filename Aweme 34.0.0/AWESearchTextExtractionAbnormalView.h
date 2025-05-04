@interface AWESearchTextExtractionAbnormalView : UIView
@property (nonatomic) UIButton retryButton;
@property (nonatomic) UIView placeholderLoadingView;
@property (nonatomic) AWEUILoadingView loadingView;
@property (nonatomic) UIView loadingContainer;
@property (nonatomic) q abnormalType;
@property (nonatomic) @? retryBlock;
- (id)loadingContainer;
- (void)setLoadingContainer:;
- (void)setLoadingViewHidden:;
- (id)placeholderLoadingView;
- (void)renderPlaceHolderLoadingView;
- (void)setAbnormalType:;
- (long long)abnormalType;
- (void)showAbnormalWithType:;
- (void)setPlaceholderLoadingView:;
- (id)init;
- (void)setLoadingView:;
- (id)loadingView;
- (void)retryAction;
- (void).cxx_destruct;
- (void)hidden;
- (void)setupUI;
- (void)setRetryButton:;
- (id)retryButton;
- (id)retryBlock;
- (void)setRetryBlock:;
@end
