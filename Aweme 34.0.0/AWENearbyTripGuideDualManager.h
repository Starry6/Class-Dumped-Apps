@interface AWENearbyTripGuideDualManager : NSObject
+ (id)tripGuideTrackParams:;
+ (void)trackNearbyRefresh:refreshMethod:;
+ (void)trackNearbyLoadMore:actionType:loadNumber:;
+ (BOOL)enableTripGuideDual:;
+ (void)recordPrevParams:feedType:;
+ (id)tripGuideTrackParams:needPrevParams:;
+ (id)currentLocatedCityName:;
+ (BOOL)enableTripGuideDual:city:;
+ (id)forceCityCode;
+ (id)forceCityName;
+ (id)sameCityType:city:;
+ (id)sameCityType:;
+ (id)userEnterFrom:;
@end
