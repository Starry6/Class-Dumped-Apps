@interface IESLiveRevenueInteractSettingViewModel : NSObject
@property (nonatomic) NSDictionary settings;
@property (nonatomic) Q type;
@property (nonatomic) IESLiveRevenueInteractApi revenueInteractApi;
@property (nonatomic) HTSLiveInteractiveAPIV2 interactAPI;
@property (nonatomic) Q fromType;
@property (nonatomic) Q scene;
- (id)baseTrackParams;
- (void)setInteractAPI:;
- (void)addDefaultSettings;
- (void)addResetScoreSettingItemIfNeeded;
- (void)bindAction;
- (void)clearInteractScore:;
- (id)initWithDIContext:scene:fromType:;
- (id)interactAPI;
- (id)revenueInteractApi;
- (void)setInteractScoreShowStatus:callback:;
- (void)setRevenueInteractApi:;
- (void)trackDefualtLargeLayoutSettingClicked:;
- (void)trackDefualtLargeLayoutSettingShow;
- (void)trackInteractSettingPanelClicked:;
- (void)trackInteractSettingPanelShow;
- (void)trackLinkerSettingClicked:isToOpen:;
- (void)updateInteractScoreSwitchWithValue:;
- (void)updateInteractSettingWithAction:cellType:cellItem:;
- (id)settings;
- (void)setSettings:;
- (void)setType:;
- (id)getChannelID;
- (unsigned long long)scene;
- (unsigned long long)type;
- (void).cxx_destruct;
- (unsigned long long)fromType;
@end
