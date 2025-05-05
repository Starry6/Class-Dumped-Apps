@interface BSXPCMessage : NSObject
@property (nonatomic) NSObject<OS_xpc_object> payload;
- (id)payload;
- (id)initWithMessage:packer:replyHandler:replyQueue:;
- (BOOL)sendToConnection:;
- (BOOL)sendToConnection:replyQueue:replyHandler:;
- (void).cxx_destruct;
- (id)description;
- (void)forcefullyInvokeReplyHandler:;
- (id)sendSynchronouslyToConnection:error:;
+ (id)messageWithPacker:;
+ (id)messageWithPayload:;
+ (id)messageTypeKey;
+ (void)sendMessage:toConnection:withMessagePacker:;
+ (void)sendMessageWithPacker:toConnection:;
+ (void)sendMessageWithPacker:toConnection:replyHandler:replyQueue:;
+ (void)sendMessage:toConnection:withMessagePacker:replyHandler:replyQueue:;
+ (id)message:withPacker:;
+ (id)message:withPacker:replyHandler:replyQueue:;
+ (id)messageWithPacker:replyHandler:replyQueue:;
@end
