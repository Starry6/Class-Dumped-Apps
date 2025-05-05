@interface EKMapsUtilities : NSObject
+ (id)_locationStringForStructuredLocation:withTitle:;
+ (void)geocodeEventIfNeeded:;
+ (id)mapsURLForLocation:onEvent:hasMapItemLaunchOptionFromTimeToLeaveNotification:;
@end
