@interface VNAnimalObservation : VNRecognizedObjectObservation
@property (nonatomic) VNAnimalprint animalprint;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)vn_cloneObject;
- (id)animalprint;
- (void)setAnimalprint:;
- (id)initWithAnimalprint:confidence:;
- (id)initWithOriginatingRequestSpecifier:boundingBox:confidence:labels:animalprint:;
- (id)VNEntityIdentificationModelPrintWithOriginatingRequestSpecifier:error:;
+ (BOOL)supportsSecureCoding;
+ (id)defaultOriginatingRequestClassNameForRequestRevision:;
@end
