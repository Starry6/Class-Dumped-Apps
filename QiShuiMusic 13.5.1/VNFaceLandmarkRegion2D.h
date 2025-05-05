@interface VNFaceLandmarkRegion2D : VNFaceLandmarkRegion
@property (nonatomic) r^ points;
@property (nonatomic) r^{CGPoint=dd} normalizedPoints;
@property (nonatomic) NSArray precisionEstimatesPerPoint;
@property (nonatomic) q pointsClassification;
- (void)dealloc;
- (void)_initLocks;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)points;
- (BOOL)isEqual:;
- (id)pointAtIndex:;
- (id)pointsInImageOfSize:;
- (id)initWithOriginatingRequestSpecifier:faceBoundingBox:pointCount:;
- (id)normalizedPoints;
- (id)initWithOriginatingRequestSpecifier:faceBoundingBox:pointsClassification:points:pointCount:precisionEstimatesPerPoint:;
- (long long)pointsClassification;
- (id)precisionEstimatesPerPoint;
- (id)normalizedPointsInTopLeftOrigin:orientation:;
+ (BOOL)supportsSecureCoding;
+ (id)defaultOriginatingRequestClassNameForRequestRevision:;
@end
