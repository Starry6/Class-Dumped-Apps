@interface AWEIMDefaultLandingMsgTabGuideComponent : AWEIMComponentBase
@property (nonatomic) UIViewController popup;
@property (nonatomic) BOOL hasPoppedupGuidePage;
@property (nonatomic) <AWEIMMessageTabPopupViewInterface> messageTabPopupViewInterface;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)alertIDForEvent:;
- (long long)alertPriorityForEvent:;
- (BOOL)canShowWithContext:;
- (BOOL)shouldCancelAllOtherPendingAlertsWhenShowedWithContext:;
- (void)showWithCloseCallback:;
- (void)afterInitialComponentAllResolved:;
- (void)setMessageTabPopupViewInterface:;
- (BOOL)hasPoppedupGuidePage;
- (void)setHasPoppedupGuidePage:;
- (BOOL)canShowPopupView;
- (id)messageTabPopupViewInterface;
- (void)showPopupView;
- (BOOL)isDisplayingCurrentPopupView;
- (BOOL)canLimitShowWithinTime;
- (void).cxx_destruct;
- (id)popup;
- (void)setPopup:;
+ (BOOL)canCreateComponentWithContext:;
@end
