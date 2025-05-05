@interface ARImageScalingTechnique : ARTechnique
@property (nonatomic) {CGSize=dd} scaledSize;
@property (nonatomic) I conversionPixelFormatType;
@property (nonatomic) C downscaleFactor;
- (id)processData:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)scaledSize;
- (unsigned long long)requiredSensorDataTypes;
- (void)setConversionPixelFormatType:;
- (unsigned int)conversionPixelFormatType;
- (id)initWithDownscaleFactor:;
- (id)initWithScaledSize:;
- (void)_createScalingPassesForInputSize:;
- (id)_applyScalingPasses:;
- (unsigned char)downscaleFactor;
+ (id)scalingPassDescriptionForInputSize:scaledSize:conversionPixelFormat:;
@end
