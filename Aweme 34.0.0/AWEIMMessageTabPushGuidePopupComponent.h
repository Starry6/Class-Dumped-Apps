@interface AWEIMMessageTabPushGuidePopupComponent : AWEIMComponentBase
@property (nonatomic) <AWEIMMessageTabPopupViewInterface> messageTabPopupViewInterface;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)alertIDForEvent:;
- (long long)alertPriorityForEvent:;
- (BOOL)canShowWithContext:;
- (double)showTimeoutWithContext:;
- (BOOL)shouldCancelAllOtherPendingAlertsWhenShowedWithContext:;
- (void)showWithCloseCallback:;
- (void)afterInitialComponentAllResolved:;
- (void)setMessageTabPopupViewInterface:;
- (BOOL)canShowPopupView;
- (id)messageTabPopupViewInterface;
- (void)showPopupView;
- (BOOL)isDisplayingCurrentPopupView;
- (BOOL)canLimitShowWithinTime;
- (void).cxx_destruct;
@end
