@interface VNFaceLandmarkRegion3D : VNFaceLandmarkRegion
@property (nonatomic) r^ points;
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)points;
- (void)setPoints:;
- (id)pointAtIndex:;
- (id)initWithOriginatingRequestSpecifier:faceBoundingBox:;
- (id)initWithOriginatingRequestSpecifier:faceBoundingBox:points:pointCount:;
+ (BOOL)supportsSecureCoding;
+ (id)defaultOriginatingRequestClassNameForRequestRevision:;
@end
