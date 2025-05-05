@interface STIMKit.IMManager : NSObject
- (void)iesim_saas_audioRecorderDidFinishRecordingWithResult:error:;
- (void)iesim_saas_audioRecorderStartRecordWithError:;
- (void)iesim_saas_didEndPlayAudioMessage;
- (void)iesim_saas_didEndPlayVideoMessage;
- (void)iesim_saas_needTransferToProfileWithUserID:secUserID:params:;
- (void)iesim_saas_trackScene:label:params:;
- (id)iesim_saas_trackScenes;
- (void)iesim_saas_willStartPlayAudioMessage;
- (void)iesim_saas_willStartPlayVideoMessage;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
@end
