@interface BDUGLuckyIosConfig : BDUGLuckyBDModel
@property (nonatomic) double oneDetectingTime;
@property (nonatomic) double accelerometerUpdateInterval;
@property (nonatomic) BOOL forceOpenWifi;
@property (nonatomic) NSArray<BDUGLuckyIosShakeConfig> shakeConfig;
- (void)setShakeConfig:;
- (BOOL)forceOpenWifi;
- (double)oneDetectingTime;
- (void)setForceOpenWifi:;
- (void)setOneDetectingTime:;
- (id)shakeConfig;
- (void).cxx_destruct;
- (double)accelerometerUpdateInterval;
- (void)setAccelerometerUpdateInterval:;
+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
@end
