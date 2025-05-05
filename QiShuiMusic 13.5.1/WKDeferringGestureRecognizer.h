@interface WKDeferringGestureRecognizer : UIGestureRecognizer
@property (nonatomic) BOOL immediatelyFailsAfterTouchEnd;
- (void)setImmediatelyFailsAfterTouchEnd:;
- (BOOL)canBePreventedByGestureRecognizer:;
- (void)touchesBegan:withEvent:;
- (void)setState:;
- (BOOL)immediatelyFailsAfterTouchEnd;
- (BOOL)shouldDeferGestureRecognizer:;
- (id)initWithDeferringGestureDelegate:;
- (void).cxx_destruct;
- (void)endDeferral:;
- (void)touchesEnded:withEvent:;
- (id).cxx_construct;
- (void)touchesCancelled:withEvent:;
@end
