@interface BDUGLuckyIosShakeConfig : BDUGLuckyBDModel
@property (nonatomic) q shakeType;
@property (nonatomic) double threshold;
@property (nonatomic) double sampleTime;
@property (nonatomic) q matchCount;
- (void)setShakeType:;
- (long long)shakeType;
- (double)threshold;
- (void)setSampleTime:;
- (double)sampleTime;
- (void)setThreshold:;
- (long long)matchCount;
- (void)setMatchCount:;
+ (id)modelCustomPropertyMapper;
@end
