@interface PLRevGeoLocationHelper : NSObject
+ (BOOL)isCurrentRevGeoProviderAutoNavi;
+ (BOOL)isAutoNaviCountryCode:;
+ (void)simulateAutoNaviForBlock:;
+ (id)appleProviderID;
+ (id)autoNaviCountryCode;
+ (id)currentRevGeoProvider;
+ (BOOL)isAutoNaviRevGeoProvider:;
+ (id)autoNaviProviderID;
@end
