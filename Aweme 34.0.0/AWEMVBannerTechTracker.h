@interface AWEMVBannerTechTracker : NSObject
+ (void)trackBannerRequestWithCacheMode:requestStatus:errorReason:requestResult:;
+ (void)trackBannerBeingFiltered:type:filteredReason:logPb:;
+ (void)trackBannersFilteredDiffInType:beforeFilteredBanners:beforeNum:afterFilteredBanners:afterNum:logPb:;
+ (void)trackBannerInsertDestination:type:insertDestination:;
+ (void)trackBannerInsertReplaceWhichAwemeModel:type:;
@end
