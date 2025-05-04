@interface AWETeenSpeechService : NSObject
@property (nonatomic) SpeechEngine engine;
@property (nonatomic) <AWETeenSpeechServiceDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onMessageWithType:andData:;
- (void)p_startEngine;
- (void)p_setupAsrSDK;
- (void)p_speechDidStart;
- (void)p_speechDidStop;
- (void)p_handleRecordErrorResult:;
- (void)p_handleRecordResult:isFinish:;
- (void)checkMicrophoneAuthWithComplete:;
- (void)stopSpeeching;
- (void)startSpeechingWithDelegate:;
- (void)cancleEngine;
- (void)p_checkAudioAccessWithCompleteBlock:;
- (void)p_destoryAsrSDK;
- (void)p_handleVolumeLevel:;
- (void)p_finishEngine;
- (id)engine;
- (id)delegate;
- (void)setEngine:;
- (void).cxx_destruct;
- (void)setDelegate:;
+ (id)sharedInstanced;
@end
