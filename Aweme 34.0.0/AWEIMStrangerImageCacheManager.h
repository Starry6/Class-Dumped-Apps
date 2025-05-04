@interface AWEIMStrangerImageCacheManager : NSObject
@property (nonatomic) YYMemoryCache cache;
@property (nonatomic) YYMemoryCache coverCache;
- (id)coverImageForKey:;
- (void)setCoverCache:;
- (id)coverCache;
- (void)saveAvatarImage:forKey:;
- (void)saveCoverImage:forKey:;
- (id)avatarImageForKey:;
- (id)getCacheKey:;
- (void)setCache:;
- (id)cache;
- (void)removeAll;
- (void).cxx_destruct;
+ (id)hMacMD5String:;
+ (id)sharedInstance;
@end
