@interface FPPendingSetEnumerator : NSObject
@property (nonatomic) NSFileProviderDomainVersion domainVersion;
@property (nonatomic) double refreshInterval;
@property (nonatomic) BOOL maximumSizeReached;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithManager:;
- (double)refreshInterval;
- (void).cxx_destruct;
- (id)domainVersion;
- (void)invalidate;
- (void)currentSyncAnchorWithCompletionHandler:;
- (void)enumerateChangesForObserver:fromSyncAnchor:;
- (void)enumerateItemsForObserver:startingAtPage:;
- (BOOL)isMaximumSizeReached;
@end
