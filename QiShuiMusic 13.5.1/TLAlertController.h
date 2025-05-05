@interface TLAlertController : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (BOOL)_stopPlayingAlerts:withOptions:playbackCompletionType:;
- (void)dealloc;
- (void)playAlert:withCompletionHandler:;
- (id)_queuePlayerController;
- (id)_controllerForPlaybackBackEnd:;
- (id)_systemSoundController;
- (void)handleActivationAssertionStatusChangeForAlert:updatedStatus:;
- (void)_didCompletePlaybackOfAlert:;
- (void).cxx_destruct;
- (BOOL)_stopAllAlertsInCurrentProcess;
- (id)_prepareForPlayingAlert:;
- (BOOL)stopAllAlerts;
- (void)updateAudioVolumeDynamicallyForAlert:toValue:;
- (BOOL)stopPlayingAlerts:withOptions:playbackCompletionType:;
- (void)_didReachTimeoutForAlert:;
- (void)preheatForAlert:completionHandler:;
- (void)_performBlockOnAccessQueue:;
- (void)_assertRunningOnAccessQueue;
+ (id)sharedAlertController;
+ (long long)_playbackBackEndForAlertType:topic:;
+ (BOOL)_shouldStopAlertForUserInterruption:;
+ (long long)_playbackBackEndForAlert:;
@end
