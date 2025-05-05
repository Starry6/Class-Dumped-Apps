@interface IESLiveSeatWidgetComponent : IESLiveInteractComponentBase
@property (nonatomic) IESLiveSeatWidgeResourceManager resourceManager;
@property (nonatomic) NSDictionary lastExtra;
@property (nonatomic) UIView battlerRoleChangeIconView;
@property (nonatomic) BOOL isValidDynamicLynxVersion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)calculateIconFrameToPlayground:;
- (id)battlerRoleChangeIconView;
- (void)componentBindContext;
- (void)componentMount;
- (void)componentUnmount;
- (void)doIconMoveAnimationWithExtra:completion:;
- (BOOL)enableSeatWidgetComponent;
- (id)getCurrentUIAdaptor;
- (void)getEffectWithName:complete:;
- (BOOL)isValidDynamicLynxVersion;
- (id)lastExtra;
- (BOOL)mvpSeatWidgetComponentEnable;
- (void)p_doIconChangeAnimationWithWidgetUrl:toUid:fromUid:completion:;
- (void)setBattlerRoleChangeIconView:;
- (void)setIsValidDynamicLynxVersion:;
- (void)setLastExtra:;
- (void).cxx_destruct;
- (id)resourceManager;
- (void)setResourceManager:;
@end
