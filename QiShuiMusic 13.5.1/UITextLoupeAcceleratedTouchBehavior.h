@interface UITextLoupeAcceleratedTouchBehavior : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)translationInView:forLoupeGesture:;
- (id)startPointForLoupeGesture:;
- (BOOL)usesTouchAlignment;
- (BOOL)triggeredByLongPressGesture:;
- (Class)gestureRecognizerClassForLoupeInteraction:;
- (void)textLoupeInteraction:gestureChangedWithState:location:translation:velocity:modifierFlags:shouldCancel:;
- (BOOL)loupeGestureRecognizerShouldBegin:forTextLoupeInteraction:;
- (id)velocityInView:forLoupeGesture:;
- (BOOL)shouldAllowEnforcedTouchTypeForTouch:forGestureRecognizer:;
- (void)adjustVariableDelaySettingsForLoupeInteraction:;
- (void).cxx_destruct;
- (void)configureLoupeGestureRecognizer:forTextLoupeInteraction:;
- (void)configureGestureExclusionRequirementsForTextLoupeInteraction:;
@end
