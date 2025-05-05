@interface CJPaySwitch : UIControl
@property (nonatomic) UIView backgroundView;
@property (nonatomic) UIView spotView;
@property (nonatomic) BOOL on;
@property (nonatomic) UIColor onTintColor;
- (void)p_setupUI;
- (void)p_switch;
- (void)setSpotView:;
- (id)spotView;
- (id)backgroundView;
- (void)setOnTintColor:;
- (void)layoutSubviews;
- (BOOL)isOn;
- (void)setOn:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setBackgroundView:;
- (id)onTintColor;
@end
