@interface DTURLCacheMXXT : NSURLCache
- (id)ETagForRequest:;
- (void)storeCachedResponse:forRequest:;
- (id)cachedResponseForRequest:;
+ (id)CalculateETag:;
+ (id)diskPath;
+ (BOOL)hasETagInResponse:;
+ (id)synthesisRequest:;
+ (id)sharedCache;
@end
