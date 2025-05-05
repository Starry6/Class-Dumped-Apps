@interface VEAudioTimeAlignUnit : VEAudioBaseUnit
@property (nonatomic) double fristAudioCallbackTime;
@property (nonatomic) double fristVideoTime;
@property (nonatomic) double fristAudioTime;
- (void)p_stopProcessor;
- (BOOL)setAudioConfig:;
- (void)downData:;
- (double)fristAudioCallbackTime;
- (double)fristAudioTime;
- (double)fristVideoTime;
- (float)p_getDelayTime;
- (void)p_initAudio;
- (void)p_onStopProcessor;
- (void)p_processer:bgm:sampleCount:channel:;
- (void)p_startProcessor;
- (BOOL)processSampleData:;
- (void)setFirstVideoTime:firstAudioTime:;
- (void)setFristAudioCallbackTime:;
- (void)setFristAudioTime:;
- (void)setFristVideoTime:;
- (void)dealloc;
@end
