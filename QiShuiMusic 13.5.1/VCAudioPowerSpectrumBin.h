@interface VCAudioPowerSpectrumBin : NSObject
@property (nonatomic) {_VCRange=ff} frequencyRange;
@property (nonatomic) float powerLevel;
- (void)setPowerLevel:;
- (id)description;
- (float)powerLevel;
- (id)frequencyRange;
- (id)initWithFrequencyRange:;
- (void)setFrequencyRange:;
@end
