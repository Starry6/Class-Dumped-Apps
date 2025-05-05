@interface AWEIMSafeGuardVerifyCodeManager : NSObject
@property (nonatomic) BOOL imVerifyCodeWindowShowing;
@property (nonatomic) NSMutableArray resendQueue;
@property (nonatomic) <AWEIMSafeGuardVerifyCodeManagerResendMessageDelegate> resendMsgDelegate;
- (void)setResendQueue:;
- (void)enqueueMessage:conversationID:;
- (BOOL)imVerifyCodeWindowShowing;
- (id)resendMsgDelegate;
- (id)resendQueue;
- (void)setImVerifyCodeWindowShowing:;
- (void)setResendMsgDelegate:;
- (void)showVerifyCode:conversationID:type:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
