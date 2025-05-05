@interface UIVariableDelayLoupeGesture : UILongPressGestureRecognizer
@property (nonatomic) UIResponder<UITextInput> textView;
@property (nonatomic) BOOL isLongPress;
- (BOOL)isLongPress;
- (id)textView;
- (BOOL)_isGestureType:;
- (BOOL)shouldUseLegacyBehavior;
- (void)startTimer;
- (BOOL)_allowsForShortDelay;
- (BOOL)isWithinRecentTap;
- (void)setTextView:;
- (BOOL)_tracksPointerTouch;
- (void).cxx_destruct;
- (BOOL)isCloseToCaret;
- (id)initWithTarget:action:;
- (void)invalidate;
@end
