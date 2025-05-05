@interface UISwipeGestureRecognizer : UIGestureRecognizer
@property (nonatomic) double maximumDuration;
@property (nonatomic) Q numberOfTouchesRequired;
@property (nonatomic) Q direction;
- (unsigned long long)direction;
- (BOOL)_isGestureType:;
- (void)setDirection:;
- (void)dealloc;
- (void)touchesBegan:withEvent:;
- (void)_appendSubclassDescription:;
- (void)setNumberOfTouchesRequired:;
- (id)initWithCoder:;
- (id)locationOfTouch:inView:;
- (void)encodeWithCoder:;
- (unsigned long long)numberOfTouches;
- (double)maximumDuration;
- (id)locationInView:;
- (void).cxx_destruct;
- (void)setMaximumDuration:;
- (void)_resetGestureRecognizer;
- (void)touchesMoved:withEvent:;
- (void)touchesEnded:withEvent:;
- (unsigned long long)numberOfTouchesRequired;
- (id)initWithTarget:action:;
- (void)touchesCancelled:withEvent:;
+ (BOOL)supportsSecureCoding;
+ (BOOL)_shouldDefaultToTouches;
@end
