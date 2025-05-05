@interface VNDetectBarcodesRequestConfiguration : VNImageBasedRequestConfiguration
@property (nonatomic) NSArray symbologies;
@property (nonatomic) NSString locateMode;
@property (nonatomic) BOOL stopAtFirstPyramidWith2DCode;
@property (nonatomic) BOOL useMLDetector;
- (void).cxx_destruct;
- (id)initWithRequestClass:;
- (id)copyWithZone:;
- (id)symbologies;
- (void)setSymbologies:;
- (id)locateMode;
- (void)setLocateMode:;
- (BOOL)stopAtFirstPyramidWith2DCode;
- (void)setStopAtFirstPyramidWith2DCode:;
- (BOOL)useMLDetector;
- (void)setUseMLDetector:;
- (void)setDefaultSymbologiesForRevision:;
@end
