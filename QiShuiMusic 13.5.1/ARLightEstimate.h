@interface ARLightEstimate : NSObject
@property (nonatomic) NSData sphericalHarmonicsCoefficients;
@property (nonatomic) double ambientIntensity;
@property (nonatomic) double ambientColorTemperature;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (double)ambientIntensity;
- (id)initWithAmbientIntensity:temperature:;
- (id)sphericalHarmonicsCoefficients;
- (double)ambientColorTemperature;
+ (BOOL)supportsSecureCoding;
@end
