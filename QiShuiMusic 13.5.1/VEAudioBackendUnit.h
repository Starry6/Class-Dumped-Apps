@interface VEAudioBackendUnit : VEAudioBaseUnit
@property (nonatomic) ^v processor;
- (void)p_stopProcessor;
- (BOOL)setAudioConfig:;
- (void)checkConfig:;
- (void)downData:;
- (int)p_getResult:datasize:channel:type:sampleCount:;
- (void)p_initAudio;
- (int)p_processer:datasize:channel:type:sampleCount:;
- (void)p_startProcessor;
- (BOOL)processAudioSampleData:;
- (void)dealloc;
- (id)processor;
- (void)setProcessor:;
@end
