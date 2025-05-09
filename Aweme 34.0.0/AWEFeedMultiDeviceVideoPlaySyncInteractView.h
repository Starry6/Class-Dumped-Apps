@interface AWEFeedMultiDeviceVideoPlaySyncInteractView : NSObject
@property (nonatomic) @? completionBlock;
@property (nonatomic) @? manuallyDismissCompletionBlock;
@property (nonatomic) DUXAlertDialog alertDialog;
@property (nonatomic) DUXBottomNotification bottomNotification;
@property (nonatomic) NSTimer alertDialogAutoDismissTimer;
@property (nonatomic) <AWEFeedMultiDeviceVideoPlaySyncInteractDelegateProtocol> interactDelegate;
@property (nonatomic) BOOL interactViewIsShowing;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)alertDialogDidClickMaskArea:;
- (void)alertDialogDidDismiss:;
- (id)bottomNotification;
- (void)setBottomNotification:;
- (void)setAlertDialog:;
- (id)alertDialog;
- (void)setManuallyDismissCompletionBlock:;
- (void)setInteractViewIsShowing:;
- (void)showNotificationFromeDeviceType:completion:;
- (id)getFromeDeviceType:;
- (void)showDialogWithModel:completion:;
- (void)onPlayButtonClicked;
- (void)trackForPopupClick:;
- (void)onSettinsLinkClicked;
- (void)cancelVideoSyncPlay;
- (void)setupAutoHideTimerForAlertDialog;
- (void)trackForToastClick:fromeDeviceType:;
- (id)manuallyDismissCompletionBlock;
- (void)setAlertDialogAutoDismissTimer:;
- (id)alertDialogAutoDismissTimer;
- (id)interactDelegate;
- (void)hideDialogManually:;
- (void)showInteractViewWithModel:fromeDeviceType:completion:;
- (void)setInteractDelegate:;
- (BOOL)interactViewIsShowing;
- (void)setCompletionBlock:;
- (id)completionBlock;
- (void).cxx_destruct;
@end
