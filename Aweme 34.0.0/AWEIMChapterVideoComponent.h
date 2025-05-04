@interface AWEIMChapterVideoComponent : AWEIMFlexComponent
- (void)needUpdateDisplayWithContextOptions:;
- (void)componentDidMounted:;
- (void)p_createPresenter;
- (id)chapterShareMessage;
- (void)p_updateProps;
- (id)p_mediaBackgroundColor:;
- (void)coverDidTapped;
+ (BOOL)canCreateComponentWithContext:;
@end
