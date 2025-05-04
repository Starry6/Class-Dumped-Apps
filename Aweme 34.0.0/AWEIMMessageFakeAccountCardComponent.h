@interface AWEIMMessageFakeAccountCardComponent : AWEIMFlexComponent
- (void)needUpdateDisplayWithContextOptions:;
- (void)componentDidMounted:;
+ (BOOL)canCreateComponentWithContext:;
@end
