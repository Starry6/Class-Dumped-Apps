@interface ByteRTCVoiceEqualizationConfig : NSObject
@property (nonatomic) q frequency;
@property (nonatomic) NSInteger gain;
- (int)gain;
- (long long)frequency;
- (void)setFrequency:;
- (void)setGain:;
@end
