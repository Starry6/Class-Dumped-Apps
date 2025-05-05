@interface PLClientSandboxExtensionCache : NSObject
@property (nonatomic) NSMutableOrderedSet sandboxExtensionURLs;
@property (nonatomic) Q cacheLimit;
- (void).cxx_destruct;
- (id)initWithCacheLimit:;
- (unsigned long long)cacheLimit;
- (void)insertSandboxedURL:;
- (BOOL)containsURL:;
- (id)sandboxExtensionURLs;
- (void)setSandboxExtensionURLs:;
@end
