@interface ARGeoTrackingGradualCorrectionFilter : NSObject
@property (nonatomic) {?=[4]} ENUFromVIOTarget;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithTargetTransform:;
- (id)ENUFromVIOTarget;
- (void)setENUFromVIOTarget:;
- (void)setTargetTranslation:;
- (void)setTargetRotation:;
- (BOOL)getCurrentENUFromVIO:;
- (void)updateWithVIOPose:timestamp:;
@end
