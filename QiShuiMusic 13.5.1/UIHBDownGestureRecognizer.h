@interface UIHBDownGestureRecognizer : UIGestureRecognizer
@property (nonatomic) double maximumIntervalBetweenPresses;
- (void)pressesCancelled:withEvent:;
- (void)_fail;
- (void)pressesChanged:withEvent:;
- (void)pressesEnded:withEvent:;
- (void)pressesBegan:withEvent:;
- (void).cxx_destruct;
- (void)_succeed;
- (void)setAllowedPressTypes:;
- (void)_resetGestureRecognizer;
- (id)initWithTarget:action:;
- (void)_processPresses:;
- (BOOL)_allRequiredButtonsDown;
- (double)maximumIntervalBetweenPresses;
- (void)setMaximumIntervalBetweenPresses:;
@end
