@interface MKPlaceBatchController : NSObject
@property (nonatomic) Q batchSize;
@property (nonatomic) Q minNumberOfItems;
@property (nonatomic) <MKPlaceBatchFetcher> batchFetcher;
@property (nonatomic) <MKPlaceBatchConsumer> batchConsumer;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)batchSize;
- (void)setBatchSize:;
- (void).cxx_destruct;
- (void)didDisplayItemAtIndex:;
- (id)initWithItemIdentifiers:withBatchSize:minimumNumberOfItemBeforeFetching:shouldLoadFirstBatchImmediately:usingBatchFetcher:usingBatchConsumer:displayedItemCount:;
- (void)fetchBatchItemsWithIdentifiers:;
- (void)handleFetchGuidesCompleted:error:usingGuides:;
- (void)buildBatchesFromIdentifiers:;
- (id)batchesForTesting;
- (long long)lastDisplayedIndexForTesting;
- (long long)lastFetchedBatchForTesting;
- (long long)stateForTesting;
- (unsigned long long)minNumberOfItems;
- (void)setMinNumberOfItems:;
- (id)batchFetcher;
- (void)setBatchFetcher:;
- (id)batchConsumer;
- (void)setBatchConsumer:;
@end
