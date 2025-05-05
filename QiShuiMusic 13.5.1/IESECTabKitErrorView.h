@interface IESECTabKitErrorView : UIView
@property (nonatomic) UIButton retryBtn;
@property (nonatomic) @? refreshBlock;
- (id)retryBtn;
- (void)retryTapped;
- (void)setRetryBtn:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupUI;
- (void)setRefreshBlock:;
- (id)refreshBlock;
@end
