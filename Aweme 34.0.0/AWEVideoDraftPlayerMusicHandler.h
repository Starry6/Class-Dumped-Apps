@interface AWEVideoDraftPlayerMusicHandler : NSObject
@property (nonatomic) {CGSize=dd} backupCanvasSize;
@property (nonatomic) ACCVoiceEffectManager voiceEffectManager;
@property (nonatomic) AWEVideoPublishViewModel publishModel;
@property (nonatomic) <ACCEditServiceProtocol> editService;
- (id)publishViewModel;
- (id)publishModel;
- (void)setPublishModel:;
- (id)editService;
- (void)setEditService:;
- (void)setBackupCanvasSize:;
- (id)backupCanvasSize;
- (void)fetchVoiceEffectIfNecessaryWithCallback:;
- (void)recoverVoiceEffectFromDraftIfNecessaryWithCompletion:;
- (void)p_recoverClassicalMVIfNecessary;
- (id)voiceEffectManager;
- (void)setVoiceEffectManager:;
- (void)recoverAudioWithOption:completion:;
- (void)recoverAudioIfNeededWithOption:completion:;
- (void)p_resetPlayerAfterRecover;
- (void).cxx_destruct;
- (id)preferredImageSize;
@end
