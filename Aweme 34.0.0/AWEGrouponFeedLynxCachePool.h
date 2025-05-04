@interface AWEGrouponFeedLynxCachePool : NSObject
@property (nonatomic) YYMemoryCache lynxCache;
- (id)__bundleForUrl:;
- (void)setLynxCache:url:pageType:;
- (id)lynxCacheWithUrl:pageType:;
- (id)lynxCache;
- (void)setLynxCache:;
- (id)init;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
