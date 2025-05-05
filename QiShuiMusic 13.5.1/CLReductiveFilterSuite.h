@interface CLReductiveFilterSuite : NSObject
+ (double)rangeForReductiveFilterOptions:;
+ (double)rangeForTransmitPower:;
+ (id)filterOutliers:;
+ (id)filterOutliers:options:;
+ (id)deriveLocationFromLocations:;
+ (id)deriveLocationFromLocations:options:;
+ (id)applyFilterToLocationObservations:options:;
+ (id)applyFilterToLocationTrace:options:;
@end
