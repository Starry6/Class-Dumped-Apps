@interface AWEIMImagePlaceholderCacheManager : NSObject
@property (nonatomic) YYMemoryCache placeholderCache;
- (id)placeholderCache;
- (id)imageforKey:;
- (void)setPlaceholderCache:;
- (void).cxx_destruct;
- (void)setImage:forKey:;
+ (id)sharedManager;
@end
