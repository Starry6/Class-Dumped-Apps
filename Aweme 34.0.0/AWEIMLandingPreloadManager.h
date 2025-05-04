@interface AWEIMLandingPreloadManager : NSObject
+ (void)preloadAvatar:roundCornerRatio:;
+ (void)preloadAvatarUrls:roundCornerRatio:;
+ (id)urlFromUrlArray:;
+ (id)aweim__cacheKeyWithNSURL:transformer:;
+ (void)preloadChatAvarar:;
@end
