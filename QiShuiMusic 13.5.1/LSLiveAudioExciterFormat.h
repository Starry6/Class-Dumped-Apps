@interface LSLiveAudioExciterFormat : NSObject
@property (nonatomic) double gain;
@property (nonatomic) q highpassfreq;
- (long long)highpassfreq;
- (void)setHighpassfreq:;
- (double)gain;
- (id)init;
- (void)setGain:;
- (id)copyWithZone:;
@end
