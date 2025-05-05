@interface AWEIMImagePlaceholderCacheManager : NSObject
@property (nonatomic) YYMemoryCache placeholderCache;
- (id)imageforKey:;
- (id)placeholderCache;
- (void)setPlaceholderCache:;
- (void).cxx_destruct;
- (void)setImage:forKey:;
+ (id)sharedManager;
@end
