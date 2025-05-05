@interface SSVURLCache : NSObject
- (id)init;
- (void)dealloc;
- (void)storeCachedResponse:forRequest:;
- (void)removeAllCachedResponses;
- (void).cxx_destruct;
- (id)cachedResponseForRequest:;
- (id)initWithConfiguration:;
- (id)cachedConnectionResponseForRequestProperties:;
- (id)cachedConnectionResponseForRequestProperties:cachedResponse:;
- (void)configureRequest:;
- (void)loadMemoryCacheFromDisk;
- (void)saveMemoryCacheToDisk;
- (void)storeConnectionResponse:forRequestProperties:;
- (void)storeConnectionResponse:forRequestProperties:userInfo:;
@end
