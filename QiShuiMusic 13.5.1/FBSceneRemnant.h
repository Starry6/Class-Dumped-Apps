@interface FBSceneRemnant : NSObject
@property (nonatomic) FBWorkspace _workspace;
@property (nonatomic) BOOL _invalidated;
@property (nonatomic) FBSSceneClientSettings _clientSettings;
@property (nonatomic) BSSimpleAssertion _assertion;
@property (nonatomic) FBSSceneDefinition definition;
@property (nonatomic) FBSSceneSettings lastSettings;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)definition;
- (id)init;
- (void)dealloc;
- (id)lastSettings;
- (void).cxx_destruct;
- (id)description;
- (void)invalidate;
- (id)_assertion;
- (id)_workspace;
- (id)_clientSettings;
- (id)_initWithIdentity:client:workspace:parameters:assertionQueue:assertion:;
- (BOOL)_hasBeenInvalidated;
@end
