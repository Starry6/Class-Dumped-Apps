@interface AWEIMSafeGuardVerifyCodeManager : NSObject
@property (nonatomic) BOOL imVerifyCodeWindowShowing;
@property (nonatomic) NSMutableArray resendQueue;
@property (nonatomic) AWEIMConversationContext conversationContext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)securityCheckDidEnd:;
- (void)checkAndSendMessageWithBlock:;
- (void)willResendMessage:;
- (void)resendMessage:conversationID:;
- (void)handleSafeGuardVerifyCodeResult:;
- (void)enqueueMessage:conversationID:;
- (BOOL)imVerifyCodeWindowShowing;
- (void)setImVerifyCodeWindowShowing:;
- (id)resendQueue;
- (void)setResendQueue:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)conversationContext;
- (void)setConversationContext:;
+ (id)sharedInstance;
@end
