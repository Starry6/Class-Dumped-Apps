@interface AWEIMSkyCFGuideAvatarComponent : AWEIMSkylightBaseComponent
- (void)componentDidMounted:;
- (void)updateComponentAfterModelUpdate;
- (void)p_updatePresenter;
- (BOOL)checkHasEverPressedWithModel:;
+ (BOOL)canCreateComponentWithContext:;
@end
