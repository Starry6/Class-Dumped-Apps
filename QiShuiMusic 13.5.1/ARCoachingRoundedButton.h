@interface ARCoachingRoundedButton : ARCoachingButton
- (id)initWithTitle:buttonStyle:textStyle:controlStyle:adjustsFontForContentSizeCategory:;
- (id)initWithTitle:buttonStyle:textStyle:controlStyle:cornerRadius:;
- (id)initWithTitle:buttonStyle:textStyle:controlStyle:cornerRadius:adjustsFontForContentSizeCategory:;
- (void)_setupViewWithCornerRadius:;
@end
