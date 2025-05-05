@interface GEOMapAccessTransitStation : GEOMapAccessTransitNodeBase
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
- (id)findAccessPoints:completionHandler:;
- (id)findStops:completionHandler:;
@end
