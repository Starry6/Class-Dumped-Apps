@interface SiriAnalyticsMessageResolutionPipeline : NSObject
- (void)registerMessageResolver:;
- (void)resolveMessage:timestamp:completion:;
- (id)_startResolutionTimerWithElapsed:;
- (void)_continueResolutionWithMessage:resolvers:currentResolverIndex:resolversApplied:completion:;
- (void).cxx_destruct;
- (id)initWithQueue:;
- (void)_discardResolutionTimer:;
@end
