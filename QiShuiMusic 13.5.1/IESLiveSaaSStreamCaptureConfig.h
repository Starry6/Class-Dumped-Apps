@interface IESLiveSaaSStreamCaptureConfig : NSObject
@property (nonatomic) q mode;
@property (nonatomic) BOOL useExternalCamera;
@property (nonatomic) BOOL useNewEffectLabAPI;
@property (nonatomic) BOOL useAmazing;
@property (nonatomic) NSString effectPlatformConfig;
@property (nonatomic) NSString effectLicense;
@property (nonatomic) NSString backgroundColorOfCanvas;
- (id)backgroundColorOfCanvas;
- (id)effectLicense;
- (id)effectPlatformConfig;
- (void)setBackgroundColorOfCanvas:;
- (void)setEffectLicense:;
- (void)setEffectPlatformConfig:;
- (void)setUseAmazing:;
- (void)setUseExternalCamera:;
- (void)setUseNewEffectLabAPI:;
- (BOOL)useAmazing;
- (BOOL)useExternalCamera;
- (BOOL)useNewEffectLabAPI;
- (void).cxx_destruct;
- (long long)mode;
- (void)setMode:;
+ (id)defaultConfig;
@end
