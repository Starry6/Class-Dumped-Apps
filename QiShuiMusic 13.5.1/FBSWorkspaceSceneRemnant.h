@interface FBSWorkspaceSceneRemnant : NSObject
@property (nonatomic) FBSSceneIdentity identity;
@property (nonatomic) FBSSceneParameters parameters;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)identity;
- (id)initWithBSXPCCoder:;
- (id)parameters;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:;
- (id)_initWithIdentity:parameters:;
+ (BOOL)supportsBSXPCSecureCoding;
@end
