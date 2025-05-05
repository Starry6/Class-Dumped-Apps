@interface UIInputViewAnimationStyleDirectional : UIInputViewAnimationStyle
@property (nonatomic) NSInteger outDirection;
- (id)startPlacementForInputViewSet:currentPlacement:windowScene:;
- (int)outDirection;
- (BOOL)canDismissWithScrollView;
- (id)endPlacementForInputViewSet:windowScene:;
- (void)setOutDirection:;
- (id)controllerForStartPlacement:endPlacement:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (id)animationStyleAnimated:duration:outDirection:;
@end
