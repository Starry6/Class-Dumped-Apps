@interface PLTripProcessor : NSObject
+ (id)processTripsWithItems:frequentLocations:lastHomeVisitDate:progressBlock:;
+ (id)_generateTripFromTripsMoments:withLastHomeVisitDate:andLastItem:;
+ (double)_timeIntervalBetweenItem:andItem:;
+ (unsigned long long)_numberOfAssetsInItems:;
+ (double)_minimumDistanceBetweenFrequentLocations:andItem:;
+ (id)_filterFrequentLocations:forDateInterval:;
@end
