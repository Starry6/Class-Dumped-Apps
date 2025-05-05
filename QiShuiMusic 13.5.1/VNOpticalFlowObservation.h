@interface VNOpticalFlowObservation : VNPixelBufferObservation
@property (nonatomic) VNImageSignature targetImageSignature;
@property (nonatomic) LKTOpticalFlow opticalFlow;
- (void).cxx_destruct;
- (id)targetImageSignature;
- (void)setTargetImageSignature:;
- (id)opticalFlow;
- (void)setOpticalFlow:;
+ (id)defaultOriginatingRequestClassNameForRequestRevision:;
@end
