@interface AWETeenRoundRectangleButton : UIButton
- (void)setImage:forState:;
- (id)initWithFrame:;
- (void)setEnabled:;
- (void)setContentAlpha:;
- (void)setHighlighted:;
+ (id)transparentButton;
+ (id)exitButton;
@end
