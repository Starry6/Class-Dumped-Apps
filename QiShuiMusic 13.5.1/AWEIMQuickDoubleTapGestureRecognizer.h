@interface AWEIMQuickDoubleTapGestureRecognizer : UITapGestureRecognizer
@property (nonatomic) BOOL firstTapped;
@property (nonatomic) double minimumIntervalBetweenClick;
- (void)setFirstTapped:;
- (void)setMinimumIntervalBetweenClick:;
- (BOOL)firstTapped;
- (double)minimumIntervalBetweenClick;
- (void)touchesBegan:withEvent:;
- (void)touchesEnded:withEvent:;
- (id)initWithTarget:action:;
- (void)touchesCancelled:withEvent:;
@end
