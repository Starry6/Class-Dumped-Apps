@interface FPXItemsObserver : FPXObserver
@property (nonatomic) @? finishedBlock;
@property (nonatomic) NSData syncAnchor;
@property (nonatomic) q suggestedPageSize;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setSyncAnchor:;
- (id)syncAnchor;
- (void)didEnumerateItems:;
- (void)finishEnumeratingWithError:;
- (void)setFinishedBlock:;
- (void).cxx_destruct;
- (id)finishedBlock;
- (id)initWithObservedItemID:domainContext:nsFileProviderRequest:;
- (long long)suggestedPageSize;
- (void)setSuggestedPageSize:;
- (void)finishEnumeratingUpToPage:;
@end
