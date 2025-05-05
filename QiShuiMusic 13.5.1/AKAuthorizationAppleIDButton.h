@interface AKAuthorizationAppleIDButton : AKAuthorizationButton
@property (nonatomic) double cornerRadius;
- (void)_commonInit;
- (void)drawRect:;
- (unsigned long long)accessibilityTraits;
- (id)intrinsicContentSize;
- (void)layoutSubviews;
- (id)accessibilityLabel;
- (id)initWithCoder:;
- (id)initWithFrame:;
- (void)traitCollectionDidChange:;
- (void)encodeWithCoder:;
- (void)setCornerRadius:;
- (BOOL)isAccessibilityElement;
- (void)setEnabled:;
- (void).cxx_destruct;
- (void)setHighlighted:;
- (double)cornerRadius;
- (void)setButtonText:;
- (void)_createHighlightFilterIfNecessary;
- (id)initWithAuthorizationButtonType:authorizationButtonStyle:;
- (void)_drawRect:inView:;
- (void)_performAnimationToSetHighlighted:;
+ (double)defaultCornerRadius;
+ (Class)layerClass;
+ (id)buttonWithType:style:;
+ (long long)_buttonStyleForUIStyle;
@end
