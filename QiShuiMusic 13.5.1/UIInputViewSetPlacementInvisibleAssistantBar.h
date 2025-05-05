@interface UIInputViewSetPlacementInvisibleAssistantBar : UIInputViewSetPlacementInvisible
- (BOOL)isFloatingAssistantView;
- (BOOL)isCompactAssistantView;
- (id)applicatorInfoForOwner:;
+ (id)placementWithPlacement:;
@end
