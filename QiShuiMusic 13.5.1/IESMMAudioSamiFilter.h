@interface IESMMAudioSamiFilter : VEAudioFilter
@property (nonatomic) NSInteger channels;
@property (nonatomic) IESMMAudioSamiConfig config;
- (int)audioMetricesProcess:samples:channels:;
- (id)defaultConfigJson;
- (int)handleIdentify;
- (id)initWithSampleRate:channels:config:;
- (int)process:samples:channels:;
- (int)processEnd;
- (int)channels;
- (void)dealloc;
- (void)setConfig:;
- (void).cxx_destruct;
- (void)setChannels:;
- (id)config;
- (id)fetchResult;
@end
