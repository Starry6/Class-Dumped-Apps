@interface AVAudioMixSweepFilterEffectParameters : AVAudioMixEffectParameters
@property (nonatomic) NSInteger minimumCutOffFrequency;
@property (nonatomic) NSInteger maximumCutOffFrequency;
@property (nonatomic) float bypassThreshold;
@property (nonatomic) float sweepValue;
- (id)init;
- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:;
- (id)initWithMinimumCutOffFrequency:maximumCutOffFrequency:bypassThreshold:sweepValue:;
- (id)sweepFilterEffectWithSweepValue:;
- (int)minimumCutOffFrequency;
- (int)maximumCutOffFrequency;
- (float)bypassThreshold;
- (float)sweepValue;
+ (id)sweepFilterEffectParametersWithMinimumCutOffFrequency:maximumCutOffFrequency:bypassThreshold:sweepValue:;
@end
