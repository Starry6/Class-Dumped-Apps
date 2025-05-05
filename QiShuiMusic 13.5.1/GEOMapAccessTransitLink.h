@interface GEOMapAccessTransitLink : GEOMapAccessLine
@property (nonatomic) Q transitLineID;
@property (nonatomic) NSString internalLineName;
@property (nonatomic) I minimumTravelTime;
@property (nonatomic) <GEOMapTransitStop> stopFrom;
@property (nonatomic) <GEOMapTransitStop> stopTo;
@property (nonatomic) Q coordinateCount;
@property (nonatomic) ^{?=dd} coordinates;
@property (nonatomic) double length;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (id)description;
- (id).cxx_construct;
- (double)distanceInMetersFrom:outClosestCoordinateOnLine:;
- (unsigned long long)transitLineID;
- (id)internalLineName;
- (unsigned int)minimumTravelTime;
- (id)stopFrom;
- (id)stopTo;
- (id)initWithMap:transitEdge:;
@end
