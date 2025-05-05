@interface BDUGLuckyAndroidShakeConfig : BDUGLuckyBDModel
@property (nonatomic) BOOL shakeType;
@property (nonatomic) q accThreshold;
@property (nonatomic) double minWindowSizeMs;
@property (nonatomic) double maxWindowSizeMs;
@property (nonatomic) double sensorSampleIntervalMs;
- (double)minWindowSizeMs;
- (double)maxWindowSizeMs;
- (long long)accThreshold;
- (double)sensorSampleIntervalMs;
- (void)setAccThreshold:;
- (void)setMaxWindowSizeMs:;
- (void)setMinWindowSizeMs:;
- (void)setSensorSampleIntervalMs:;
- (void)setShakeType:;
- (BOOL)shakeType;
+ (id)modelCustomPropertyMapper;
@end
