@interface VNImageTranslationAlignmentObservation : VNImageAlignmentObservation
@property (nonatomic) {CGAffineTransform=dddddd} alignmentTransform;
- (id)init;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)description;
- (BOOL)isEqual:;
- (id)vn_cloneObject;
- (id)alignmentTransform;
- (void)setAlignmentTransform:;
- (id)alignmentTransformInTopLeftOrigin:orientation:;
+ (BOOL)supportsSecureCoding;
+ (id)defaultOriginatingRequestClassNameForRequestRevision:;
@end
