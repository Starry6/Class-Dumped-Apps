@interface MFComposeTextColorButton : UIButton
@property (nonatomic) UIView colorView;
@property (nonatomic) UIView colorRingView;
@property (nonatomic) UIColor color;
- (void)layoutSubviews;
- (void)setColor:;
- (id)color;
- (void).cxx_destruct;
- (id)colorView;
- (void)setColorView:;
- (id)colorRingView;
- (void)setColorRingView:;
+ (id)buttonWithColor:;
@end
