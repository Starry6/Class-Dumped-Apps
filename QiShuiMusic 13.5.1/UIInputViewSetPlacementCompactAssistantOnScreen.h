@interface UIInputViewSetPlacementCompactAssistantOnScreen : UIInputViewSetPlacementAssistantOnScreen
@property (nonatomic) {CGPoint=dd} offset;
- (void)setOffset:;
- (id)offset;
- (BOOL)isCompactAssistantView;
- (id)horizontalConstraintForInputViewSet:hostView:containerView:;
- (id)widthConstraintForInputViewSet:hostView:containerView:;
- (id)applicatorInfoForOwner:;
- (double)verticalOffset;
+ (BOOL)supportsSecureCoding;
@end
