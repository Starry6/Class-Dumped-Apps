@interface IESLiveMultiLinkerBattleModeViewModel : NSObject
@property (nonatomic) Q currentMode;
@property (nonatomic) NSArray linkers;
@property (nonatomic) BOOL battleStartEnabled;
@property (nonatomic) BattleConfigSetting panelBattleConfig;
@property (nonatomic) IESLiveMultiPKModeInfo modeInfo;
@property (nonatomic) IESLiveMultiBattlePrepareUsersViewConfig usersConfig;
@property (nonatomic) <IESLiveMultiLinkerProvider> mLinkerProvider;
@property (nonatomic) NSString toastStr;
@property (nonatomic) Q currentSelectedUsersCount;
@property (nonatomic) BOOL isSelfTeamLayoutRight;
@property (nonatomic) BOOL isAlreadyChangedTeam;
@property (nonatomic) BOOL hasShown;
@property (nonatomic) BOOL canSwitchPKMode;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)canSwitchPKMode;
- (id)linkers;
- (void)setUsersConfig:;
- (id)mLinkerProvider;
- (BOOL)battleStartEnabled;
- (void)changeMode:;
- (void)changeTeamWithCompletion:;
- (unsigned long long)currentSelectedUsersCount;
- (id)initWithDIContext:multiPkMode:canSwitchPKMode:battleConfig:;
- (void)interactAnchorLinkersView:selectedLinkersChange:;
- (void)interactAnchorLinkersViewDidClickChangeGroup:;
- (BOOL)isAlreadyChangedTeam;
- (BOOL)isSameBattleConfig:;
- (BOOL)isSelfTeamLayoutRight;
- (BOOL)isValidModeInfo:;
- (id)modeInfo;
- (void)multiLinkerUserService:didInteractiveListUpdated:;
- (void)onReceivedLinkMultiBattleTeamChangedMessage:;
- (void)openMultiBattle:completion:;
- (id)panelBattleConfig;
- (id)playConfigName;
- (void)requestChangeMultiPKModeTab:;
- (void)setBattleStartEnabled:;
- (void)setCanSwitchPKMode:;
- (void)setCurrentSelectedUsersCount:;
- (void)setIsAlreadyChangedTeam:;
- (void)setIsSelfTeamLayoutRight:;
- (void)setLinkers:;
- (void)setMLinkerProvider:;
- (void)setModeInfo:;
- (void)setPanelBattleConfig:;
- (void)setToastStr:;
- (void)setupModeInfoIfNeeded:;
- (void)setupPersonalLinkers;
- (void)setupTeamLinkers;
- (id)toastStr;
- (void)trackShowIfNeeded;
- (void)trackWithEvent:extraParams:;
- (void)updateBattleStartButtonStatus;
- (id)usersConfig;
- (unsigned long long)currentMode;
- (void).cxx_destruct;
- (void)setCurrentMode:;
- (void)setupData;
- (void)setHasShown:;
- (BOOL)hasShown;
@end
