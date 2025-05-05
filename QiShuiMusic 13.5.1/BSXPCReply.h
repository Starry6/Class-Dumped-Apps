@interface BSXPCReply : NSObject
- (void)sendReply:;
- (id)message;
- (void).cxx_destruct;
- (id)initForMessage:;
- (id)initWithReply:;
- (long long)messageKind;
+ (id)replyForMessage:;
+ (id)messageWithReply:;
@end
