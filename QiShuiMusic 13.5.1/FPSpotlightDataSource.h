@interface FPSpotlightDataSource : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) FPSpotlightQueryDescriptor queryDescriptor;
@property (nonatomic) <FPSpotlightDataSourceDelegate> delegate;
@property (nonatomic) BOOL hasMoreIncoming;
- (void)start;
- (void)setDelegate:;
- (unsigned long long)maximumNumberOfItems;
- (void)_invalidate;
- (id)delegate;
- (void).cxx_destruct;
- (id)description;
- (void)invalidate;
- (void)_invalidateWithError:;
- (id)queryDescriptor;
- (void)enumerationMightHaveResumed;
- (BOOL)hasMoreIncoming;
- (id)initWithQueryDescriptor:predicate:;
- (id)itemPredicateForCollector:;
- (void)collector:didGatherItems:;
- (void)collector:didUpdateItems:;
- (void)collector:didRemoveItemIDs:;
- (void)collector:didUpdateItemsOrigin:;
- (void)collector:didEncounterError:;
@end
