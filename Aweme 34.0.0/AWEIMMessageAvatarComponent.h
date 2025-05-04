@interface AWEIMMessageAvatarComponent : AWEIMFlexComponent
- (void)afterInitialComponentAllResolved:;
- (void)componentDidMounted:;
- (void)p_createPresenterIfNeeded;
- (void)p_addKVO:;
- (void)p_updatePresenter:;
- (void)p_avatarTapped;
- (void)p_fetchUserIfNeedWith:;
- (void)p_setupAccessibilityLabel:;
- (id)p_findPlaceholderImage;
- (id)p_trackerConfig:;
- (void)p_avatarLongPress;
- (id)p_avatarURL:;
- (id)p_avatarTagURL:;
- (id)p_avatarTagPlaceholderImageName:;
- (BOOL)p_isBot:;
+ (BOOL)canCreateComponentWithContext:;
@end
