@interface AWEIMFriendVideoPrivateMessageComponent : AWEIMFlexComponent
@property (nonatomic) AWEIMFriendVideoPrivateMessage message;
@property (nonatomic) AWEIMMessageConversation conversation;
@property (nonatomic) q scene;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)needUpdateDisplayWithContextOptions:;
- (void)componentDidMounted:;
- (void)cellWillDisplay:;
- (void)p_createPresenterIfNeed;
- (void)p_initProps;
- (void)videoCoverTapped:;
- (id)textColorWithMessage:;
- (id)displayMessage;
- (void)setScene:;
- (id)message;
- (long long)scene;
- (void).cxx_destruct;
- (void)setMessage:;
- (id)conversation;
- (void)setConversation:;
- (id)contentAttributedString;
- (void)tapAction;
+ (BOOL)canCreateComponentWithContext:;
@end
