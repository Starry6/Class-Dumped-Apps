@interface AWETeenImagePreloadManager : NSObject
+ (void)preloadRemainImageWithModel:currentIndex:referString:completion:;
+ (void)preloadImageWithURLArray:SRTransformer:completion:;
+ (unsigned long long)imageOptions;
+ (id)cacheName;
@end
