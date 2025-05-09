@interface AWEMessageReachLynxDialogHandler : NSObject
@property (nonatomic) NSString componentId;
@property (nonatomic) q priority;
@property (nonatomic) AWEMessageReachDialogDataModel dataModel;
@property (nonatomic) <AWEMessageReachCommonDialogPluginProtocol> plugin;
@property (nonatomic) AWEAlertContext alertContext;
@property (nonatomic) BDXBridgeEventSubscriber subscriber;
@property (nonatomic) UIView<BDXViewContainerProtocol> lynxContainer;
@property (nonatomic) NSTimer showTimeoutTimer;
@property (nonatomic) @? onShowed;
@property (nonatomic) @? onClicked;
@property (nonatomic) @? onClose;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)containerDidClose:;
- (id)alertIDForEvent:;
- (long long)alertPriorityForEvent:;
- (BOOL)canShowWithContext:;
- (void)showWithContext:callbackWrapper:;
- (void)prepareWithContext:onCompletion:;
- (BOOL)blockAllAlertWhenNotPreparedWithContext:;
- (double)prepareTimeoutWithContext:;
- (void)prepareTimeoutCompletedWithContext:;
- (BOOL)shouldCancelAllOtherPendingAlertsWhenShowed;
- (void)setOnClicked:;
- (id)onClicked;
- (id)lynxContainer;
- (id)alertContext;
- (void)setAlertContext:;
- (void)setLynxContainer:;
- (id)mr_accessIDForEvent:;
- (id)showTimeoutTimer;
- (void)setShowTimeoutTimer:;
- (id)initWithComponentId:priority:dataModel:;
- (void)p_unsubscribeBridgeEvent;
- (id)p_commonParamsWithContext:;
- (void)p_createPluginIfNeed;
- (BOOL)p_canShowByPlugin;
- (void)p_closeDialog:;
- (void)p_didShowDialogForPlugin;
- (void)p_addTimerIfNeed;
- (void)p_trackClickEventWithActionType:;
- (void)p_trackCloseEventWithReason:;
- (void)p_trackCloseEventWithCloseType:;
- (void)p_onShowTimeout;
- (id)onShowed;
- (void)setOnShowed:;
- (void)dealloc;
- (id)subscriber;
- (void)setSubscriber:;
- (long long)priority;
- (void)setPriority:;
- (void).cxx_destruct;
- (id)dataModel;
- (id)plugin;
- (void)setDataModel:;
- (void)setPlugin:;
- (void)setComponentId:;
- (id)componentId;
- (id)onClose;
- (void)setOnClose:;
@end
