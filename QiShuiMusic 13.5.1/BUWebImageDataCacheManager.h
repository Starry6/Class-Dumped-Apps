@interface BUWebImageDataCacheManager : NSObject
@property (nonatomic) NSCache cache;
- (void)storeImageData:forKey:;
- (id)init;
- (void)setCache:;
- (void).cxx_destruct;
- (id)cache;
- (id)imageDataForKey:;
+ (id)sharedManager;
@end
