@interface VEAudioNewAECUnit : VEAudioBaseUnit
@property (nonatomic) NSData modelData;
@property (nonatomic) NSMutableArray sampleArray;
- (void)p_stopProcessor;
- (BOOL)setAudioConfig:;
- (void)setSampleArray:;
- (void)p_createFile;
- (void)p_initAudio;
- (void)p_onStopProcessor;
- (id)p_processer:bgm:sampleCount:channel:;
- (void)p_startProcessor;
- (BOOL)processAudioSampleData:;
- (id)sampleArray;
- (void)dealloc;
- (id)modelData;
- (void).cxx_destruct;
- (void)setModelData:;
+ (id)modelName;
@end
