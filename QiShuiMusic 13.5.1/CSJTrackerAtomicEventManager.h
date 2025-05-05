@interface CSJTrackerAtomicEventManager : NSObject
+ (void)applogTrackWithParams:context:eventAction:;
+ (void)statsTrackWithParams:context:eventAction:;
+ (id)trackerExtraWithSource:key:;
@end
