@interface UIInputViewSetPlacementInvisibleForFloatingAssistantTransition : UIInputViewSetPlacementInvisible
- (double)alpha;
- (id)transform;
- (BOOL)isFloatingAssistantView;
- (BOOL)isCompactAssistantView;
+ (id)placementWithPlacement:;
@end
