@interface VEAudioNewBalanceUnit : VEAudioBaseUnit
@property (nonatomic) @? newBalanceCallback;
- (void)p_stopProcessor;
- (BOOL)setAudioConfig:;
- (void)downData:;
- (id)findWantedFeature:feature_id:;
- (id)newBalanceCallback;
- (void)p_createFile;
- (void)p_getResults:;
- (void)p_initAudio;
- (void)p_processer:sampleCount:channel:;
- (void)p_startProcessor;
- (BOOL)processAudioSampleData:;
- (void)setNewBalanceCallback:;
- (void)dealloc;
- (void).cxx_destruct;
@end
