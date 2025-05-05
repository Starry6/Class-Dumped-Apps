@interface UIDigitizerTapGestureRecognizer : UIGestureRecognizer
@property (nonatomic) double maximumPressDuration;
@property (nonatomic) {CGPoint=dd} digitizerLocation;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setAllowedTouchTypes:;
- (void)pressesCancelled:withEvent:;
- (void)touchesBegan:withEvent:;
- (void)pressesChanged:withEvent:;
- (void)pressesEnded:withEvent:;
- (void)pressesBegan:withEvent:;
- (void).cxx_destruct;
- (void)reset;
- (void)setAllowedPressTypes:;
- (void)touchesMoved:withEvent:;
- (void)touchesEnded:withEvent:;
- (id)initWithTarget:action:;
- (void)touchesCancelled:withEvent:;
- (id)digitizerLocation;
- (double)maximumPressDuration;
- (void)setMaximumPressDuration:;
- (void)pressesEndedSuccessfully:;
- (void)touchesBeganSuccessfully:;
- (void)pressesHeldForMinimum:;
- (void)pressesNotHeldLongEnough:;
- (void)pressesHeldOverMaximum:;
@end
