@interface AVAudioUnitEQFilterParameters : NSObject
@property (nonatomic) q filterType;
@property (nonatomic) float frequency;
@property (nonatomic) float bandwidth;
@property (nonatomic) float gain;
@property (nonatomic) BOOL bypass;
- (float)gain;
- (id)init;
- (float)frequency;
- (void)dealloc;
- (void)setFrequency:;
- (void)setFilterType:;
- (long long)filterType;
- (float)bandwidth;
- (void)setBypass:;
- (void)setGain:;
- (id)initWithImpl:;
- (BOOL)bypass;
- (void)setBandwidth:;
@end
