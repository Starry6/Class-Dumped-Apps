@interface AWEIMQuickDoubleTapGestureRecognizer : UITapGestureRecognizer
@property (nonatomic) BOOL firstTapped;
@property (nonatomic) double minimumIntervalBetweenClick;
- (BOOL)firstTapped;
- (void)setFirstTapped:;
- (double)minimumIntervalBetweenClick;
- (void)setMinimumIntervalBetweenClick:;
- (id)initWithTarget:action:;
- (void)touchesCancelled:withEvent:;
- (void)touchesEnded:withEvent:;
- (void)touchesBegan:withEvent:;
@end
