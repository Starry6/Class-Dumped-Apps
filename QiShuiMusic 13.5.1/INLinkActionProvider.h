@interface INLinkActionProvider : NSObject
@property (nonatomic) NSDictionary cachedActions;
@property (nonatomic) NSDictionary cachedEntities;
@property (nonatomic) NSDictionary actionsGroupedByBundleIdentifier;
@property (nonatomic) NSDictionary entitiesGroupedByBundleIdentifier;
- (id)metadataProvider;
- (void).cxx_destruct;
- (id)actionsGroupedByBundleIdentifier;
- (id)entitiesGroupedByBundleIdentifier;
- (id)supportedActionIdentifiersForBundleIdentifier:;
- (id)supportedEntityIdentifiersForBundleIdentifier:;
- (void)cacheActions:;
- (void)cacheEntities:;
- (void)evictCache;
- (id)cachedActions;
- (void)setCachedActions:;
- (id)cachedEntities;
- (void)setCachedEntities:;
+ (id)sharedProvider;
@end
