@interface FBSceneClientHandle : NSObject
@property (nonatomic) FBProcess legacyProcess;
@property (nonatomic) FBSSceneClientIdentity identity;
@property (nonatomic) RBSProcessHandle processHandle;
@property (nonatomic) NSString bundleIdentifier;
- (id)bundleIdentifier;
- (id)identity;
- (id)processHandle;
- (void).cxx_destruct;
- (id)legacyProcess;
- (id)description;
+ (id)handleForScene:clientProcess:;
@end
