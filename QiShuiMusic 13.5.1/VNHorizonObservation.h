@interface VNHorizonObservation : VNObservation
@property (nonatomic) {CGAffineTransform=dddddd} transform;
@property (nonatomic) double angle;
- (void)setTransform:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)transform;
- (double)angle;
- (BOOL)isEqual:;
- (void)setAngle:;
- (id)vn_cloneObject;
- (id)transformForImageWidth:height:;
- (double)angleInTopLeftOrigin:orientation:;
+ (BOOL)supportsSecureCoding;
+ (id)defaultOriginatingRequestClassNameForRequestRevision:;
@end
