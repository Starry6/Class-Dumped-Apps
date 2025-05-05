@interface CKDiscoverUserIdentitiesOperation : CKOperation
@property (nonatomic) NSMutableSet discoveredLookupInfos;
@property (nonatomic) <CKDiscoverUserIdentitiesOperationCallbacks> clientOperationCallbackProxy;
@property (nonatomic) CKDiscoverUserIdentitiesOperationInfo operationInfo;
@property (nonatomic) NSArray userIdentityLookupInfos;
@property (nonatomic) @? userIdentityDiscoveredBlock;
@property (nonatomic) @? discoverUserIdentitiesCompletionBlock;
- (void)_finishOnCallbackQueueWithError:;
- (id)init;
- (void)performCKOperation;
- (void)fillFromOperationInfo:;
- (void).cxx_destruct;
- (void)fillOutOperationInfo:;
- (BOOL)CKOperationShouldRun:;
- (id)initWithUserIdentityLookupInfos:;
- (id)discoverUserIdentitiesCompletionBlock;
- (void)setDiscoverUserIdentitiesCompletionBlock:;
- (void)setUserIdentityDiscoveredBlock:;
- (id)userIdentityDiscoveredBlock;
- (id)userIdentityLookupInfos;
- (void)setUserIdentityLookupInfos:;
- (void)handleUserIdentityDiscoveryForLookupInfo:userIdentity:;
- (id)discoveredLookupInfos;
- (void)setDiscoveredLookupInfos:;
@end
