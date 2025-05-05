@interface UIDigitizerLongPressGestureRecognizer : UIGestureRecognizer
@property (nonatomic) double minimumPressDuration;
@property (nonatomic) {CGPoint=dd} digitizerLocation;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setAllowedTouchTypes:;
- (void)pressesCancelled:withEvent:;
- (void)touchesBegan:withEvent:;
- (double)minimumPressDuration;
- (void)pressesChanged:withEvent:;
- (void)pressesEnded:withEvent:;
- (void)setMinimumPressDuration:;
- (void)pressesBegan:withEvent:;
- (void).cxx_destruct;
- (void)reset;
- (void)setAllowedPressTypes:;
- (void)touchesMoved:withEvent:;
- (void)touchesEnded:withEvent:;
- (id)initWithTarget:action:;
- (void)touchesCancelled:withEvent:;
- (id)digitizerLocation;
- (void)pressesEndedSuccessfully:;
- (void)touchesBeganSuccessfully:;
- (void)pressesHeldForMinimum:;
- (void)pressesNotHeldLongEnough:;
- (void)pressesHeldOverMaximum:;
@end
