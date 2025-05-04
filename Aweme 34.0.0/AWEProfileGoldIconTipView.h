@interface AWEProfileGoldIconTipView : UIView
@property (nonatomic) UIView bgView;
@property (nonatomic) UIImageView iconView;
@property (nonatomic) UILabel label;
@property (nonatomic) q goldNum;
- (void)setGoldNum:;
- (long long)goldNum;
- (void)configWithGoldNum:;
- (void)setLabel:;
- (id)initWithFrame:;
- (id)iconView;
- (id)label;
- (void)setIconView:;
- (void)setHidden:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)bgView;
- (void)setBgView:;
- (void)setupUI;
@end
