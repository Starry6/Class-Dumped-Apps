@interface IESLiveRevenueInteractShareScoreBar : UIView
@property (nonatomic) double ratio;
@property (nonatomic) q leftNum;
@property (nonatomic) q rightNum;
@property (nonatomic) UIView contentView;
@property (nonatomic) UIView leftNumView;
@property (nonatomic) UIView rightNumView;
@property (nonatomic) IESLivePKScoreBarConfig config;
- (void)updateScoreView;
- (long long)leftNum;
- (void)setLeftNumView:;
- (void)initSubviews;
- (id)initWithDIContext:config:;
- (id)leftNumView;
- (long long)rightNum;
- (id)rightNumView;
- (void)setLeftNum:;
- (void)setLeftScore:;
- (void)setRightNum:;
- (void)setRightNumView:;
- (void)setRightScore:;
- (id)contentView;
- (void)layoutSubviews;
- (void)setConfig:;
- (void).cxx_destruct;
- (void)setContentView:;
- (id)config;
- (double)ratio;
- (void)setRatio:;
@end
