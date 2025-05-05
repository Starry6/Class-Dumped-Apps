@interface FBSceneUpdateContext : NSObject
@property (nonatomic) NSString sceneID;
@property (nonatomic) Q transactionID;
@property (nonatomic) FBSSceneSettings settings;
@property (nonatomic) FBSSceneSettingsDiff settingsDiff;
@property (nonatomic) FBSSceneTransitionContext transitionContext;
@property (nonatomic) <NSObject><NSCopying> clientContext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)transactionID;
- (id)clientContext;
- (id)transitionContext;
- (id)settings;
- (id)sceneID;
- (id)settingsDiff;
- (id)succinctDescriptionBuilder;
- (id)debugDescription;
- (BOOL)isClientLifecycleExternallyManaged;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)description;
- (void)setClientContext:;
- (id)descriptionBuilderWithMultilinePrefix:;
- (id)descriptionWithMultilinePrefix:;
+ (id)contextWithSceneID:transactionID:settings:settingsDiff:transitionContext:;
@end
