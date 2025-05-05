@interface IESSaaSTIMLongConnectionClient : NSObject
@property (nonatomic) NSPointerArray callbacks;
@property (nonatomic) NSObject<OS_dispatch_queue> messagingQueue;
@property (nonatomic) <IESSaaSTIMLongConnectionClientUnderlayingWebSocket> webSocket;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)addWeakCallback:;
- (void)handlePushMessageObject:;
- (id)messagingQueue;
- (id)postProcessMappingBlockResult:originalMessage:;
- (void)setMessagingQueue:;
- (void)setWebSocket:;
- (void)updateConnection;
- (id)webSocket;
- (id)init;
- (void)setCallbacks:;
- (id)callbacks;
- (BOOL)enqueueRequest:;
- (void).cxx_destruct;
- (void)receiveMessage:;
+ (id)sharedInstance;
@end
