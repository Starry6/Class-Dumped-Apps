@interface CSJLOTAnimatedControl : UIControl
@property (nonatomic) CSJLOTAnimationView animationView;
@property (nonatomic) CSJLOTComposition animationComp;
- (id)animationComp;
- (void)checkStateChangedAndUpdate:;
- (void)setAnimationComp:;
- (void)setLayerName:forState:;
- (void)_commonInit;
- (unsigned long long)accessibilityTraits;
- (void)touchesBegan:withEvent:;
- (id)intrinsicContentSize;
- (void)layoutSubviews;
- (void)setSelected:;
- (id)initWithCoder:;
- (id)initWithFrame:;
- (BOOL)isAccessibilityElement;
- (void)setEnabled:;
- (void).cxx_destruct;
- (void)setHighlighted:;
- (void)touchesMoved:withEvent:;
- (void)touchesEnded:withEvent:;
- (void)touchesCancelled:withEvent:;
- (id)animationView;
@end
