@interface AWEProfileFriendEntranceMovePopoverAlert : AWEProfileGuidePopoverBaseAlert
@property (nonatomic) <AWEProfileGuidePopoverHelperProtocol> popoverHelper;
@property (nonatomic) Q alertState;
@property (nonatomic) AWEBinding stateBinding;
@property (nonatomic) NSMutableSet shownUser;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogoutWithUid:;
- (id)stateBinding;
- (void)setStateBinding:;
- (void)popoverHelperDidInvokeOnclose:;
- (id)popoverHelper;
- (void)setPopoverHelper:;
- (id)shownUser;
- (void)p_startPipelineWithHost:;
- (void)p_handleState:;
- (void)p_showMateAlertIfNeededWithHostView:showCallback:dismissCallback:;
- (void)p_showMutualAlertIfNeededWithHostView:showCallback:dismissCallback:;
- (void)p_showAlertWithConfig:popoverConfig:hostView:showCallback:dismissCallback:confirmCallback:;
- (void)showAlertIfNeededWithHostView:user:;
- (void)setShownUser:;
- (void).cxx_destruct;
- (unsigned long long)alertState;
- (void)setAlertState:;
+ (id)p_mateConfig;
+ (id)p_mutualConfig;
+ (id)sharedInstance;
@end
