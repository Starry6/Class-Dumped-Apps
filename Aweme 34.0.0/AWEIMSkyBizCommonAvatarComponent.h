@interface AWEIMSkyBizCommonAvatarComponent : AWEIMSkylightBaseComponent
- (void)componentDidMounted:;
- (void)updateComponentAfterModelUpdate;
- (void)p_updatePresenter;
+ (BOOL)canCreateComponentWithContext:;
@end
