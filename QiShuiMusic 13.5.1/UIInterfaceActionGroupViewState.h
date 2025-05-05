@interface UIInterfaceActionGroupViewState : UIInterfaceActionVisualStyleViewState
@property (nonatomic) BOOL isVerticalLayoutAxis;
@property (nonatomic) q resolvedPresentationStyle;
- (id)init;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)copyWithVerticalLayoutAxis:;
- (id)copyWithResolvedPresentationStyle:;
- (void)_collectStateFromGroupViewState:;
- (BOOL)_stateEqualToGroupViewState:;
- (BOOL)isVerticalLayoutAxis;
- (long long)resolvedPresentationStyle;
@end
