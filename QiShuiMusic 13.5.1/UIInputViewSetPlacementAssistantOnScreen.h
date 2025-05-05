@interface UIInputViewSetPlacementAssistantOnScreen : UIInputViewSetPlacement
- (BOOL)showsInputViews;
- (BOOL)showsEditItems;
- (BOOL)accessoryViewWillAppear;
- (id)remoteIntrinsicContentSizeForInputViewInSet:includingIAV:;
- (id)verticalConstraintForInputViewSet:hostView:containerView:;
- (BOOL)showsInputOrAssistantViews;
- (Class)applicatorClassForKeyboard:;
- (void).cxx_destruct;
- (BOOL)inputViewWillAppear;
- (BOOL)isFloatingAssistantView;
- (double)inputAssistantViewHeightForInputViewSet:;
- (id)subPlacements;
- (unsigned long long)indexForPurpose:;
- (id)inputAccessoryViewPadding;
- (double)verticalOffset;
+ (BOOL)supportsSecureCoding;
+ (id)infoWithPoint:isCompact:frame:position:;
@end
