@interface AWEBarPanelDetailBottomBar : UIControl
@property (nonatomic) AWEBarPanelDetailBottomUIConfig config;
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel contentLabel;
@property (nonatomic) UILabel animatedLabel;
@property (nonatomic) UIImageView arrowImageView;
- (void)configureUI;
- (id)initWithFrame:config:;
- (void)setConfig:;
- (id)config;
- (id)iconImageView;
- (void).cxx_destruct;
- (void)setIconImageView:;
- (id)contentLabel;
- (void)setContentLabel:;
- (id)arrowImageView;
- (void)setArrowImageView:;
- (id)animatedLabel;
- (void)setAnimatedLabel:;
@end
