@interface AWEIMGroupNoticeModifyContentComponent : AWEIMFlexComponent
@property (nonatomic) AWEIMGroupNoticeModifyMessage message;
@property (nonatomic) AWEIMMessageConversation conversation;
- (void)needUpdateDisplayWithContextOptions:;
- (void)componentDidMounted:;
- (void)cellWillDisplay:;
- (id)bubbleContentPaddingInsets;
- (id)contentSizeWithMesasge:;
- (void)p_createPresenterIfNeed;
- (void)p_initProps;
- (id)contentSizeWithMessage:maxWidth:;
- (void)p_initColorProps;
- (void)p_tapAction:content:range:rect:;
- (id)message;
- (void).cxx_destruct;
- (void)setMessage:;
- (id)conversation;
- (void)setConversation:;
+ (BOOL)canCreateComponentWithContext:;
@end
