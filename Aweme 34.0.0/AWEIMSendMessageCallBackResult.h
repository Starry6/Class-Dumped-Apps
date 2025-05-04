@interface AWEIMSendMessageCallBackResult : NSObject
@property (nonatomic) NSString serverMessageID;
@property (nonatomic) NSString clientMessageID;
@property (nonatomic) BOOL isSuccess;
@property (nonatomic) q messageType;
- (id)serverMessageID;
- (void)setServerMessageID:;
- (void)setClientMessageID:;
- (id)clientMessageID;
- (void).cxx_destruct;
- (BOOL)isSuccess;
- (void)setMessageType:;
- (long long)messageType;
- (void)setIsSuccess:;
@end
