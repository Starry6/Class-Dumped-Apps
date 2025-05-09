@interface AWEIMCloseFriendChatPushGuideComponent : AWEIMComponentBase
@property (nonatomic) AWEIMPushWithoutInnerPushSheet popUpSheet;
@property (nonatomic) BOOL hasShown;
@property (nonatomic) BOOL didClickOpen;
@property (nonatomic) q pushGuideNoticeIndex;
@property (nonatomic) @? onClose;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)sheetDidDismiss:;
- (id)alertIDForEvent:;
- (long long)alertPriorityForEvent:;
- (BOOL)canShowWithContext:;
- (BOOL)shouldCancelAllOtherPendingAlertsWhenShowedWithContext:;
- (void)showWithCloseCallback:;
- (void)hostVC_willDealloc;
- (void)componentDidMounted:;
- (void)didReceiveNewMessage:reason:;
- (void)openAction;
- (BOOL)didClickOpen;
- (long long)messageListPopupViewStatus;
- (void)messageListPopupViewShow;
- (void)p_setLastShowTime:;
- (id)p_lastTimeKey;
- (void)newInsertMessageAtGloabalIndex:;
- (void)reInsertMessageAtGloabalIndex:;
- (BOOL)p_checkCanShowPushGuideForReceiveMsg:reason:;
- (void)p_showGuideViewByApproveCloseFriend;
- (void)setPopUpSheet:;
- (void)setDidClickOpen:;
- (void)p_outAppNotifyGuideLogWithEventType:;
- (long long)p_notOpenCount;
- (void)p_setNotOpenCount:;
- (BOOL)p_checkCanShowPushGuideForEnterMessageList;
- (void)p_openReceivePushOnlyFromFrends;
- (id)popUpSheet;
- (void)gotoSystemNotificationSettingAdaptIOS15;
- (id)p_outAppNotifyGuideLogParamsWithEventType:;
- (void)setPushGuideNoticeIndex:;
- (BOOL)p_canShowPopupView;
- (BOOL)p_isCloseFriend;
- (long long)pushGuideNoticeIndex;
- (double)p_lastShowTimeStamp;
- (id)p_getConversation;
- (void)p_changeSettingWithField:value:completion:;
- (id)p_notOpenCountKey;
- (void)handleDidBecomeActive:;
- (void).cxx_destruct;
- (void)closeAction;
- (BOOL)hasShown;
- (void)setHasShown:;
- (id)onClose;
- (void)setOnClose:;
+ (BOOL)canCreateComponentWithContext:;
+ (BOOL)p_featureEnableInCunrrentContext:;
@end
