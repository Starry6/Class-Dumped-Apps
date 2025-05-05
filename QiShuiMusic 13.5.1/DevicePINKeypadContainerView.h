@interface DevicePINKeypadContainerView : UIView
@property (nonatomic) DevicePINKeypad keypad;
@property (nonatomic) UIVisualEffectView backdropView;
@property (nonatomic) double iPadKeypadHeight;
- (id)backdropView;
- (void)layoutSubviews;
- (void)setBackdropView:;
- (id)sizeThatFits:;
- (void).cxx_destruct;
- (id)initWithKeypad:;
- (id)keypad;
- (void)setKeypad:;
- (double)iPadKeypadHeight;
- (void)setIPadKeypadHeight:;
@end
