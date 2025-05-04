@interface AWEIMShareTrendMessageComponent : AWEIMFlexComponent
@property (nonatomic) AWEIMShareTrendMessage message;
@property (nonatomic) AWEIMMessageConversation conversation;
@property (nonatomic) q scene;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (void)cellWillDisplay:;
- (void)p_addKVO;
- (void)p_createPresenterIfNeed;
- (void)p_initProps;
- (void)coverTapped:;
- (id)displayMessage;
- (void)setScene:;
- (id)message;
- (long long)scene;
- (void).cxx_destruct;
- (void)setMessage:;
- (id)conversation;
- (void)setConversation:;
+ (BOOL)canCreateComponentWithContext:;
@end
