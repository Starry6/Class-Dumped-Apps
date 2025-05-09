@interface AWEPublishRuleReminderComponent : ACCFeatureComponent
@property (nonatomic) <ACCRecordSwitchModeService> switchModeService;
@property (nonatomic) <ACCRecordAutoPopupService> autoPopupService;
@property (nonatomic) <ACCRecordAuthService> authService;
@property (nonatomic) AWERuleReminderInfoModel ruleReminderInfo;
@property (nonatomic) BOOL hasCheckedShow;
@property (nonatomic) BOOL hasShowedAuthView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMount;
- (void)bindServices:;
- (id)switchModeService;
- (void)setSwitchModeService:;
- (id)authService;
- (void)setAuthService:;
- (id)autoPopupService;
- (void)setRuleReminderInfo:;
- (void)showPublishRuleHintIfNeed:;
- (id)ruleReminderInfo;
- (void)trackForRuleReminderUserConfirm:;
- (void)trackForRuleReminderShow:;
- (BOOL)shouldShowPublishRuleHint;
- (void)requestCurrentUserPunishDetailV2:;
- (void)requestCurrentUserPunishDetail:;
- (unsigned long long)registerPopupType;
- (void)popupServiceAutoShowIfNeedWithResultCompletion:;
- (void)setAutoPopupService:;
- (BOOL)hasCheckedShow;
- (void)setHasCheckedShow:;
- (BOOL)hasShowedAuthView;
- (void)setHasShowedAuthView:;
- (void).cxx_destruct;
@end
