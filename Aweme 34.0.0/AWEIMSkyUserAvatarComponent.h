@interface AWEIMSkyUserAvatarComponent : AWEIMSkylightBaseComponent
- (void)componentDidMounted:;
- (void)updateComponentAfterModelUpdate;
+ (BOOL)canCreateComponentWithContext:;
@end
