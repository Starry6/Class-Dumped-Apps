@interface BSXPCServiceConnectionProxy<BKSMousePointerServiceClientToServerInterface> : BSXPCServiceConnectionProxy
- (id)setGlobalPointerEventRoutes:forDisplay:;
- (id)invalidateButtonDownPointerRepositionAssertionWithUniqueIdentifier:onDisplay:;
- (id)acquireButtonDownPointerRepositionAssertionWithUniqueIdentifier:forReason:contextRelativePointerPosition:onDisplay:restrictingToPID:;
- (id)applyAssertionParametersOnDisplay:withOptionsMask:;
- (id)setMousePointerPreferenceObservationEnabled:;
- (id)setMousePointerDeviceObservationEnabled:;
- (id)setPointerPosition:onDisplay:withAnimationParameters:;
- (id)getHitTestContextsAtPoint:withAdditionalContexts:onDisplay:withCompletion:;
- (id)setContextRelativePointerPosition:onDisplay:withAnimationParameters:restrictingToPID:;
- (id)setGlobalPointerPosition:;
- (id)preferencesForDevice:;
- (id)globalDevicePreferences;
- (id)setPreferences:forDevice:;
- (id)setGlobalDevicePreferences:;
- (id)setContextRelativePointerPosition:withInitialVelocity:onDisplay:withDecelerationRate:restrictingToPID:;
- (id)globalPointerPosition;
@end
