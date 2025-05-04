@interface AWEPOITempoTemplateProvider : NSObject
@property (nonatomic) NSObject<OS_dispatch_semaphore> cacheSemaphore;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isTemplateDataLocalWithTemplate:;
- (void)cleanAllCache;
- (id)fetchTemplateDataWithTemplate:;
- (id)cacheSemaphore;
- (id)fetchTemplateData:;
- (id)forestURLWithTemplateURL:;
- (id)getDataWithURL:parameters:;
- (void)cacheData:url:;
- (id)CDNHost;
- (BOOL)isLocalCacheNeedUpdateForURL:;
- (void)refreshLocalCacheUpdateTimeForURL:;
- (void)setCacheSemaphore:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
@end
