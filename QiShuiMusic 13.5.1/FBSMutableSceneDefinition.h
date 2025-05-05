@interface FBSMutableSceneDefinition : FBSSceneDefinition
@property (nonatomic) FBSSceneIdentity identity;
@property (nonatomic) FBSSceneClientIdentity clientIdentity;
@property (nonatomic) FBSSceneSpecification specification;
- (id)copyWithZone:;
@end
