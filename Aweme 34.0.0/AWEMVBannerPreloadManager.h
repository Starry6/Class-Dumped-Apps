@interface AWEMVBannerPreloadManager : NSObject
+ (id)getValidBannerListWithBannerList:type:;
+ (void)preloadBannerCoverWithBannerList:isCacheData:;
@end
