@interface IESSaaSTIMOModel : MTLModel
@property (nonatomic) BOOL hasInited;
@property (nonatomic) BOOL isInvalided;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)noCacheInstance;
- (void)setIsInvalided:;
- (BOOL)hasInited;
- (BOOL)isInvalided;
- (void)setHasInited:;
- (id)initWithIdentifier:;
- (id)copyWithZone:;
+ (unsigned long long)cacheCount;
+ (id)cachedInstanceWithIdentifier:;
+ (void)clearAllCache;
+ (id)createCache;
+ (void)removeCachedInstanceWithIdentifier:;
+ (id)sharedHashMapLock;
+ (id)sharedUnreadCountQueue;
+ (id)db;
+ (id)sharedCache;
+ (id)sharedOperationQueue;
+ (id)sharedMapTable;
@end
