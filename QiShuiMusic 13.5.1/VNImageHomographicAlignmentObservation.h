@interface VNImageHomographicAlignmentObservation : VNImageAlignmentObservation
@property (nonatomic) {?=[3]} warpTransform;
- (id)init;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (BOOL)isEqual:;
- (id)vn_cloneObject;
- (id)warpTransform;
- (void)setWarpTransform:;
+ (BOOL)supportsSecureCoding;
+ (id)defaultOriginatingRequestClassNameForRequestRevision:;
@end
