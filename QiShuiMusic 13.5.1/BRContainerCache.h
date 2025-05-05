@interface BRContainerCache : NSObject
- (void)dealloc;
- (id)allContainersBlockIfNeeded:;
- (id)documentContainers;
- (void)_accountWillChange;
- (void).cxx_destruct;
- (id)initWithHelper:personaID:;
- (id)allContainersByID;
- (id)containerByID:;
- (void)subscribeToContainerStatusUpdate;
- (void)unsubscribeToContainerStatusUpdate;
- (void)_containerListDidChange;
- (void)invalidateAndClearCache:;
- (BOOL)_updateContainersCache;
- (id)_allContainersByIDNoCopyBlocking:;
+ (BOOL)isPersonalProvider;
+ (id)containerCacheForPersonaID:;
+ (BOOL)isManagedProvider;
+ (id)containerHelper;
+ (BOOL)hasDaemonicParts;
+ (id)containerCache;
@end
