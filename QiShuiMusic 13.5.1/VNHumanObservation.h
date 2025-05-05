@interface VNHumanObservation : VNDetectedObjectObservation
@property (nonatomic) VNTorsoprint torsoprint;
@property (nonatomic) BOOL upperBodyOnly;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)vn_cloneObject;
- (id)torsoprint;
- (id)VNEntityIdentificationModelPrintWithOriginatingRequestSpecifier:error:;
- (void)setTorsoprint:;
- (BOOL)upperBodyOnly;
- (id)initWithOriginatingRequestSpecifier:boundingBox:upperBodyOnly:confidence:;
+ (BOOL)supportsSecureCoding;
+ (id)defaultOriginatingRequestClassNameForRequestRevision:;
@end
