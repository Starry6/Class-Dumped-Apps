@interface AWEIMSendHelloMsgManager : NSObject
@property (nonatomic) q trySendTimes;
@property (nonatomic) AWEIMMessage message;
@property (nonatomic) IESIMSaaSAWEIMUser imUser;
@property (nonatomic) NSDictionary ext;
@property (nonatomic) @? completionBlock;
- (void)setExt:;
- (void)_sendMessage;
- (id)imUser;
- (void)sendMessage:toIMUser:ext:completionBlock:;
- (void)setImUser:;
- (void)setTrySendTimes:;
- (long long)trySendTimes;
- (id)init;
- (void)dealloc;
- (void)setMessage:;
- (void)setCompletionBlock:;
- (id)message;
- (void).cxx_destruct;
- (id)completionBlock;
- (id)ext;
+ (id)sendHelloMsgURLString;
@end
