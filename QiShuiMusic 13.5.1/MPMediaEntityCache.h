@interface MPMediaEntityCache : NSObject
- (void)removeEntityWithIdentifier:dataProviderEntityClass:;
- (id)_entityMapForDataProviderEntityClass:;
- (id)initWithMediaLibraryDataProvider:;
- (id)itemWithIdentifier:;
- (void)_clearSomeGlobalEntityTemporaryReferences;
- (void)_performWithExclusiveAccessForDataProviderEntityClass:block:;
- (void)_performWithSharedAccessForDataProviderEntityClass:block:;
- (void).cxx_destruct;
- (void)updatePropertyValuesInEntityWithIdentifier:dataProviderEntityClass:deleted:;
- (id)itemWithIdentifier:loadEntityBlock:;
- (id)collectionWithIdentifier:grouping:loadEntityBlock:;
- (id)_entityWithIdentifier:mediaEntityType:collectionGroupingType:loadEntityBlock:;
@end
