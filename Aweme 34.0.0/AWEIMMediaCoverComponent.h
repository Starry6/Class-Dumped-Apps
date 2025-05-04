@interface AWEIMMediaCoverComponent : AWEIMFlexComponent
- (void)needUpdateDisplayWithContextOptions:;
- (void)componentDidMounted:;
- (void)p_createPresenter;
- (void)p_updateProps;
- (id)p_mediaBackgroundColor:;
- (void)coverDidTapped;
- (id)entCommentShareMessage;
+ (BOOL)canCreateComponentWithContext:;
@end
