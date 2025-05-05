@interface GEOTileRequestBalancer : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)_pruneEmptyRequesters;
- (id)init;
- (void)dealloc;
- (void)_addRequester:tileKeys:priorities:;
- (void)_requester:incrementRunningOperationsCount:;
- (void)requester:updatePriority:tileKey:;
- (void)_startOperationsWithAvailableCount:;
- (void)requester:completedOperations:;
- (void)_startOperations;
- (void)_removeRequester:;
- (void)_requester:updatePriority:tileKey:;
- (void)_requester:removeTileKey:;
- (id)_next_requester;
- (void)removeRequester:;
- (id)_initWithMaxRunningOperationsCount:;
- (id)captureStatePlistWithHints:;
- (id)requesters;
- (void)requester:removeTileKey:;
+ (void)setMaxRunningOperationsCount:;
+ (id)balancerForRequester:tileKeys:priorities:;
+ (unsigned long long)maxRunningOperationsCount;
@end
