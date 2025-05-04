@interface AWEIMShareGoodsListMessageComponent : AWEIMFlexComponent
@property (nonatomic) AWEIMShareGoodsListMessage message;
@property (nonatomic) AWEIMMessageConversation conversation;
@property (nonatomic) q scene;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)needUpdateDisplayWithContextOptions:;
- (void)componentDidMounted:;
- (void)cellWillDisplay:;
- (id)p_bgColor;
- (void)p_createPresenterIfNeed;
- (void)p_initProps;
- (id)displayMessage;
- (void)setScene:;
- (id)message;
- (long long)scene;
- (id)contentSize;
- (void).cxx_destruct;
- (void)setMessage:;
- (id)conversation;
- (void)setConversation:;
+ (BOOL)canCreateComponentWithContext:;
@end
