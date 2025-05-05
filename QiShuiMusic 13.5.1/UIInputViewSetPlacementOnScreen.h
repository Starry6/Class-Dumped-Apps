@interface UIInputViewSetPlacementOnScreen : UIInputViewSetPlacement
- (BOOL)showsInputViews;
- (BOOL)showsInputOrAssistantViews;
- (BOOL)inputViewWillAppear;
- (BOOL)showsKeyboard;
+ (BOOL)supportsSecureCoding;
@end
