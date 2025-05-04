@interface AWESearchLynxPopupTask : AWESearchPopViewTask
@property (nonatomic) AWESearchLynxPopupManager lynxPopup;
@property (nonatomic) @? onClose;
@property (nonatomic) BOOL isTriggered;
- (BOOL)blockAllAlertWhenNotPreparedWithContext:;
- (BOOL)canShow;
- (void)showWithCloseCallback:;
- (BOOL)shouldCancelAllOtherPendingAlertsWhenShowed;
- (void)onAlertCanceled;
- (void)setIsTriggered:;
- (id)lynxPopup;
- (void)showLynxPopupWithUrl:;
- (void)removeTaskWithType:;
- (void)setLynxPopup:;
- (void).cxx_destruct;
- (BOOL)isTriggered;
- (id)onClose;
- (void)setOnClose:;
@end
