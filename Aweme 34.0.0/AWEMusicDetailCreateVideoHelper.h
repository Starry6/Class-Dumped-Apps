@interface AWEMusicDetailCreateVideoHelper : AWEMusicDetailFeatureHelper
- (void)createVideoWithSchemaString:;
- (void)createVideo;
- (BOOL)musicIsAvailable;
- (void)createVideo:info:;
- (id)createVideoInfoWithInspirationModel:extraTrackParams:;
- (void)startComposerWithQuickFlashModel:musicModel:trackInfo:;
- (void)createQuickFlashVideoWithQuickFlashModel:musicModel:trackInfo:;
- (BOOL)needInterceptMultipleCameraInstance;
- (id)createInspirationParamsWithModel:;
- (void)createVideoWithInspirationModel:extraTrackParams:;
- (void)createVideoOnlyWithMusic;
@end
