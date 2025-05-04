@interface AWEIMMessageTabStorageCleanPromptPopupComponent : AWEIMComponentBase
@property (nonatomic) UIViewController popup;
@property (nonatomic) BOOL hasPoppedupStorageCleanPromptPage;
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
- (BOOL)hasPoppedupStorageCleanPromptPage;
- (void)setHasPoppedupStorageCleanPromptPage:;
- (void).cxx_destruct;
- (id)popup;
- (void)setPopup:;
@end
