@interface SNSystemAudioAnalyzerLocal : NSObject
- (id)init;
- (void)removeRequest:;
- (void)removeAllRequests;
- (void).cxx_destruct;
- (BOOL)addRequest:withObserver:error:;
- (void)setAudioConfiguration:;
- (void)handleAVAudioSessionInterruption:;
- (void)handleAVAudioSessionRouteChange:;
- (void)handleAVAudioSessionMediaServicesLost:;
- (void)handleAVAudioSessionMediaServicesReset:;
@end
