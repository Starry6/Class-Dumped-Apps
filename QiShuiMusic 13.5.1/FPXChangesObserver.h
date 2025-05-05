@interface FPXChangesObserver : FPXObserver
@property (nonatomic) @? finishedBlock;
@property (nonatomic) q suggestedBatchSize;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithObservedItemID:domainContext:previousChangeToken:nsFileProviderRequest:;
- (void)finishEnumeratingWithError:;
- (void)didUpdateItems:;
- (void)finishEnumeratingChangesUpToSyncAnchor:moreComing:;
- (void)setSuggestedBatchSize:;
- (void)setFinishedBlock:;
- (void).cxx_destruct;
- (id)finishedBlock;
- (id)initWithObservedItemID:domainContext:nsFileProviderRequest:;
- (long long)suggestedBatchSize;
- (void)didDeleteItemsWithIdentifiers:;
@end
