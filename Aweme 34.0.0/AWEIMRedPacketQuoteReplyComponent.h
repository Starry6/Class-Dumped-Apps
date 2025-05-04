@interface AWEIMRedPacketQuoteReplyComponent : AWEIMDouyinRedPacketComponent
@property (nonatomic) <AWEIMMessageProtocol> originMessage;
- (void)componentDidMounted:;
- (void)setOriginMessage:;
- (id)originMessage;
- (void)p_loadDetailMessageFrom:;
- (id)displayMessage;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
