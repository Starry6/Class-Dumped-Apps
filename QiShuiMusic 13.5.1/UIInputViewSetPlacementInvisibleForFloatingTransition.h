@interface UIInputViewSetPlacementInvisibleForFloatingTransition : UIInputViewSetPlacementInvisible
- (BOOL)showsEditItems;
- (id)assistantView;
- (BOOL)isFloatingAssistantView;
- (BOOL)isHiddenForFloatingTransition;
+ (id)placementWithPlacement:;
+ (id)placementWithPlacement:forFloatingAssistantViewTransition:;
@end
