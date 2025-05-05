@interface ARAppClipCodeTechnique : ARImageBasedTechnique
@property (nonatomic) BOOL deterministicMode;
@property (nonatomic) BOOL ignoreURLLimitation;
- (void)dealloc;
- (id)processData:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (void)prepare:;
- (double)requiredTimeInterval;
- (void)setPowerUsage:;
- (long long)captureBehavior;
- (BOOL)deterministicMode;
- (id)initWithIgnoreURLLimitation:;
- (BOOL)ignoreURLLimitation;
+ (BOOL)producesResultDataForAnchorOfClass:;
+ (BOOL)shouldRunCameraOrScannerPerformanceTestingMode;
@end
