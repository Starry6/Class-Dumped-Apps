@interface UIToolbarTextButton : UIToolbarButton
- (void)dealloc;
- (void)layoutSubviews;
- (void)_UIAppearance_setTitleTextAttributes:forState:;
- (void)_setTitleTextAttributes:forState:;
- (id)alignmentRectInsets;
- (id)sizeThatFits:;
- (void)_setPressed:;
- (id)initWithTitle:pressedTitle:withFont:withBarStyle:withStyle:withTitleWidth:possibleTitles:withToolbarTintColor:;
@end
