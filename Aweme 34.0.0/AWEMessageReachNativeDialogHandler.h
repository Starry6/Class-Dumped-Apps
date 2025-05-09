@interface AWEMessageReachNativeDialogHandler : NSObject
@property (nonatomic) NSString componentId;
@property (nonatomic) q priority;
@property (nonatomic) AWEMessageReachDialogDataModel dataModel;
@property (nonatomic) AWEMessageReachNativeDialog dialog;
@property (nonatomic) <AWEMessageReachCommonDialogPluginProtocol> plugin;
@property (nonatomic) AWEAlertContext alertContext;
@property (nonatomic) NSTimer showTimeoutTimer;
@property (nonatomic) @? onShowed;
@property (nonatomic) @? onClicked;
@property (nonatomic) @? onClose;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)alertIDForEvent:;
- (long long)alertPriorityForEvent:;
- (BOOL)canShowWithContext:;
- (void)showWithContext:callbackWrapper:;
- (BOOL)shouldCancelAllOtherPendingAlertsWhenShowed;
- (void)setOnClicked:;
- (id)onClicked;
- (id)alertContext;
- (void)setAlertContext:;
- (id)mr_accessIDForEvent:;
- (id)showTimeoutTimer;
- (void)setShowTimeoutTimer:;
- (id)initWithComponentId:priority:dataModel:;
- (void)dismissDialogWithAnimated:withCloseType:withCompletion:;
- (void)p_createPluginIfNeed;
- (BOOL)p_canShowByPlugin;
- (void)p_didShowDialogForPlugin;
- (void)p_addTimerIfNeed;
- (void)p_onShowTimeout;
- (id)onShowed;
- (void)setOnShowed:;
- (void)messageReachNativeDialogAppearFailed:;
- (void)messageReachNativeDialogLoadImageFailed:;
- (void)messageReachNativeDialogAppearSuccess:;
- (void)messageReachNativeDialog:clickActionButton:;
- (void)messageReachNativeDialog:countDownTimeArrived:;
- (void)messageReachNativeDialogClickCloseButton:;
- (void)messageReachNativeDialogClickMask:;
- (void)messageReachNativeDialogDealloc:;
- (void)messageReachNativeDialogDragToDismiss:;
- (void)p_dismissDialogWithOutUIWithCloseType:;
- (id)pluginTrackParamsForEvent:;
- (long long)priority;
- (void)setPriority:;
- (void).cxx_destruct;
- (id)dataModel;
- (id)plugin;
- (void)setDataModel:;
- (void)setPlugin:;
- (id)dialog;
- (void)setDialog:;
- (void)setComponentId:;
- (id)componentId;
- (id)onClose;
- (void)setOnClose:;
@end
