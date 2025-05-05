@interface UIInputViewSetPlacementAccessoryOnScreen : UIInputViewSetPlacement
- (BOOL)showsInputViews;
- (BOOL)showsEditItems;
- (BOOL)accessoryViewWillAppear;
- (id)remoteIntrinsicContentSizeForInputViewInSet:includingIAV:;
- (id)verticalConstraintForInputViewSet:hostView:containerView:;
+ (BOOL)supportsSecureCoding;
@end
