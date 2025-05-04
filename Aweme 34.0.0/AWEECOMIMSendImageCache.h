@interface AWEECOMIMSendImageCache : NSObject
@property (nonatomic) NSCache memoryCache;
- (void)clearAllCache;
- (void)cacheImage:uniqueId:;
- (id)requestImageWithUniqueId:;
- (void)removeImageForUniqueId:;
- (id)init;
- (id)memoryCache;
- (void).cxx_destruct;
- (void)setMemoryCache:;
+ (id)sharedInstance;
@end
