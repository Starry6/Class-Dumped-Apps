@interface AWENearbyC2ContainerView : UIView
@property (nonatomic) double lastTouchTime;
@property (nonatomic) double checkInterval;
- (double)checkInterval;
- (void)setCheckInterval:;
- (id)initWithFrame:checkInterval:;
- (void)setLastTouchTime:;
- (double)lastTouchTime;
- (id)hitTest:withEvent:;
@end
