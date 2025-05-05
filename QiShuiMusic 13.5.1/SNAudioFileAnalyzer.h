@interface SNAudioFileAnalyzer : NSObject
- (void)removeRequest:;
- (void)analyze;
- (void)removeAllRequests;
- (void).cxx_destruct;
- (id)initWithURL:error:;
- (void)analyzeWithCompletionHandler:;
- (BOOL)addRequest:withObserver:error:;
- (void)analyzeInRange:;
- (void)cancelAnalysis;
@end
