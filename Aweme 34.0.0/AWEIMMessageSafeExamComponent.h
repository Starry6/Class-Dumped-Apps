@interface AWEIMMessageSafeExamComponent : AWEIMFlexComponent
- (void)componentDidMounted:;
- (void)cellWillDisplay:;
- (void)p_addKVO;
- (void)p_didTapExamButton;
+ (BOOL)canCreateComponentWithContext:;
@end
