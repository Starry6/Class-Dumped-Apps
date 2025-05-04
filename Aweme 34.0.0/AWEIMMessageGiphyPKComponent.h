@interface AWEIMMessageGiphyPKComponent : AWEIMFlexComponent
- (void)componentDidMounted:;
- (void)p_addKVO;
- (void)presenter:didUpdateWithView:;
- (void)p_didTappedPKView;
- (void)p_hidePKViewIfNeeded;
+ (BOOL)canCreateComponentWithContext:;
@end
