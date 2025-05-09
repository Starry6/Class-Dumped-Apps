@interface UITextSelectionInteraction : UITextInteraction
- (BOOL)interaction_gestureRecognizer:shouldReceiveTouch:;
- (BOOL)interaction_gestureRecognizerShouldBegin:;
- (void)tapAndAHalf:;
- (id)initWithMode:;
- (void)_createGestureTuningIfNecessary;
- (BOOL)_usesPencilSelectionBehaviorForGesture:;
- (BOOL)_usesIndirectSelectionBehavior;
- (void)finishSetup;
- (void)tappedToPositionCursorWithGesture:atPoint:granularity:completionHandler:;
- (void)_showSelectionCommandsIfApplicableAfterDelay:;
- (void)tappedToUpdateSelectionWithGesture:atPoint:granularity:completionHandler:;
- (BOOL)gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
- (BOOL)gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:;
- (id)_transientState;
- (void)toggleSelectionCommands;
- (void)didMoveToView:;
- (BOOL)_isNowWithinRepeatedTapTime;
- (void)_checkForRepeatedTap:gestureLocationOut:;
- (void)willUpdateSelectionWithGesture:;
- (void)_updateTapGestureHistoryWithLocation:;
- (void)confirmMarkedText:;
- (BOOL)shouldHandleOneFingerTapInUneditable:;
- (void)_applyTransientState:;
- (void)didUpdateSelectionWithGesture:;
- (long long)handOffGranularity;
- (BOOL)_isShiftKeyBeingHeldForGesture:;
- (void).cxx_destruct;
- (void)oneFingerTapSelectsAll:;
- (void)setHybridSelectionWithPoint:;
- (BOOL)_isWithinRepeatedTapTimeForTouch:;
- (BOOL)_hasTextAlternativesAtLocation:;
- (BOOL)_shouldAllowEnforcedTouchTypeForTouch:forGestureRecognizer:;
- (BOOL)_isRepeatedTap:gestureLocationOut:;
- (void)_handleMultiTapGesture:;
- (long long)_textGranularityForNumberOfTaps:;
- (id)initWithMode:indirect:;
- (void)twoFingerRangedSelectGesture:;
- (void)tappedToSelectTextWithGesture:atPoint:granularity:completionHandler:;
@end
