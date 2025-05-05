@interface Lottie.AnimatedControl : UIControl
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL highlighted;
@property (nonatomic) {CGSize=dd} intrinsicContentSize;
- (id)init;
- (BOOL)beginTrackingWithTouch:withEvent:;
- (id)intrinsicContentSize;
- (void)setSelected:;
- (id)initWithCoder:;
- (BOOL)isSelected;
- (BOOL)isHighlighted;
- (id)initWithFrame:;
- (void)setEnabled:;
- (void).cxx_destruct;
- (void)setHighlighted:;
- (void)cancelTrackingWithEvent:;
- (void)endTrackingWithTouch:withEvent:;
- (BOOL)continueTrackingWithTouch:withEvent:;
- (BOOL)isEnabled;
@end
