@interface UIInputViewSetPlacementOffScreenDownForFloatingAssistant : UIInputViewSetPlacementOffScreenDown
- (BOOL)showsEditItems;
- (id)remoteIntrinsicContentSizeForInputViewInSet:includingIAV:;
- (Class)applicatorClassForKeyboard:;
- (BOOL)isFloatingAssistantView;
+ (id)placement;
@end
