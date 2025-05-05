@interface CSJLOTAnimatedSwitch : CSJLOTAnimatedControl
@property (nonatomic) BOOL on;
@property (nonatomic) BOOL interactiveGesture;
- (void)_toggleAndSendActions;
- (BOOL)interactiveGesture;
- (void)setAnimationComp:;
- (void)setInteractiveGesture:;
- (void)setProgressRangeForOffState:toProgress:;
- (void)setProgressRangeForOnState:toProgress:;
- (BOOL)beginTrackingWithTouch:withEvent:;
- (BOOL)isOn;
- (void)setOn:;
- (id)initWithFrame:;
- (void)setOn:animated:;
- (void)endTrackingWithTouch:withEvent:;
- (BOOL)continueTrackingWithTouch:withEvent:;
- (id)accessibilityValue;
- (void)_toggle;
+ (id)switchNamed:;
+ (id)switchNamed:inBundle:;
@end
