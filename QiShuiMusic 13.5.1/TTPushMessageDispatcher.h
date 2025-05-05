@interface TTPushMessageDispatcher : NSObject
@property (nonatomic) BOOL isTheFirstMessage;
@property (nonatomic) Q lastMsgSequenceId;
@property (nonatomic) TTPushMessageReceiver msgReceiver;
@property (nonatomic) BOOL isBroadcasting;
- (void)setMsgReceiver:;
- (void)broadcastReceivingMessage_:;
- (void)delegateMessage:pushManager:;
- (void)handleUnknownMessage_:;
- (BOOL)isTheFirstMessage;
- (unsigned long long)lastMsgSequenceId;
- (id)msgReceiver;
- (BOOL)receivedDuplicatedMessage:;
- (void)setBroadcastingMessage:;
- (void)setCustomizedMessageReceiver:;
- (void)setIsTheFirstMessage:;
- (void)setLastMsgSequenceId:;
- (void)dispatchMessage:;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isBroadcasting;
- (void)setIsBroadcasting:;
+ (void)assignMessageBaseProperties_:frame:;
+ (id)serializeObject:;
@end
