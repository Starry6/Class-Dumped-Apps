@interface EKTravelEngineUtilities : NSObject
+ (id)cadRouteHypothesisForEKTravelEngineHypothesis:;
+ (id)formattedLocationCoordinates:;
+ (double)minimumAllowableTravelTime;
+ (long long)geoRouteHypothesisTravelStateForString:;
+ (unsigned long long)geoTrafficDensityForString:;
+ (BOOL)date:representsApproachingDepartureDateForHypothesis:;
+ (int)geoTransportTypeForString:;
+ (id)authorizationStatusAsString:;
+ (id)geoTrafficDensityAsString:;
+ (BOOL)travelStateIndicatesTravelingTowardDestination:;
+ (double)maximumAllowableTravelTime;
+ (id)geoTransportTypeAsString:;
+ (BOOL)date:representsImmediateDepartureForHypothesis:;
+ (BOOL)date:representsLatenessForHypothesis:;
+ (int)geoTransportTypeForCalLocationRoutingMode:;
@end
