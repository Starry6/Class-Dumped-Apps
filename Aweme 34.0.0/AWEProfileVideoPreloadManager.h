@interface AWEProfileVideoPreloadManager : NSObject
+ (void)cancelVideosPreloadWithGroup:;
+ (BOOL)isImageAlbum:;
+ (void)preload:group:preloadSize:completion:;
+ (void)preloadImage:completion:;
+ (void)preloadVideo:withGroup:preloadSize:completion:;
@end
