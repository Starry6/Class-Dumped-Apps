@interface AWEIMAudioEmojiResourceCacheCleanHelper : NSObject
@property (nonatomic) NSString cachePath;
@property (nonatomic) @? cleanExpiredCacheBlock;
@property (nonatomic) @? cleanAllCacheBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)cleanPaths;
- (void)cleanResourceWithStrategy:;
- (double)cleanSizeWithStrategy:;
- (void)setCleanExpiredCacheBlock:;
- (void)setCleanAllCacheBlock:;
- (double)p_expiredCacheSize;
- (double)p_allCacheSize;
- (id)cleanExpiredCacheBlock;
- (id)cleanAllCacheBlock;
- (void)configWithCachePath:cleanExpiredCacheBlock:cleanAllCacheBlock:;
- (id)cachePath;
- (void).cxx_destruct;
- (void)setCachePath:;
+ (id)sharedInstance;
@end
