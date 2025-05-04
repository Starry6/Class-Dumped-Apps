@interface AWEEcommerceCacheWrapperObject : NSObject
@property (nonatomic) double lastStoreCacheTime;
@property (nonatomic) double cacheLimitTime;
@property (nonatomic) @ cacheObject;
- (void)setCacheObject:;
- (double)lastStoreCacheTime;
- (double)cacheLimitTime;
- (BOOL)isGoodsCacheExpired;
- (void)setCacheLimitTime:;
- (void)setLastStoreCacheTime:;
- (id)init;
- (void).cxx_destruct;
- (id)cacheObject;
@end
