@interface AWEIMVideoQuoteReplyComponent : AWEIMVideoContentComponent
@property (nonatomic) AWEIMMessage originMessage;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (void)setOriginMessage:;
- (id)originMessage;
- (void)coverDidTapped;
- (void)didClickAssistanceButton:;
- (void)p_loadDetailMessageFrom:;
- (void)p_loadVideoMsg:;
- (id)displayMessage;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
