@interface AWEIMMangoRedPacketIncentiveTipView : UIView
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel textLabel;
@property (nonatomic) UIView bgColorView;
- (void)p_setupUI;
- (void)renderWithViewConfig:;
- (id)p_textFont;
- (id)textLabel;
- (id)initWithFrame:;
- (id)iconImageView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setIconImageView:;
- (void)setTextLabel:;
- (void)setBgColorView:;
- (id)bgColorView;
@end
