@interface AWEVideoDeepQAVideoTopView : UIView
@property (nonatomic) UILabel countLabel;
@property (nonatomic) UILabel tipLable;
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) double tipLabelWidth;
- (void)setTipLable:;
- (double)tipLabelWidth;
- (id)tipLable;
- (void)setTipLabelWidth:;
- (void)configWithCount:;
- (id)init;
- (id)iconImageView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setIconImageView:;
- (void)setupUI;
- (id)countLabel;
- (void)setCountLabel:;
@end
