@interface AWENearbyCommonRequester : NSObject
+ (id)commonParams;
+ (id)searchMidPageCommonParamsWithReferstring:;
+ (id)homepageRequestCommonParamsWithPageType:;
+ (id)p_homepageRequestBaseParamsWithPageType:;
+ (id)p_homepageRequestLocationParamsWithPageType:;
+ (id)p_homepageRequestSessionParamsWithPageType:;
+ (id)p_roamParamsFromCityModel:pageType:;
+ (id)hotFeedCommonParams;
+ (id)searchStreamCommonParamsWithReferstring:isForceInGrouponTab:;
+ (void)userActionCollectWithParams:complete:;
@end
