@interface AWEIMLongPressButton : UIButton
@property (nonatomic) double deltaTime;
- (void)invokePressTarget;
- (void)touchesCancelled:withEvent:;
- (void)touchesEnded:withEvent:;
- (void)touchesBegan:withEvent:;
- (double)delayTime;
- (double)deltaTime;
- (void)setDeltaTime:;
@end
