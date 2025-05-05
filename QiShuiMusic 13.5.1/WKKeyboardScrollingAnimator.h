@interface WKKeyboardScrollingAnimator : NSObject
- (void)handleKeyEvent:;
- (BOOL)beginWithEvent:;
- (BOOL)scrollTriggeringKeyIsPressed;
- (void)displayLinkFired:;
- (id)init;
- (void)startDisplayLinkIfNeeded;
- (void)stopDisplayLink;
- (void)willStartInteractiveScroll;
- (id)keyboardScrollForEvent:;
- (id)parameters;
- (void).cxx_destruct;
- (id)initWithScrollable:;
- (void)invalidate;
- (id).cxx_construct;
- (void)stopAnimatedScroll;
@end
