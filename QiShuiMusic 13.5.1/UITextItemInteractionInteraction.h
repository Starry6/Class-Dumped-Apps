@interface UITextItemInteractionInteraction : UITextInteraction
- (BOOL)_allowItemInteractions;
+ (BOOL)mightResponderHaveTextItemInteractions:;
+ (BOOL)mightResponder:haveInteractableTextItemAtPoint:precision:;
@end
