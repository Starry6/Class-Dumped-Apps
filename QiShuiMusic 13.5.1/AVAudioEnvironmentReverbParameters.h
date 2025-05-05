@interface AVAudioEnvironmentReverbParameters : NSObject
@property (nonatomic) BOOL enable;
@property (nonatomic) float level;
@property (nonatomic) AVAudioUnitEQFilterParameters filterParameters;
- (void)setLevel:;
- (BOOL)enable;
- (id)init;
- (void)dealloc;
- (id)initWithEnvironment:;
- (float)level;
- (void)setEnable:;
- (id)filterParameters;
- (void)loadFactoryReverbPreset:;
@end
