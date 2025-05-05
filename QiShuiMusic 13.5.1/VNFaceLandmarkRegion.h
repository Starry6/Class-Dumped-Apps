@interface VNFaceLandmarkRegion : NSObject
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} faceBoundingBox;
@property (nonatomic) Q pointCount;
@property (nonatomic) VNRequestSpecifier originatingRequestSpecifier;
@property (nonatomic) Q requestRevision;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (unsigned long long)requestRevision;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (unsigned long long)pointCount;
- (id)faceBoundingBox;
- (id)originatingRequestSpecifier;
- (id)initWithOriginatingRequestSpecifier:faceBoundingBox:pointCount:;
+ (BOOL)supportsSecureCoding;
+ (id)defaultOriginatingRequestClassNameForRequestRevision:;
@end
