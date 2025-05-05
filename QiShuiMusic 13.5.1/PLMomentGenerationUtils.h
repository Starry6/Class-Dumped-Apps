@interface PLMomentGenerationUtils : NSObject
+ (id)sortedOverlappingFrequentLocations:;
+ (id)frequentLocationsOverlappingStartDate:endDate:frequentLocations:;
+ (BOOL)isNearFrequentLocationForMoment:frequentLocations:;
+ (unsigned short)locationTypeForLocation:usingLocationsOfInterest:routineIsAvailable:horizontalAccuracy:;
+ (void)processLocationIfNecessaryInMoment:usingManager:frequentLocations:frequentLocationsDidChange:;
+ (BOOL)isTopFrequentLocationForMoment:frequentLocations:;
+ (BOOL)isAtFrequentLocationForMoment:frequentLocations:;
+ (unsigned short)processedLocationTypeForMoment:locationsOfInterest:frequentLocations:routineIsAvailable:;
@end
