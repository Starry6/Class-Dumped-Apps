@interface AWEXTabHotSpotGuideView : UIView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel viewCountLabel;
@property (nonatomic) UIImageView iconView;
@property (nonatomic) NSDictionary logParams;
@property (nonatomic) double lastShowTime;
- (void)p_setupUI;
- (void)setLastShowTime:;
- (double)lastShowTime;
- (id)logParams;
- (void)setLogParams:;
- (void)resetLastShowTime;
- (id)viewCountLabel;
- (void)updateWithTitleText:viewCountText:logParams:;
- (void)markShowTime;
- (void)setViewCountLabel:;
- (id)initWithFrame:;
- (id)iconView;
- (void)setIconView:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
@end
