@interface VEAudioBalanceUnit : VEAudioBaseUnit
- (void)p_stopProcessor;
- (BOOL)setAudioConfig:;
- (void)p_createFile;
- (void)p_initAudio;
- (void)p_processer:sampleCount:channel:;
- (void)p_startProcessor;
- (BOOL)processAudioSampleData:;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
