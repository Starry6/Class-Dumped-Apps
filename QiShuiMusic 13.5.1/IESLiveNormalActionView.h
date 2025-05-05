@interface IESLiveNormalActionView : UIView
@property (nonatomic) IESLiveNormalActionViewConfig config;
@property (nonatomic) UILabel label;
- (void)layoutSubviews;
- (void)setConfig:;
- (id)initWithConfig:;
- (void)setLabel:;
- (id)label;
- (void).cxx_destruct;
- (void)onTap;
- (id)config;
- (void)setupUI;
+ (id)ctreateButtonWithConfig:;
@end
