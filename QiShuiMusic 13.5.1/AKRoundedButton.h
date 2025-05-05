@interface AKRoundedButton : UIButton
- (void)setHighlighted:;
- (void)_updateColor;
- (id)_signInButtonEdgeInsets;
+ (id)roundedButton;
@end
