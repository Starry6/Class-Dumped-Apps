@interface FBSMutableSceneIdentity : FBSSceneIdentity
@property (nonatomic) NSString internalWorkspaceIdentifier;
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString workspaceIdentifier;
- (void)setWorkspaceIdentifier:;
- (void)setInternalWorkspaceIdentifier:;
- (void)setIdentifier:;
- (id)copyWithZone:;
@end
