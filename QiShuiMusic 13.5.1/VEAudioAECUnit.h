@interface VEAudioAECUnit : VEAudioBaseUnit
- (void)p_stopProcessor;
- (BOOL)setAudioConfig:;
- (void)p_createFile;
- (void)p_initAudio;
- (void)p_processer:bgm:sampleCount:channel:;
- (void)p_startProcessor;
- (BOOL)processAudioSampleData:;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
+ (id)requeirements;
+ (id)modelName;
@end
