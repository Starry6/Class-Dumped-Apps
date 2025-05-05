@interface VNImageAlignmentObservation : VNObservation
@property (nonatomic) VNImageRegistrationSignature referenceImageSignature;
@property (nonatomic) VNImageRegistrationSignature floatingImageSignature;
@property (nonatomic) {CGAffineTransform=dddddd} alignmentTransform;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)vn_cloneObject;
- (id)alignmentTransform;
- (void)setAlignmentTransform:;
- (id)referenceImageSignature;
- (void)setReferenceImageSignature:;
- (id)floatingImageSignature;
- (void)setFloatingImageSignature:;
+ (BOOL)supportsSecureCoding;
@end
