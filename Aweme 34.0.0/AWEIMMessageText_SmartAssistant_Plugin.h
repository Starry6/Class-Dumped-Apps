@interface AWEIMMessageText_SmartAssistant_Plugin : AWEIMFlexComponent
- (void)componentDidMounted:;
- (void)addKVO;
+ (BOOL)canCreateComponentWithContext:;
@end
