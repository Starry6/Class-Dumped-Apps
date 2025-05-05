@interface CATConcreteIDSServiceConnectionDataMessageQueue : NSObject
@property (nonatomic) <CATIDSServiceConnectionDataMessageQueueDelegate> delegate;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)receiveData:completion:;
- (void)receiveRemoteSequenceNumber:;
- (void)retransmitSequenceNumbers:;
- (id)initWithWorkQueue:timerSource:dataChunker:flushPromptInterval:supportsRetransmit:;
- (void)scheduleFlushTimer;
- (void)flushTimerDidFire:fireCount:;
- (void)retransmitContent:;
+ (id)flushTimerIdentifier;
@end
