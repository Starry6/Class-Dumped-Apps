@interface AWEPostPageAudioHandler : NSObject
@property (nonatomic) AWEPostPageAudioServiceDependencies dependencies;
@property (nonatomic) ACCVoiceEffectManager voiceEffectManager;
@property (nonatomic) q changeOfflineMusicSignal;
@property (nonatomic) <AWEPostPageContext> context;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)bindServices:;
- (void)recoverAudioFragmentIfNeeded;
- (void)fetchVoiceEffectIfNecessaryWithCallback:;
- (void)sendChangeOfflineMusicSignal;
- (long long)changeOfflineMusicSignal;
- (void)recoverVoiceEffectFromDraftIfNecessaryWithCompletion:;
- (void)addLogToVideoMuteFeedback;
- (void)p_recoverClassicalMVIfNecessary;
- (id)voiceEffectManager;
- (void)setChangeOfflineMusicSignal:;
- (void)setVoiceEffectManager:;
- (id)dependencies;
- (void).cxx_destruct;
- (id)context;
- (void)setDependencies:;
@end
