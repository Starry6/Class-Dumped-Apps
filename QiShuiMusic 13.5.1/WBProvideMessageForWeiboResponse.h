@interface WBProvideMessageForWeiboResponse : WBBaseResponse
@property (nonatomic) WBMessageObject message;
- (BOOL)canBeReceived;
- (void)storeToDictionary:;
- (id)validate;
- (void)setMessage:;
- (id)message;
- (void).cxx_destruct;
- (BOOL)canBeSent;
- (void)loadFromDictionary:;
+ (id)responseWithMessage:;
@end
