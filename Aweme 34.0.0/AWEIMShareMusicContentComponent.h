@interface AWEIMShareMusicContentComponent : AWEIMFlexComponent
@property (nonatomic) AWEIMShareMusicMessage message;
@property (nonatomic) AWEIMMessageConversation conversation;
- (void)componentDidMounted:;
- (void)cellWillDisplay:;
- (void)p_createPresenterIfNeed;
- (void)p_initProps;
- (id)message;
- (void).cxx_destruct;
- (void)setMessage:;
- (id)conversation;
- (void)setConversation:;
- (void)tapAction:;
+ (BOOL)canCreateComponentWithContext:;
@end
