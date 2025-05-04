@interface AWEAdLynxCardResourceLoader : NSObject
+ (void)loadLynxResourceIfNeeded:;
+ (void)loadWebpResourceIfNeeded:;
+ (void)preloadAlphaVideoIfNeeded:aweme:;
+ (void)preloadAlphaVideoIfNeededWithURL:isVideo:aweme:;
+ (void)trackerEventWithAweme:label:adExtraData:;
+ (id)targetFilePathWithURL:;
+ (void)updatePreloadResources:withResourceUrls:;
+ (void)updateGlobalProps:withAweme:;
@end
