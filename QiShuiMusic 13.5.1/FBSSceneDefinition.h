@interface FBSSceneDefinition : NSObject
@property (nonatomic) FBSSceneIdentity identity;
@property (nonatomic) FBSSceneClientIdentity clientIdentity;
@property (nonatomic) FBSSceneSpecification specification;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)specification;
- (void)setIdentity:;
- (void)setSpecification:;
- (id)identity;
- (id)succinctDescriptionBuilder;
- (unsigned long long)hash;
- (id)clientIdentity;
- (BOOL)isValid;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)description;
- (void)setClientIdentity:;
- (id)mutableCopyWithZone:;
- (id)descriptionBuilderWithMultilinePrefix:;
- (BOOL)isEqual:;
- (id)descriptionWithMultilinePrefix:;
- (id)copyWithZone:;
+ (id)definition;
@end
