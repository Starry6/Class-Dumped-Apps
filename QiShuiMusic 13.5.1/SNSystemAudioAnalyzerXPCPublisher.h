@interface SNSystemAudioAnalyzerXPCPublisher : NSObject
- (id)init;
- (void)removeRequest:;
- (void)removeAllRequests;
- (void).cxx_destruct;
- (BOOL)addRequest:withObserver:error:;
- (void)setAudioConfiguration:;
@end
