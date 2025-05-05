@interface FBSSceneEvent : FBSSceneMessage
@property (nonatomic) q source;
@property (nonatomic) FBSSceneSettingsDiff settingsDiff;
@property (nonatomic) FBSSceneClientSettingsDiff clientSettingsDiff;
@property (nonatomic) FBSSceneTransitionContext transitionContext;
@property (nonatomic) NSSet actions;
- (id)init;
- (id)transitionContext;
- (id)settingsDiff;
- (id)clientSettingsDiff;
- (void)setSettingsDiff:;
- (id)succinctDescriptionBuilder;
- (void)setTransitionContext:;
- (void)setClientSettingsDiff:;
- (id)actions;
- (void).cxx_destruct;
- (long long)source;
- (id)succinctDescription;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:;
- (void)setSource:;
- (id)descriptionWithMultilinePrefix:;
@end
