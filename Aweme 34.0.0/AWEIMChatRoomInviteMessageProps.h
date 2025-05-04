@interface AWEIMChatRoomInviteMessageProps : AWEIMUIViewPresenterProps
@property (nonatomic) @? tapAction;
@property (nonatomic) UIColor BGColor;
@property (nonatomic) NSDictionary routerParams;
@property (nonatomic) AWEIMMessage message;
- (id)routerParams;
- (void)setRouterParams:;
- (void)setBGColor:;
- (id)BGColor;
- (id)message;
- (void).cxx_destruct;
- (void)setMessage:;
- (id)tapAction;
- (void)setTapAction:;
@end
