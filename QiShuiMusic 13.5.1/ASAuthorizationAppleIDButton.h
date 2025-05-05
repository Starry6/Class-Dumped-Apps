@interface ASAuthorizationAppleIDButton : UIControl
@property (nonatomic) double cornerRadius;
- (void)drawRect:;
- (unsigned long long)accessibilityTraits;
- (id)intrinsicContentSize;
- (void)layoutSubviews;
- (id)accessibilityLabel;
- (id)initWithCoder:;
- (id)initWithFrame:;
- (void)encodeWithCoder:;
- (void)setCornerRadius:;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (void)setHighlighted:;
- (double)cornerRadius;
- (void)_createHighlightFilterIfNecessary;
- (id)initWithAuthorizationButtonType:authorizationButtonStyle:;
- (void)_drawRect:inView:;
- (void)_performAnimationToSetHighlighted:;
- (long long)_ak_buttonType;
- (long long)_ak_buttonStyle;
+ (double)defaultCornerRadius;
+ (Class)layerClass;
+ (id)buttonWithType:style:;
@end
