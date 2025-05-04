@interface AWEIMMessageTailCameraReplyComponent : AWEIMFlexComponent
- (void)needUpdateDisplayWithContextOptions:;
- (void)componentDidMounted:;
- (void)p_didTapCameraButton;
+ (BOOL)canCreateComponentWithContext:;
@end
