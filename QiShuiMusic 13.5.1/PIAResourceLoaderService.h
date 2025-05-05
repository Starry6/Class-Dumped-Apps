@interface PIAResourceLoaderService : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)dataWithRequest:;
- (void)fetchResourceForURL:context:Configuration:chunkCompletion:completion:;
- (void)fetchResourceForURL:context:Configuration:completion:;
- (id)initService;
- (void)injectCacheProcessorWithContext:;
- (id)p_addPIAKeyWithURL:;
- (void)preloadResourceWithConfig:context:completion:;
- (void)removeCacheProcessorWithContext:;
- (id)responseWithRequest:;
+ (void)executePrepareServiceTask;
@end
