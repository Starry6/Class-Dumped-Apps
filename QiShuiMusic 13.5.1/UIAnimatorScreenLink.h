@interface UIAnimatorScreenLink : NSObject
@property (nonatomic) S animationCount;
- (void)dealloc;
- (unsigned short)animationCount;
- (void)setAnimationCount:;
- (void)onDisplayLink:;
- (void).cxx_destruct;
- (void)invalidate;
+ (id)startTimerWithScreen:action:;
@end
