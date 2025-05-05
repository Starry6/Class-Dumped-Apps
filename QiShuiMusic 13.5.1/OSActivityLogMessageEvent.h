@interface OSActivityLogMessageEvent : OSActivityEventMessage
@property (nonatomic) NSString subsystem;
@property (nonatomic) NSString category;
@property (nonatomic) Q senderProgramCounter;
@property (nonatomic) C messageType;
- (unsigned char)messageType;
- (id)subsystem;
- (void).cxx_destruct;
- (id)category;
- (void)_addProperties:;
- (id)initWithEntry:;
- (unsigned long long)senderProgramCounter;
@end
