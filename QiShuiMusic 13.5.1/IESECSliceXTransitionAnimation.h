@interface IESECSliceXTransitionAnimation : NSObject
@property (nonatomic) @? animationTask;
@property (nonatomic) Q transitionProperty;
@property (nonatomic) double transitionDuration;
@property (nonatomic) Q transitionTimingFunction;
@property (nonatomic) double transitionDelay;
- (double)transitionDelay;
- (id)animationTask;
- (void)bindAnimationTask:;
- (id)initWithProperty:duration:timingFunction:delay:;
- (void)removeAnimationTask;
- (void)setAnimationTask:;
- (unsigned long long)transitionProperty;
- (double)transitionDuration;
- (void).cxx_destruct;
- (unsigned long long)transitionTimingFunction;
@end
