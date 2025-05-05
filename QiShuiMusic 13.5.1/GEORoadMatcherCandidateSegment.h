@interface GEORoadMatcherCandidateSegment : NSObject
@property (nonatomic) double score;
@property (nonatomic) GEOMapFeatureRoad road;
@property (nonatomic) {?=ddd} coordinateOnSegment;
@property (nonatomic) double distanceFromSegment;
@property (nonatomic) double segmentAngle;
@property (nonatomic) GEOMapFeatureJunction junction;
@property (nonatomic) double distanceFromJunction;
- (double)score;
- (void).cxx_destruct;
- (id)road;
- (id)initWithCoordinate:angle:road:startCoordinate:endCoordinate:;
- (id)coordinateOnSegment;
- (double)distanceFromSegment;
- (double)segmentAngle;
- (id)junction;
- (double)distanceFromJunction;
@end
