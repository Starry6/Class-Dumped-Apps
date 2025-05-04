@interface AWERTVInteractionApplicationService : NSObject
@property (nonatomic) <RxInjector> injector;
@property (nonatomic) <RTVInteractionServiceInterface> interactionService;
@property (nonatomic) NSMutableSet receivedPushSequenceIDs;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) UIWindow window;
- (void)rxAwakeFromPropertyInjection;
- (void)__handlePushMessage:;
- (id)__sequenceIDWithPushMessage:;
- (id)receivedPushSequenceIDs;
- (void)__ackWithPushMessage:;
- (void)__handleInteractionPushMessage:;
- (id)__pushMessageDataDic:;
- (id)interactionService;
- (BOOL)handleReceivedMessage:;
- (id)injector;
- (void).cxx_destruct;
@end
