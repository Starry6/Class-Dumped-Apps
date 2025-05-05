@interface PIADefaultResourceLoaderImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)fetchResourceForConfiguration:chunkCompletion:completion:;
- (void)fetchResourceForConfiguration:completion:;
- (void)injectCacheCustomProcessor:instance:;
- (void)preloadResourceForConfiguration:completion:;
- (void)removeCacheCustomProcessor:instance:;
+ (void)executeAfterPrepareTask;
@end
