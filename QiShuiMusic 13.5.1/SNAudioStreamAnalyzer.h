@interface SNAudioStreamAnalyzer : NSObject
- (void)dealloc;
- (id)initWithFormat:;
- (void)removeRequest:;
- (void)removeAllRequests;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)analyzeAudioBuffer:atAudioFramePosition:;
- (BOOL)addRequest:withObserver:error:;
- (BOOL)addRequest:completionHandler:resultsHandler:error:;
- (void)completeAnalysis;
+ (BOOL)shouldLogResultsHistory;
+ (BOOL)shouldLogRequests;
@end
