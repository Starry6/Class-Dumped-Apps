@interface VNImageBasedRequestConfiguration : VNRequestConfiguration
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} regionOfInterest;
@property (nonatomic) NSArray inputFaceObservations;
@property (nonatomic) NSArray inputDetectedObjectObservations;
- (void).cxx_destruct;
- (id)initWithRequestClass:;
- (id)copyWithZone:;
- (void)setInputFaceObservations:;
- (id)inputFaceObservations;
- (id)inputDetectedObjectObservations;
- (void)setInputDetectedObjectObservations:;
- (id)regionOfInterest;
- (void)setRegionOfInterest:;
@end
