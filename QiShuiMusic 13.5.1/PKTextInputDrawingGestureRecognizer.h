@interface PKTextInputDrawingGestureRecognizer : UIGestureRecognizer
@property (nonatomic) UITouch drawingTouch;
@property (nonatomic) BOOL drawingTargetIsDrawing;
@property (nonatomic) q strokeAcceptanceState;
@property (nonatomic) q longPressState;
@property (nonatomic) q panState;
@property (nonatomic) q panDirection;
@property (nonatomic) PKTextInputElement targetElement;
@property (nonatomic) <PKTextInputDrawingGestureRecognizerDelegate> delegate;
@property (nonatomic) BOOL isReplaying;
@property (nonatomic) <PKDrawingGestureTarget> drawingTarget;
@property (nonatomic) Q activeInputProperties;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)end;
- (void)cancel;
- (BOOL)shouldBeRequiredToFailByGestureRecognizer:;
- (void)touchesBegan:withEvent:;
- (void)setState:;
- (void)touchesEstimatedPropertiesUpdated:;
- (id)locationInView:;
- (void).cxx_destruct;
- (void)reset;
- (id)description;
- (void)touchesMoved:withEvent:;
- (void)touchesEnded:withEvent:;
- (id)initWithTarget:action:;
- (void)touchesCancelled:withEvent:;
- (id)targetElement;
- (void)setTargetElement:;
- (void)reportDebugStateDescription:;
- (void)_replayDrawingBegan:;
- (void)_replayDrawingMoved:;
- (void)_replayDrawingEnded;
- (void)_replayDrawingCancelled;
- (void)_endDrawing;
- (id)drawingTouch;
- (BOOL)isReplaying;
- (id)drawingTarget;
- (void)setDrawingTarget:;
- (unsigned long long)activeInputProperties;
- (void)_drawingBegan;
- (void)_drawingMoved:;
- (void)_drawingEnded;
- (void)setDrawingTouch:;
- (void)finishedElementFindingWithElement:candidateElements:;
- (double)_distanceFromStartPositionForTouch:;
- (double)timeIntervalSinceStartOfGesture;
- (double)timeIntervalSinceTouchesBeganForTouch:;
- (BOOL)_gestureStartedInsideTargetElement;
- (BOOL)hasMovedPastTapUseTimestampFromTouch:;
- (void)_enumerateTouchesForUpdateWithEvent:block:;
- (void)_setLongPressState:;
- (BOOL)_isValidLongPress;
- (BOOL)_isWithinLongPressDistanceForTouch:;
- (BOOL)_isValidLongPressOverDuration:;
- (void)_scheduleLongPressTimerBlocks;
- (void)_longPressTentativeTimerFired;
- (void)_longPressSuccessTimerFired;
- (void)_updateLongPressValidityForTouch:;
- (void)_cancelLongPressTimerBlocks;
- (void)_setPanState:;
- (BOOL)_hasMovedPastMinimumPanThresholdForTouch:;
- (BOOL)_hasMovedPastScrollThresholdForTouch:;
- (void)_updatePanGestureStateForTouch:;
- (long long)_panDirectionForTouch:;
- (void)_updatePanStateForCandidateElements:;
- (void)_beginDrawingIfNeeded;
- (void)_evaluateMovingToBeganStateUseTimestampFromTouch:;
- (void)_updateStrokeAcceptanceStateUseTimestampFromTouch:;
- (void)_setStrokeAcceptanceState:;
- (void)_evaluateCancelIfNotMoving;
- (void)_cancelNotMovingCancellationBlock;
- (void)_cancelScheduledStrokeAcceptanceBlock;
- (void)_acceptStrokeTimeoutTriggered;
- (void)_cancelOrFailGesture;
- (void)_setDrawingTargetIsDrawing:;
- (void)cancelDrawing;
- (BOOL)drawingTargetIsDrawing;
- (long long)strokeAcceptanceState;
- (long long)longPressState;
- (void)setIsReplaying:;
- (long long)panState;
- (long long)panDirection;
- (void)_setPanDirection:;
+ (id)_systemGestureClassesToAvoid;
@end
