@interface AWELiveLifeGXTemplateLoader : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> loaderAsyncQueue;
@property (nonatomic) GXCache templateCache;
@property (nonatomic) GXTemplateReader templateReader;
- (id)templateReader;
- (void)removeCacheTemplateForKey:;
- (id)loadCacheTemplateForKey:;
- (void)cacheTemplate:forKey:;
- (void)setTemplateReader:;
- (BOOL)validCacheExist:;
- (void)cleanEmptyTemplateCache;
- (void)loadCacheIfneededWithTemplateItem:;
- (id)cacheKeyWithTemplateId:version:;
- (void)loadTemplateInfoWithTemplateItem:completion:;
- (id)loadTemplateInfoWithPath:templateId:version:;
- (id)loaderAsyncQueue;
- (void)setLoaderAsyncQueue:;
- (id)init;
- (id)templateCache;
- (void)setTemplateCache:;
- (void).cxx_destruct;
+ (id)defaultLoader;
@end
