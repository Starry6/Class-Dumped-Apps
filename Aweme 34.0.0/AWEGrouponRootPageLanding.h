@interface AWEGrouponRootPageLanding : NSObject
+ (BOOL)isColdLaunch;
+ (BOOL)landingNearbyWithParams:;
+ (long long)indexForNearby;
+ (BOOL)landingGroupon;
+ (void)saveParamsForNearbyVC:paramDict:;
+ (long long)indexForGroupOn;
@end
