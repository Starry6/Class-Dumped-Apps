@interface XPCRequest : NSObject
@property (nonatomic) Q sequence;
@property (nonatomic) NSObject<OS_xpc_object> message;
@property (nonatomic) NSObject<OS_xpc_object> reply;
- (id)reply;
- (void)sendReply;
- (id)message;
- (void).cxx_destruct;
- (unsigned long long)sequence;
- (id)initWithMessage:sequence:connection:;
@end
