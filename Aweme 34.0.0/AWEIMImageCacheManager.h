@interface AWEIMImageCacheManager : NSObject
@property (nonatomic) BDImageCache semiPermernantCache;
- (id)memoryImageForKey:;
- (void)saveImageToMemoryCache:forKey:;
- (id)semiPermernantCache;
- (id)localImageForKey:;
- (void)removeLocalImageForKey:;
- (void)saveImageToDiskCache:forKey:;
- (void)didReceiveAWECleanCacheNotification;
- (void)setSemiPermernantCache:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedManager;
@end
