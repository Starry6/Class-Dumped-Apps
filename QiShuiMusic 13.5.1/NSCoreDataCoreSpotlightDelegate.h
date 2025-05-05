@interface NSCoreDataCoreSpotlightDelegate : NSObject
@property (nonatomic) NSURL indexURL;
@property (nonatomic) PFCSSearchableIndexProvider indexProvider;
@property (nonatomic) BOOL indexingEnabled;
- (id)domainIdentifier;
- (id)init;
- (id)bundleIdentifier;
- (void)dealloc;
- (id)protectionClass;
- (void)searchableIndex:reindexSearchableItemsWithIdentifiers:acknowledgementHandler:;
- (void)searchableIndex:reindexAllSearchableItemsWithAcknowledgementHandler:;
- (id)indexName;
- (id)initForStoreWithDescription:coordinator:;
- (id)initForStoreWithDescription:model:;
- (int)_indexerThrottle;
- (id)attributeSetForObject:;
- (id)indexedPropertyNamesByEntityNameUsingModel:;
- (void)startSpotlightIndexing;
- (void)stopSpotlightIndexing;
- (void)deleteSpotlightIndexWithCompletionHandler:;
- (id)indexProvider;
- (void)setIndexProvider:;
- (BOOL)isIndexingEnabled;
- (void)indexSearchableItemsToCurrentHistoryToken;
- (BOOL)usePrivateIndex;
- (id)indexURL;
- (void)setIndexURL:;
@end
