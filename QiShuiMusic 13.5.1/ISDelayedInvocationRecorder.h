@interface ISDelayedInvocationRecorder : ISInvocationRecorder
@property (nonatomic) double delayInterval;
- (void)invokeInvocation:;
- (double)delayInterval;
- (void)setDelayInterval:;
@end
