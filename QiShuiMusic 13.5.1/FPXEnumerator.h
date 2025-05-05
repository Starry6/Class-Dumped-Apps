@interface FPXEnumerator : NSObject
@property (nonatomic) <FPXEnumeratorObserver> observer;
@property (nonatomic) FPItemID observedItemID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)forceItemUpdate:;
- (id)initWithObservedItemID:domainContext:vendorEnumerator:nsFileProviderRequest:observer:isWorkingSetEnum:queue:;
- (void)currentSyncAnchorWithCompletion:;
- (void)alternateContentsWereUpdatedAtURL:forItem:;
- (void)forceAddFileURLsForItems:;
- (void)keepAliveConnectionForRegisteredObserver:;
- (id)observedItemID;
- (void)_invalidate;
- (id)vendorEnumerator;
- (void)enumerateChangesFromToken:suggestedBatchSize:reply:;
- (void)invalidateVendorEnumeration;
- (void).cxx_destruct;
- (id)description;
- (void)enumerateItemsFromPage:suggestedPageSize:reply:;
- (void)invalidate;
- (id)observer;
@end
