@interface AWEMVBannerCommonRecorder : NSObject
+ (long long)bannerMaxShowTimesInOneDay;
+ (id)recordModelOfBanner:;
+ (long long)todayShownTimesOfBanner:;
+ (id)allShownBannerIDs;
+ (void)recordBannerShown:;
+ (void)recordBannerCloseStateWithBanner:isClosed:;
@end
