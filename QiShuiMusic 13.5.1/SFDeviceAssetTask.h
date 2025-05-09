@interface SFDeviceAssetTask : NSObject
@property (nonatomic) SFDeviceAssetQuery deviceAssetQuery;
@property (nonatomic) SFDeviceAssetRequestConfiguration configuration;
@property (nonatomic) NSObject<OS_dispatch_queue> dispatchQueue;
@property (nonatomic) BOOL useProcessLocalCache;
@property (nonatomic) NSMutableArray deviceQueryParameters;
@property (nonatomic) NSObject<OS_dispatch_source> timer;
@property (nonatomic) NSBundle matchBundle;
@property (nonatomic) NSBundle imperfectMatchBundle;
@property (nonatomic) NSBundle fallbackBundle;
@property (nonatomic) NSBundle cachedBundle;
@property (nonatomic) NSError error;
@property (nonatomic) BOOL queryResultCalled;
@property (nonatomic) BOOL downloadCompletionCalled;
- (BOOL)useProcessLocalCache;
- (id)dispatchQueue;
- (id)error;
- (id)configuration;
- (void).cxx_destruct;
- (id)timer;
- (void)cancelTimeout;
- (id)cachedBundle;
- (id)fallbackBundle;
- (id)initWithDeviceQuery:requestConfiguration:dispatchQueue:useProcessLocalCache:;
- (void)createQueryParameters;
- (BOOL)updateTaskWithAssetURL:error:isFallback:isImperfectMatch:isCached:;
- (BOOL)updateTaskWithAssetBundleURL:error:isFallback:isImperfectMatch:isCached:;
- (BOOL)updateTaskWithBundle:error:isFallback:isImperfectMatch:isCached:;
- (BOOL)completeIfPossible;
- (void)completeWithBundle:isFallback:isCached:;
- (id)bundleURLFromAssetURL:;
- (id)bundleAtURL:error:;
- (id)deviceAssetQuery;
- (id)deviceQueryParameters;
- (id)matchBundle;
- (id)imperfectMatchBundle;
- (BOOL)queryResultCalled;
- (void)setQueryResultCalled:;
- (BOOL)downloadCompletionCalled;
- (void)setDownloadCompletionCalled:;
@end
