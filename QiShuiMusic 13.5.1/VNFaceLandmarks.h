@interface VNFaceLandmarks : NSObject
@property (nonatomic) NSData pointsData;
@property (nonatomic) {_Geometry2D_rect2D_={_Geometry2D_point2D_=ff}{_Geometry2D_size2D_=ff}} alignedBBox;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} userFacingBBox;
@property (nonatomic) Q pointCount;
@property (nonatomic) float confidence;
@property (nonatomic) VNRequestSpecifier originatingRequestSpecifier;
@property (nonatomic) Q requestRevision;
- (float)confidence;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (unsigned long long)requestRevision;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (unsigned long long)pointCount;
- (id)originatingRequestSpecifier;
- (id)_createPointArray:count:;
- (BOOL)isUserFacingBBoxEquivalentToAlignedBBox;
- (id)initWithOriginatingRequestSpecifier:pointsData:pointCount:userFacingBBox:alignedBBox:landmarkScore:;
- (id)pointsData;
- (id)alignedBBox;
- (id)userFacingBBox;
+ (BOOL)supportsSecureCoding;
+ (id)defaultOriginatingRequestClassNameForRequestRevision:;
@end
