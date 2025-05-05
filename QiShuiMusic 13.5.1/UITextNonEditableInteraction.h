@interface UITextNonEditableInteraction : UITextInteraction
- (BOOL)interaction_gestureRecognizerShouldBegin:;
- (id)initWithMode:;
- (void)_oneFingerTapInUneditableActionAtLocation:textInput:canReplaceText:modifierFlags:;
- (void)toggleSelectionCommands;
- (void)doubleTapOrTripleTapInUneditable:;
- (void)oneFingerTapInUneditableAccelerated:;
- (void)oneFingerTapInUneditable:;
- (void)_oneFingerTapInUneditableAcceleratedActionAtLocation:textInput:canReplaceText:;
- (BOOL)_shouldAllowEnforcedTouchTypeForTouch:forGestureRecognizer:;
- (BOOL)_shouldAllowOneFingerTapInUneditable:;
- (void)_performGestureType:state:location:locationOfFirstTouch:forTouchType:;
@end
