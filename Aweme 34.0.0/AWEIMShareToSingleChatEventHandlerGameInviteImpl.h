@interface AWEIMShareToSingleChatEventHandlerGameInviteImpl : NSObject
@property (nonatomic) AWEShareContext context;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)trackBackflowWithStatusCode:transferBack:;
- (void)sendGameInviteMessageWithContext:;
- (void)sendPostScriptWithString:peerUid:;
- (void)cancelShareWithShareContext:transferBack:;
- (void)shareFinishWithCompletedType:postscript:;
- (void)interrupShare;
- (void)viewDidLoad;
- (id)initWithContext:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
@end
