@interface GEOComposedTransitWalkingRouteStep : GEOComposedWalkingRouteStep
- (double)distance;
- (id)transitStep;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)instructions;
- (id)transitIncidents;
- (id)advisories;
- (id)startGeoCoordinate;
- (id)endGeoCoordinate;
- (BOOL)isStartOrResumeStep;
- (BOOL)isArrivalStep;
- (id)routeDetailsPrimaryArtwork;
- (id)routeDetailsSecondaryArtwork;
- (id)steppingArtwork;
- (id)initWithComposedRoute:decoderData:transitStep:stepIndex:geoStep:pointRange:maneuverPointRange:;
- (id)initWithComposedRoute:decoderData:transitStep:stepIndex:startCoordinate:endCoordinate:pointRange:;
- (void)_commonInitWithDecoderData:;
+ (BOOL)supportsSecureCoding;
@end
