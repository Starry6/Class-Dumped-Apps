@interface IESLiveInteractionSettingsFragment : IESLiveRoomComponent
@property (nonatomic) <IESLiveSocialInteractiveRouter> socialRouter;
@property (nonatomic) IESliveAudienceInteractPanelManager panelManager;
@property (nonatomic) IESLiveInteractionSettings interactionSettings;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentCreate;
- (void)currentLayoutDidChangedFrom:to:;
- (void)componentBindService;
- (void)componentMount;
- (void)componentUnmount;
- (void)fetchAudienceInteractiveSettingsWithCompletion:isLocalData:;
- (void)injectPanelManager:;
- (id)panelManager;
- (void)popUpSettingsPanelWithSource:;
- (void)setPanelManager:;
- (void)setSocialRouter:;
- (id)socialRouter;
- (void)updateAudienceInteractiveSettingType:on:completion:;
- (void).cxx_destruct;
- (id)interactionSettings;
- (void)setInteractionSettings:;
+ (BOOL)isMixed;
+ (BOOL)componentShouldActive:;
@end
