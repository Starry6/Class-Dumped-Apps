@interface OSActivityTraceMessageEvent : OSActivityEventMessage
@property (nonatomic) NSObject<OS_xpc_object> payload;
@property (nonatomic) Q senderProgramCounter;
@property (nonatomic) C messageType;
- (unsigned char)messageType;
- (id)payload;
- (void).cxx_destruct;
- (void)_addProperties:;
- (id)initWithEntry:;
- (unsigned long long)senderProgramCounter;
@end
