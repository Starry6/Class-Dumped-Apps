@interface AWEEntertainmentTabPublicAlertManager : NSObject
@property (nonatomic) DUXBasicSheet sheet;
@property (nonatomic) @? onClose;
@property (nonatomic) <AWEEntertainmentTabPublicAlertManagerDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)sheetDidDismiss:;
- (id)alertIDForEvent:;
- (long long)alertPriorityForEvent:;
- (BOOL)canShow;
- (void)showWithCloseCallback:;
- (BOOL)shouldCancelAllOtherPendingAlertsWhenShowed;
- (void)didTapPublicButton;
- (void)didTapPrivateButton;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
- (id)sheet;
- (id)onClose;
- (void)setOnClose:;
- (void)setSheet:;
@end
