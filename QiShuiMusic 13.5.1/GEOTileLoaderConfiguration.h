@interface GEOTileLoaderConfiguration : NSObject
@property (nonatomic) # serverProxyClass;
@property (nonatomic) Q memoryCacheCountLimit;
@property (nonatomic) Q memoryCacheCostLimit;
@property (nonatomic) Q backpressureControlCountLimit;
@property (nonatomic) NSString diskCacheLocation;
@property (nonatomic) GEOResourceManifestConfiguration manifestConfiguration;
@property (nonatomic) NSLocale locale;
- (void)setLocale:;
- (id)init;
- (id)diskCacheLocation;
- (void)setDiskCacheLocation:;
- (id)locale;
- (unsigned long long)backpressureControlCountLimit;
- (void)setServerProxyClass:;
- (void)setMemoryCacheCostLimit:;
- (void)setMemoryCacheCountLimit:;
- (void).cxx_destruct;
- (void)setManifestConfiguration:;
- (unsigned long long)memoryCacheCostLimit;
- (id)manifestConfiguration;
- (unsigned long long)memoryCacheCountLimit;
- (void)setBackpressureControlCountLimit:;
- (Class)serverProxyClass;
- (id)copyWithZone:;
@end
