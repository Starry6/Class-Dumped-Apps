@interface IESLivePublicScreenHistoryMessageHandler : NSObject
@property (nonatomic) NSMutableArray historyMessagesBuffer;
@property (nonatomic) <IESLivePublicScreenMonitorProtocol> monitor;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)addMessageToBuffer:;
- (id)allBufferMessages;
- (id)consumeMessagesWithLimitCount:;
- (BOOL)enableConsumeMessages;
- (id)historyMessagesBuffer;
- (long long)messageHandlerType;
- (void)removeAllMessageBuffer;
- (void)setHistoryMessagesBuffer:;
- (id)init;
- (void)setMonitor:;
- (void).cxx_destruct;
- (id)monitor;
@end
