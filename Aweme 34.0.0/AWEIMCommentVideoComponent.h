@interface AWEIMCommentVideoComponent : AWEIMFlexComponent
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)needUpdateDisplayWithContextOptions:;
- (void)componentDidMounted:;
- (void)p_createPresenter;
- (void)p_updateProps;
- (id)p_mediaBackgroundColor:;
- (void)coverDidTapped;
- (id)commentVideoView;
- (id)commentShareMessage;
+ (BOOL)canCreateComponentWithContext:;
@end
