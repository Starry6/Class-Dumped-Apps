@interface LSLiveAudioCleanerFormat : NSObject
@property (nonatomic) double sampleRate;
@property (nonatomic) Q transformType;
@property (nonatomic) BOOL bAGC;
@property (nonatomic) BOOL bANS;
@property (nonatomic) BOOL bAEC;
@property (nonatomic) BOOL bLimiter;
@property (nonatomic) BOOL bHighNoiseMode;
@property (nonatomic) BOOL bBeam;
- (BOOL)bAEC;
- (BOOL)bAGC;
- (BOOL)bANS;
- (BOOL)bBeam;
- (BOOL)bHighNoiseMode;
- (BOOL)bLimiter;
- (void)setBAEC:;
- (void)setBAGC:;
- (void)setBANS:;
- (void)setBBeam:;
- (void)setBHighNoiseMode:;
- (void)setBLimiter:;
- (id)init;
- (double)sampleRate;
- (id)copyWithZone:;
- (void)setSampleRate:;
- (unsigned long long)transformType;
- (void)setTransformType:;
@end
