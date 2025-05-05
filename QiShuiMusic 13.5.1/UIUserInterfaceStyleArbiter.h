@interface UIUserInterfaceStyleArbiter : NSObject
@property (nonatomic) q currentStyle;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)currentStyle;
- (void)_updateScreenDimUpdatingStyle:;
- (id)nextTransition;
- (void)toggleCurrentStyle;
- (void)_setWatchesScreenDimUsingBackboardNotification:;
- (void)backlight:didCompleteUpdateToState:forEvent:;
- (void)_updateCurrentStyleAndNotify:forReason:;
- (void)_logChangeEventWithNewMode:oldMode:newStyle:oldStyle:reason:;
- (void)_updateCurrentStyleForReason:;
- (void)_logArbiterDecisionToBiomeWithNewStyle:reason:;
- (void)_logPeriodicEvent;
- (void).cxx_destruct;
- (void)_backlightStateUpdated:updateStyle:;
- (long long)_proposedStyleForCurrentMode;
- (void)toggleCurrentStyleWithOverrideTiming:;
- (BOOL)_updateControllersWithOldModeValue:newModeValue:;
- (id)_init;
- (void)_setWatchesBacklightState:;
- (void)_setWatchesScreenDim:;
- (void)userInterfaceStyleModeDidChange:;
+ (id)sharedInstance;
@end
