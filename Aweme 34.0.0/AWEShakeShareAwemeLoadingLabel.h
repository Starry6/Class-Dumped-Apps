@interface AWEShakeShareAwemeLoadingLabel : UILabel
@property (nonatomic) DUXLoadingCircleView loadingView;
@property (nonatomic) BOOL loading;
- (void)initView;
- (void)drawTextInRect:;
- (id)intrinsicContentSize;
- (void)setLoadingView:;
- (id)initWithFrame:;
- (id)loadingView;
- (void)setTextColor:;
- (id)sizeThatFits:;
- (void).cxx_destruct;
- (BOOL)loading;
- (void)setLoading:;
@end
