@interface FPMaterializedSetEnumerator : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithManager:;
- (void).cxx_destruct;
- (void)invalidate;
- (void)currentSyncAnchorWithCompletionHandler:;
- (void)enumerateChangesForObserver:fromSyncAnchor:;
- (void)enumerateItemsForObserver:startingAtPage:;
@end
