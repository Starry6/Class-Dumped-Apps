@interface SGEventGeocode : NSObject
+ (id)_serialQueue;
+ (BOOL)locationIsAirport:;
+ (BOOL)locationIsGeocoded:;
+ (BOOL)isGeocodeCandidateLocation:forEvent:;
+ (BOOL)isGeocodeCandidate:;
+ (void)geocodeAddress:withCallback:;
+ (void)geocodeAddressWithCanonicalSearch:withCallback:;
+ (void)geocodePOIWithName:ofTypes:inRegion:withCallback:;
+ (void)geocodeLocation:usingMode:withGeoFilters:withCallback:;
+ (id)dateForUTCDate:withTimeZone:;
+ (id)geocodeEvent:;
+ (void)geocodeEvent:withCallback:;
+ (id)poiCategoriesFromString:;
@end
