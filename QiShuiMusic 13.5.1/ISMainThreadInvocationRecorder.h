@interface ISMainThreadInvocationRecorder : ISInvocationRecorder
@property (nonatomic) BOOL waitUntilDone;
- (void)invokeInvocation:;
- (BOOL)waitUntilDone;
- (void)setWaitUntilDone:;
@end
