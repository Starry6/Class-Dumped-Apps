@interface GEOMapAccessTransitHall : GEOMapAccessTransitNodeBase
@property (nonatomic) Q stationID;
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
- (void).cxx_destruct;
- (id)findStops:completionHandler:;
- (id)findStation:completionHandler:;
- (unsigned long long)stationID;
@end
