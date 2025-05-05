@interface CKDiscoverAllUserIdentitiesOperation : CKOperation
@property (nonatomic) NSMutableDictionary identityToContactIdentifiers;
@property (nonatomic) <CKDiscoverAllUserIdentitiesOperationCallbacks> clientOperationCallbackProxy;
@property (nonatomic) CKDiscoverUserIdentitiesOperationInfo operationInfo;
@property (nonatomic) @? userIdentityDiscoveredBlock;
@property (nonatomic) @? discoverAllUserIdentitiesCompletionBlock;
- (void)_finishOnCallbackQueueWithError:;
- (id)activityCreate;
- (id)init;
- (void)performCKOperation;
- (void).cxx_destruct;
- (BOOL)CKOperationShouldRun:;
- (void)setUserIdentityDiscoveredBlock:;
- (id)discoverAllUserIdentitiesCompletionBlock;
- (void)setDiscoverAllUserIdentitiesCompletionBlock:;
- (void)handleUserIdentityDiscovery:;
- (id)userIdentityDiscoveredBlock;
- (id)identityToContactIdentifiers;
- (void)setIdentityToContactIdentifiers:;
+ (Class)operationInfoClass;
@end
