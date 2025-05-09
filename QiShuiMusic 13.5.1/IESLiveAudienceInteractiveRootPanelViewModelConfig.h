@interface IESLiveAudienceInteractiveRootPanelViewModelConfig : NSObject
@property (nonatomic) Q scene;
@property (nonatomic) HTSEventContext eventContext;
@property (nonatomic) <IESLiveRoomServiceAdapter> room;
@property (nonatomic) <IESLiveAudienceInteractiveSettingsAction> settingsActionDelegate;
@property (nonatomic) BOOL isTask;
@property (nonatomic) NSString activityName;
@property (nonatomic) <IESLiveDynamicActivityProvider> activityProvider;
@property (nonatomic) BOOL enableInviteButton;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSString changePositionTitle;
@property (nonatomic) q itemType;
@property (nonatomic) BOOL disabledSort;
@property (nonatomic) q seatIndex;
@property (nonatomic) BOOL isFirstInit;
@property (nonatomic) NSString settingPanelTitle;
@property (nonatomic) NSString applyTitle;
@property (nonatomic) IESLiveAudienceInteractTopRightItem topRightItem;
@property (nonatomic) BOOL newFriendInviteStyle;
@property (nonatomic) BOOL needLandScape1v6Style;
- (void)setIsFirstInit:;
- (id)applyTitle;
- (id)changePositionTitle;
- (BOOL)disabledSort;
- (BOOL)enableInviteButton;
- (id)enterFrom;
- (BOOL)isFirstInit;
- (BOOL)isTask;
- (BOOL)needLandScape1v6Style;
- (BOOL)newFriendInviteStyle;
- (long long)seatIndex;
- (void)setApplyTitle:;
- (void)setChangePositionTitle:;
- (void)setDisabledSort:;
- (void)setEnableInviteButton:;
- (void)setEnterFrom:;
- (void)setEventContext:;
- (void)setIsTask:;
- (void)setNeedLandScape1v6Style:;
- (void)setNewFriendInviteStyle:;
- (void)setSeatIndex:;
- (void)setSettingPanelTitle:;
- (void)setSettingsActionDelegate:;
- (void)setTopRightItem:;
- (id)settingPanelTitle;
- (id)settingsActionDelegate;
- (id)topRightItem;
- (void)setItemType:;
- (id)init;
- (void)setScene:;
- (unsigned long long)scene;
- (long long)itemType;
- (void).cxx_destruct;
- (id)eventContext;
- (id)room;
- (void)setRoom:;
- (id)activityName;
- (void)setActivityName:;
- (id)activityProvider;
- (void)setActivityProvider:;
@end
