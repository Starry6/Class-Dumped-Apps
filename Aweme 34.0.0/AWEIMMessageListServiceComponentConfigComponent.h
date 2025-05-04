@interface AWEIMMessageListServiceComponentConfigComponent : AWEIMComponentBase
@property (nonatomic) AWEIMServiceComponentConfig serviceComponentConfig;
@property (nonatomic) NSArray serviceComponentConfigDiffArray;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (id)p_resolvedExtraParams:;
- (id)serviceComponentConfig;
- (void)setServiceComponentConfig:;
- (void)p_sortComponentItemConfigsUsingPriority;
- (void)p_filterNotShowComponentItemConfigs;
- (void)p_supplementComponentInfoForComponentItemConfigs;
- (void)p_requestDynamicComponentItemConfigsWithConversation:completion:;
- (id)getServiceComponentConfigTaskWithScene:DiffScene:;
- (id)getServiceComponentConfigWithConversation:scene:;
- (id)getDiffServiceComponentConfigsWithConversation:scene:;
- (void)setServiceComponentConfigDiffArray:;
- (id)serviceComponentConfigDiffArray;
- (void)p_updateServiceComponentConfigUsingDiffConfigWithScene:DiffScene:;
- (void)p_filterDynamicComponentItemConfigs;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
