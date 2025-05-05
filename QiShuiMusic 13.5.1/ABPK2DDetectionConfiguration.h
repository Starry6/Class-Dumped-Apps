@interface ABPK2DDetectionConfiguration : NSObject
@property (nonatomic) q algMode;
@property (nonatomic) q deviceOrientation;
@property (nonatomic) q abpkDeviceOrientation;
@property (nonatomic) q deviceType;
@property (nonatomic) NSString deviceANEVersion;
@property (nonatomic) BOOL deviceANEVersionPriorOrEqualToH12;
- (long long)deviceType;
- (void)setDeviceOrientation:;
- (void)setDeviceType:;
- (long long)deviceOrientation;
- (void).cxx_destruct;
- (id)initWithAlgorithmMode:;
- (id)initWithAlgorithmMode:deviceOrientation:;
- (id)initWithAlgorithmMode:abpkDeviceOrientation:;
- (long long)algMode;
- (long long)abpkDeviceOrientation;
- (void)setAbpkDeviceOrientation:;
- (id)deviceANEVersion;
- (BOOL)deviceANEVersionPriorOrEqualToH12;
@end
