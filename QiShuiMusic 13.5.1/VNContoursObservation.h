@interface VNContoursObservation : VNObservation
@property (nonatomic) q contourCount;
@property (nonatomic) q topLevelContourCount;
@property (nonatomic) NSArray topLevelContours;
@property (nonatomic) r^{CGPath=} normalizedPath;
- (id)debugQuickLookObject;
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)isEqual:;
- (id)vn_cloneObject;
- (id)initWithOriginatingRequestSpecifier:compressedPoints:imageSize:;
- (BOOL)_initializePolygonContainers;
- (long long)contourCount;
- (long long)topLevelContourCount;
- (id)topLevelContours;
- (id)contourAtIndex:error:;
- (id)contourAtIndexPath:error:;
- (id)normalizedPath;
- (id)polygonList;
- (id)childContourIndicesAtIndex:;
- (id)normalizedPathInTopLeftOrigin:orientation:;
+ (BOOL)supportsSecureCoding;
@end
