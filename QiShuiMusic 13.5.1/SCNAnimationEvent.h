@interface SCNAnimationEvent : NSObject
- (void)setTime:;
- (id)init;
- (void)dealloc;
- (double)time;
- (void)setEventBlock:;
- (id)eventBlock;
+ (id)animationEventWithKeyTime:block:;
@end
