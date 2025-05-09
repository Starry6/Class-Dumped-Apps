@interface BNPlaying.BNInnerPlayer : NSObject
- (void)videoEngine:fetchedVideoModel:;
- (void)videoEngine:loadStateDidChanged:;
- (void)videoEngine:playbackStateDidChanged:;
- (void)videoEngine:retryForError:;
- (void)videoEngine:usingUrlInfos:;
- (void)videoEngineCloseAysncFinish:;
- (void)videoEngineDidFinish:error:;
- (void)videoEngineDidFinish:videoStatusException:;
- (void)videoEngineOutleterPaused:streamType:;
- (void)videoEnginePrepared:;
- (void)videoEngineReadyToPlay:;
- (void)videoEngineUserStopped:;
- (id)apiForFetcher:;
- (id)cacheFilePathUsingMediaDataLoader:infoModel:;
- (void)audioEffectProcessFailed:errorCode:;
- (void)receiveNotificationWithNotification:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
@end
