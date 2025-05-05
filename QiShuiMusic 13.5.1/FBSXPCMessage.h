@interface FBSXPCMessage : NSObject
@property (nonatomic) NSObject<OS_xpc_object> payload;
- (id)payload;
- (id)init;
- (id)initWithMessagePacker:;
- (id)initWithMessagePayload:;
- (void).cxx_destruct;
- (void)sendReplyMessageWithPacker:;
+ (id)messageWithBSXPCMessage:ownReply:;
+ (id)messageWithPacker:;
+ (id)message;
+ (id)messageWithPayload:;
@end
