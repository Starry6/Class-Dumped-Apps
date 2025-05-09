@interface UIKeyShortcutHUDService : NSObject
@property (nonatomic) _UIOverlayService overlayService;
@property (nonatomic) _UIKeyShortcutHUDClientSession session;
@property (nonatomic) NSTimer scheduledHUDTimer;
@property (nonatomic) _UIKeyShortcutHUDConfiguration scheduledHUDConfiguration;
@property (nonatomic) _UIKeyShortcutHUDDismissalResponse deferredResponse;
@property (nonatomic) _UIKeyShortcutHUDClientSession deferredResponseSession;
@property (nonatomic) NSObject<OS_dispatch_source> deferredResponseTimer;
@property (nonatomic) NSArray scheduledHUDHoverGestureRecognizers;
@property (nonatomic) NSValue scheduledHUDInitialPointerLocation;
@property (nonatomic) _UIKeyShortcutHUDModifierKeyListener modifierKeyListener;
@property (nonatomic) q hudPresentationState;
@property (nonatomic) UIPhysicalKeyboardEvent lastKeyboardEvent;
@property (nonatomic) <UIKeyShortcutHUDMetricsProvider> metricsProvider;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)scheduledHUDTimer;
- (void)setSession:;
- (void)_addPresentationObserversIfNeeded;
- (id)init;
- (void)dealloc;
- (id)scheduledHUDConfiguration;
- (void)_removePresentationObserversIfNeeded;
- (void)setScheduledHUDTimer:;
- (void)keyShortcutHUDDidDismissWithResponse:toOverlayService:;
- (void)_applicationWillResignActive:;
- (long long)hudPresentationState;
- (void)_handleDeferredDismissalResponse:;
- (void)setMetricsProvider:;
- (id)deferredResponseSession;
- (id)deferredResponseTimer;
- (void)_sendSystemHUDPresentationDarwinNotificationIfNeeded;
- (void)setScheduledHUDHoverGestureRecognizers:;
- (void)overlayServiceDidInvalidate:;
- (void)_registerForSystemHUDPresentationDarwinNotifications;
- (void)preventUnintendedSystemHUDPresentationIfNeeded;
- (void)_applicationDidBeginIgnoringInteractionEvents:;
- (void)presentHUD;
- (void)scheduleHUDPresentation;
- (void)modifierKeyListener:didUpdateModifierFlag:;
- (void)_handleSystemHUDPreventUnintendedPresentationDarwinNotificationIfNeeded;
- (id)scheduledHUDInitialPointerLocation;
- (void)modifierKeyListenerDidPressNonModifierKey:;
- (BOOL)_isHUDAllowedToBeScheduledForPresentationState:;
- (void)_registerForSystemHUDPreventUnintendedPresentationDarwinNotificationsIfNeeded;
- (id)scheduledHUDHoverGestureRecognizers;
- (void)_hardwareKeyboardAvailabilityChanged:;
- (void)dismissAllNonSystemHUDs;
- (id)lastKeyboardEvent;
- (BOOL)_isHUDAllowedForConfiguration:;
- (void)_unregisterForScheduledHUDCancellationDarwinNotifications;
- (void)_requestHUDPresentationWithConfiguration:completionHandler:;
- (void)_requestHUDDismissal;
- (void)_handleSystemHUDPresentationDarwinNotification;
- (BOOL)_isHUDAllowedToBePresentedForPresentationState:;
- (BOOL)_isHUDAllowedToAppearForProcess;
- (void)setOverlayService:;
- (void)_handleKeyCommandFromResponse:withSession:;
- (void)_handleScheduledHUDPointerHover:;
- (void)_discardScheduledHUDBookkeeping;
- (id)deferredResponse;
- (void)_requestHUDPresentationIfAllowedWithUnpreparedConfiguration:;
- (BOOL)_isHUDAllowedOverCurrentWindow;
- (id)session;
- (void)handleKeyboardEvent:;
- (void)cancelScheduledHUDPresentationIfNeeded;
- (void).cxx_destruct;
- (void)_registerForScheduledHUDCancellationDarwinNotifications;
- (id)metricsForWindow:;
- (void)_sendSystemHUDPreventUnintendedPresentationDarwinNotificationIfNeeded;
- (void)requestHUDPresentationIntoSearchMode;
- (void)handleTouchEvent:;
- (void)_cancelAllScheduledHUDPresentationsIfNeeded;
- (void)dismissOrCancelHUDPresentationIfNeeded;
- (void)_unregisterForSystemHUDPresentationDarwinNotifications;
- (id)metricsProvider;
- (void)setScheduledHUDInitialPointerLocation:;
- (void)_didTakeScreenshot:;
- (BOOL)_canSummonHUDWithModifierFlag:;
- (void)setDeferredResponseTimer:;
- (void)_handleCancelScheduledHUDPresentationDarwinNotification;
- (void)setDeferredResponseSession:;
- (id)overlayService;
- (BOOL)_isHUDSupportedOnPlatform;
- (void)_requestHUDPresentationWithUnpreparedConfiguration:;
- (void)setScheduledHUDConfiguration:;
- (BOOL)_isHUDAllowedForCurrentResponder;
- (void)setLastKeyboardEvent:;
- (void)setDeferredResponse:;
- (id)modifierKeyListener;
- (void)_unregisterForSystemHUDPreventUnintendedPresentationDarwinNotificationsIfNeeded;
+ (BOOL)_isOOPFeatureEnabled;
+ (id)sharedHUDService;
+ (id)_existingHUDService;
@end
