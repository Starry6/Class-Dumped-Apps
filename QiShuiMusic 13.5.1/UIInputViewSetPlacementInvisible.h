@interface UIInputViewSetPlacementInvisible : UIInputViewSetPlacementWrapper
- (BOOL)isInteractive;
- (BOOL)showsInputViews;
- (double)alpha;
- (BOOL)showsInputOrAssistantViews;
- (id)transform;
- (BOOL)inputViewWillAppear;
- (BOOL)isVisible;
- (BOOL)showsKeyboard;
- (BOOL)isUndocked;
- (id)applicatorInfoForOwner:;
+ (BOOL)supportsSecureCoding;
+ (id)placementWithPlacement:;
@end
