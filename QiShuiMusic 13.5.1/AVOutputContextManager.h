@interface AVOutputContextManager : NSObject
- (void)dealloc;
- (void)outputContextManagerImplDidExpireWithReplacementImpl:;
- (id)initWithOutputContextManagerImpl:;
- (void)outputContextManagerImpl:observedFailureToConnectToOutputDevice:reason:;
+ (id)outputContextManagerForAllOutputContexts;
@end
