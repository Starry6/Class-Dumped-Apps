@interface ARPatchGrid : NSObject
@property (nonatomic) Q size;
@property (nonatomic) r^{?=} patches;
@property (nonatomic) float pivot;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (unsigned long long)size;
- (id)initWithPatchesVector:pivotAngle:;
- (id)patches;
- (float)pivot;
+ (BOOL)supportsSecureCoding;
@end
