@interface UIInputViewSetPlacementPlaceholder : UIInputViewSetPlacementOnScreen
- (id)remoteIntrinsicContentSizeForInputViewInSet:includingIAV:;
- (id)verticalConstraintForInputViewSet:hostView:containerView:;
- (BOOL)isEqual:;
+ (id)placementWithHeight:;
@end
