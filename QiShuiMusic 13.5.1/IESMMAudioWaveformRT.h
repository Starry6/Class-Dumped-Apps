@interface IESMMAudioWaveformRT : IESMMObject
@property (nonatomic) NSInteger channels;
@property (nonatomic) double sampleRate;
- (id)initWithChannels:sampleRate:pointPerSec:waveformType:;
- (id)processBufferList:;
- (int)channels;
- (double)sampleRate;
- (void)setChannels:;
- (void)setSampleRate:;
@end
