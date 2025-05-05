@interface WKSyntheticTapGestureRecognizer : UITapGestureRecognizer
@property (nonatomic) UIWebTouchEventsGestureRecognizer supportingWebTouchEventsGestureRecognizer;
@property (nonatomic) NSNumber lastActiveTouchIdentifier;
@property (nonatomic) UIScrollView lastTouchedScrollView;
- (void)touchesBegan:withEvent:;
- (void)setResetTarget:action:;
- (void)setState:;
- (void)setGestureFailedTarget:action:;
- (void)setGestureIdentifiedTarget:action:;
- (void).cxx_destruct;
- (void)reset;
- (id)lastActiveTouchIdentifier;
- (void)setSupportingWebTouchEventsGestureRecognizer:;
- (id)supportingWebTouchEventsGestureRecognizer;
- (id)lastTouchedScrollView;
- (void)touchesEnded:withEvent:;
- (id).cxx_construct;
@end
