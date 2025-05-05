@interface RBSXPCMessage : NSObject
@property (nonatomic) BOOL isEmpty;
@property (nonatomic) : method;
@property (nonatomic) RBSXPCMessageReply reply;
- (id)reply;
- (id)init;
- (BOOL)isEmpty;
- (id)decodeArgumentWithClass:atIndex:allowNil:error:;
- (SEL)method;
- (id)sendToConnection:;
- (id)sendToConnection:completion:;
- (id)sendToConnection:error:;
- (id)sendToConnection:replyQueue:completion:;
- (id)decodeArgumentCollection:withClass:atIndex:allowNil:error:;
- (void).cxx_destruct;
+ (id)messageForMethod:varguments:;
+ (id)messageForXPCMessage:;
@end
