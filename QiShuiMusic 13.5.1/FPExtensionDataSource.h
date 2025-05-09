@interface FPExtensionDataSource : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) BOOL hasMoreIncoming;
@property (nonatomic) <FPCollectionDataSourceDelegate> delegate;
- (void)invalidateWithError:;
- (void)start;
- (void)setDelegate:;
- (void)_invalidate;
- (void)enumerationResultsDidChange;
- (id)delegate;
- (void).cxx_destruct;
- (id)description;
- (void)setQueue:;
- (void)didUpdateItem:;
- (id)queue;
- (void)invalidate;
- (void)_invalidateWithError:;
- (void)_updateItems;
- (void)enumerationMightHaveResumed;
- (BOOL)hasMoreIncoming;
- (id)initWithEnumerationSettings:;
- (id)_initialPageFromSortDescriptors:;
- (void)_gatherInitialItems;
- (void)_updateItemsWithUpdatesCount:section:;
- (void)_gatherMoreItemsAfterPage:section:;
+ (void)setSuggestedBatchSize:;
+ (long long)suggestedBatchSize;
+ (long long)suggestedPageSize;
+ (void)setSuggestedPageSize:;
@end
