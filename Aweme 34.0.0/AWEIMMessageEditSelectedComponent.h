@interface AWEIMMessageEditSelectedComponent : AWEIMFlexComponent
- (void)needUpdateDisplayWithContextOptions:;
- (void)componentDidMounted:;
- (void)onCellWillRenderForCurrentComponent;
- (void)p_updateProps;
- (void)p_createPresenterIfNeeded;
- (id)p_animateConfig;
- (void)p_kvoMessageSelected:;
+ (BOOL)canCreateComponentWithContext:;
@end
