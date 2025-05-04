@interface AWEHotSpotChannelPreloadManager : NSObject
+ (void)prefetchDataWithShouldFetchAweme:shouldFetchSkyLight:preloadType:logExtra:;
+ (id)getContentVC;
+ (void)releaseContentVC;
@end
