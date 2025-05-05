@interface VNRecognizedObjectObservation : VNDetectedObjectObservation
@property (nonatomic) VNPixelBufferObservation segmentationMask;
@property (nonatomic) NSArray labels;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)labels;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)initWithOriginatingRequestSpecifier:boundingBox:confidence:labels:segmentationMask:;
- (id)vn_cloneObject;
- (id)initWithRequestRevision:boundingBox:confidence:labels:;
- (id)segmentationMask;
+ (BOOL)supportsSecureCoding;
+ (id)defaultOriginatingRequestClassNameForRequestRevision:;
@end
