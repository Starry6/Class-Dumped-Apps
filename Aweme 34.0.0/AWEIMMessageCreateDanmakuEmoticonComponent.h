@interface AWEIMMessageCreateDanmakuEmoticonComponent : AWEIMFlexComponent
- (void)needUpdateDisplayWithContextOptions:;
- (void)componentDidMounted:;
- (void)cellWillDisplay:;
- (void)p_addKVO;
- (void)p_createPresenterIfNeeded;
- (void)p_trackCreateButtonShow;
- (void)p_updateUIIfNeeded:;
- (void)p_didTapButton;
+ (BOOL)canCreateComponentWithContext:;
@end
