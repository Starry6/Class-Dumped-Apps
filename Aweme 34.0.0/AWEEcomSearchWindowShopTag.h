@interface AWEEcomSearchWindowShopTag : UIView
@property (nonatomic) UIView bgView;
@property (nonatomic) UILabel leftLabel;
@property (nonatomic) UIView rightView;
@property (nonatomic) UILabel scoreLabel;
@property (nonatomic) UILabel levelLabel;
- (id)levelLabel;
- (void)setLevelLabel:;
- (id)initWithFrame:;
- (void)setData:;
- (void).cxx_destruct;
- (id)bgView;
- (id)rightView;
- (void)setBgView:;
- (void)setRightView:;
- (id)leftLabel;
- (void)setupViews;
- (id)scoreLabel;
- (void)setLeftLabel:;
- (void)setScoreLabel:;
@end
