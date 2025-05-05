@interface SNSystemAudioAnalyzer : NSObject
- (id)init;
- (void)removeRequest:;
- (void)start;
- (void)stop;
- (void)removeAllRequests;
- (void).cxx_destruct;
- (BOOL)addRequest:withObserver:error:;
- (id)initWithAudioConfiguration:;
- (void)addRequestInBackground:withObserver:;
+ (void)configureNewAnalyzersToComputeInThisProcess:;
@end
