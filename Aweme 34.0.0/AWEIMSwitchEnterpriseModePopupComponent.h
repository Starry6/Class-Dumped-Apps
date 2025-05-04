@interface AWEIMSwitchEnterpriseModePopupComponent : AWEIMComponentBase
@property (nonatomic) AWEIMSwitchMesssageTabModeEnterprisePopupView popup;
@property (nonatomic) <AWEIMMessageTabPopupViewInterface> messageTabPopupViewInterface;
@property (nonatomic) @? onClose;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)sheetDidClickCloseButton:;
- (void)sheetDidDismiss:;
- (id)alertIDForEvent:;
- (long long)alertPriorityForEvent:;
- (BOOL)canShowWithContext:;
- (BOOL)shouldCancelAllOtherPendingAlertsWhenShowedWithContext:;
- (void)showWithCloseCallback:;
- (void)afterInitialComponentAllResolved:;
- (void)componentDidMounted:;
- (void)setMessageTabPopupViewInterface:;
- (BOOL)canShowPopupView;
- (id)messageTabPopupViewInterface;
- (BOOL)isDisplayingCurrentPopupView;
- (BOOL)canLimitShowWithinTime;
- (void)showSwitchEnterpriseModePopup;
- (void).cxx_destruct;
- (id)popup;
- (void)setPopup:;
- (id)onClose;
- (void)setOnClose:;
@end
