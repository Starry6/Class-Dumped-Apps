@interface UIFlickingAssistantViewSupport : UIKeyboardMotionSupport
@property (nonatomic) q draggingState;
@property (nonatomic) BOOL isCompact;
@property (nonatomic) UIInputViewSetPlacement remotePlacement;
- (unsigned long long)assistantPosition;
- (void)setCompact:;
- (BOOL)isInputAssistantItemHidden;
- (void).cxx_destruct;
- (id)assistantFrame;
- (void)_disconnectingController:;
- (void)_connectController:;
- (void)_updatedController;
- (void)panGestureHandler:;
- (void)setPositionAndVisualStateByPersistentLocation:minimize:;
- (void)_initalizePosition;
- (void)transitToDraggingVisualState:withTouchLocation:;
- (id)projectedLandingPointForGestureRecognizerEnd:;
- (id)barOriginFromTouchPoint:;
- (void)updateTransition:animated:;
- (id)keyboardOriginFromAssistantViewPosition:;
- (void)didUpdateTransition;
- (void)_updateKeyboardLayoutGuideForAssistantFrame:;
- (BOOL)isCompact;
- (id)remotePlacement;
- (void)setRemotePlacement:;
- (long long)draggingState;
- (void)setDraggingState:;
@end
