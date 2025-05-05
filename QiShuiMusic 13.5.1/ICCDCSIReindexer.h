@interface ICCDCSIReindexer : NSObject
@property (nonatomic) NSMutableArray registeredDelegates;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)deleteAllSearchableItemsWithCompletionHandler:;
- (id)init;
- (void)reindexAllSearchableItemsWithCompletionHandler:;
- (void)reindexSearchableItemsWithObjectIDURIs:completionHandler:;
- (void).cxx_destruct;
- (id)registeredDelegates;
- (void)setRegisteredDelegates:;
- (void)registerCoreDataCoreSpotlightDelegate:;
- (void)unregisterCoreDataCoreSpotlightDelegate:;
- (void)stopIndexing;
- (void)_reindexSearchableItemsWithIdentifiers:completionHandler:;
+ (id)searchableIndex;
+ (id)sharedReindexer;
@end
