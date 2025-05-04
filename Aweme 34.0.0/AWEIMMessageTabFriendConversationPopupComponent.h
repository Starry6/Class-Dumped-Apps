@interface AWEIMMessageTabFriendConversationPopupComponent : AWEIMComponentBase
@property (nonatomic) <AWEIMMessageTabFriendConversationBannerInterface> bannerService;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) @? onClose;
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
- (BOOL)canShowPopupView;
- (id)messageTabPopupViewInterface;
- (void)showPopupView;
- (BOOL)isDisplayingCurrentPopupView;
- (BOOL)canLimitShowWithinTime;
- (void)setBannerService:;
- (id)bannerService;
- (BOOL)isShowing;
- (void).cxx_destruct;
- (void)setIsShowing:;
- (id)onClose;
- (void)setOnClose:;
@end
