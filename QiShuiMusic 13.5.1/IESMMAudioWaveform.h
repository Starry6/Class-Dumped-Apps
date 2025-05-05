@interface IESMMAudioWaveform : IESMMObject
@property (nonatomic) NSInteger channels;
@property (nonatomic) double sampleRate;
@property (nonatomic) NSInteger pointCount;
- (id)initWithChannels:sampleRate:pointCount:waveformType:;
- (id)processBufferList:;
- (int)channels;
- (void)dealloc;
- (double)sampleRate;
- (void)setChannels:;
- (void)setSampleRate:;
- (int)pointCount;
- (void)setPointCount:;
@end
