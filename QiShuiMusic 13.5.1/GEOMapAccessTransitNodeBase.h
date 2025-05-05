@interface GEOMapAccessTransitNodeBase : NSObject
@property (nonatomic) {?=dd} coordinate;
@property (nonatomic) Q transitID;
@property (nonatomic) NSString internalName;
@property (nonatomic) double boundingRadius;
@property (nonatomic) {?={?=dd}{?=dd}} boundingRect;
@property (nonatomic) ^{?=dd} polygonPoints;
@property (nonatomic) q polygonPointsCount;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)internalName;
- (void)dealloc;
- (id)boundingRect;
- (void).cxx_destruct;
- (id)coordinate;
- (id)description;
- (id).cxx_construct;
- (id)findGeometryWithCompletionHandler:;
- (double)distanceInMetersFrom:;
- (id)findAccessPoints:completionHandler:;
- (unsigned long long)transitID;
- (double)boundingRadius;
- (id)polygonPoints;
- (long long)polygonPointsCount;
- (id)initWithMap:node:;
@end
