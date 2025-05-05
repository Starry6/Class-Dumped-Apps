@interface HCXPCMessage : NSObject
@property (nonatomic) HCXPCClient client;
@property (nonatomic) NSObject<OS_xpc_object> xpcMessage;
@property (nonatomic) NSDictionary payload;
@property (nonatomic) NSError error;
- (id)payload;
- (void)dealloc;
- (id)initWithPayload:;
- (void)setPayload:;
- (void)setError:;
- (void)setClient:;
- (id)error;
- (id)client;
- (void)setXpcMessage:;
- (void).cxx_destruct;
- (id)description;
- (id)xpcMessage;
- (BOOL)hasEntitlement:;
- (id)replyMessageWithPayload:;
+ (id)messageWithPayload:;
+ (id)messageWithPayload:xpcMessage:andClient:;
@end
