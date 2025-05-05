@interface BDUGLuckyShakeData : BDUGLuckyBDModel
@property (nonatomic) BOOL disableGlobalShake;
@property (nonatomic) double globalDetectorIntervalMs;
@property (nonatomic) NSArray globalShakeFilterPath;
@property (nonatomic) BDUGLuckyIosConfig iosConfig;
@property (nonatomic) BDUGLuckyAndroidConfig androidConfig;
@property (nonatomic) BOOL shakeEnable;
- (void)setShakeEnable:;
- (id)androidConfig;
- (BOOL)disableGlobalShake;
- (double)globalDetectorIntervalMs;
- (id)globalShakeFilterPath;
- (id)iosConfig;
- (void)setAndroidConfig:;
- (void)setDisableGlobalShake:;
- (void)setGlobalDetectorIntervalMs:;
- (void)setGlobalShakeFilterPath:;
- (void)setIosConfig:;
- (BOOL)shakeEnable;
- (void).cxx_destruct;
+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
@end
