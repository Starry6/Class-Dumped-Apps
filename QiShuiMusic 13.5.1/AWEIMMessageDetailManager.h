@interface AWEIMMessageDetailManager : NSObject
@property (nonatomic) <AWEIMMessageDataProtocol> messageDataController;
@property (nonatomic) AWEIMMessageConversation conversation;
@property (nonatomic) <AWEIMMessageDetailManagerDelegate> delegate;
- (BOOL)__canPushVC;
- (void)__messageDetailtrackerWithMessage:;
- (void)__showCardWithWithMessage:;
- (void)__showDefaultWithWithMessage:;
- (void)__showImageOrVideoWithWithMessage:;
- (void)__showShareGameWithMessage:;
- (id)initWithWithMessageDataController:conversation:;
- (id)messageDataController;
- (void)setMessageDataController:;
- (void)showMessageDetailWithItemID:message:;
- (void)showMessageDetailWithItemID:quoteMessage:;
- (void)showMessageDetailWithMessage:;
- (id)topViewController;
- (void)setDelegate:;
- (id)conversation;
- (id)delegate;
- (void).cxx_destruct;
- (void)setConversation:;
@end
