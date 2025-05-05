@interface AWEIMStrangerImageCacheManager : NSObject
@property (nonatomic) YYMemoryCache cache;
@property (nonatomic) YYMemoryCache coverCache;
- (id)avatarImageForKey:;
- (id)coverCache;
- (id)coverImageForKey:;
- (id)getCacheKey:;
- (void)saveAvatarImage:forKey:;
- (void)saveCoverImage:forKey:;
- (void)setCoverCache:;
- (void)removeAll;
- (void)setCache:;
- (void).cxx_destruct;
- (id)cache;
+ (id)hMacMD5String:;
+ (id)sharedInstance;
@end
