@interface UIInputViewSetPlacementAssistantOnScreenForNonKeyboard : UIInputViewSetPlacementWrapper
- (id)verticalConstraintForInputViewSet:hostView:containerView:;
- (id)horizontalConstraintForInputViewSet:hostView:containerView:;
- (id)widthConstraintForInputViewSet:hostView:containerView:;
+ (BOOL)supportsSecureCoding;
@end
