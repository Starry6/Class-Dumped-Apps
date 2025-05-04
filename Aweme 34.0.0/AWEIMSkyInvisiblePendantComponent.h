@interface AWEIMSkyInvisiblePendantComponent : AWEIMSkylightBaseComponent
- (void)componentDidMounted:;
- (void)p_createInvisibleIfNeeded;
+ (BOOL)canCreateComponentWithContext:;
@end
