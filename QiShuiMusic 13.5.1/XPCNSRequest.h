@interface XPCNSRequest : NSObject
@property (nonatomic) XPCRequest request;
@property (nonatomic) <NSCoding> message;
@property (nonatomic) NSData data;
- (void)sendReply:;
- (id)initWithXPCRequest:;
- (id)data;
- (id)request;
- (id)message;
- (void).cxx_destruct;
@end
