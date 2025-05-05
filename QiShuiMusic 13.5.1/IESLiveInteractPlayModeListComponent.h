@interface IESLiveInteractPlayModeListComponent : IESLiveInteractComponentBase
@property (nonatomic) <IESLiveSocialInteractiveRouter> socialRouter;
@property (nonatomic) NSArray playModeList;
@property (nonatomic) HTSLiveApi API;
@property (nonatomic) BOOL enableShowPlayModeEntranceOnSettingsPanel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentBindContext;
- (void)componentDidChangedFromLayout:toLayout:;
- (void)componentMount;
- (id)createPlayModeConfigurationsWithSource:;
- (BOOL)enableShowPlayModeEntranceOnSettingsPanel;
- (void)fetchPlayModeListWithCompletion:;
- (id)playModeList;
- (void)popUpPlayModeSelectionPanelWithSource:ignoreLocalCache:;
- (void)setPlayModeList:;
- (void)setSocialRouter:;
- (id)socialRouter;
- (void).cxx_destruct;
- (id)API;
- (void)setAPI:;
@end
