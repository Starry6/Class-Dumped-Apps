@interface AWELiveIMMessageDispatcher : IESLiveIMBaseDispatcher
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) double messageClientStartConnectTimeStamp;
@property (nonatomic) double messageClientDispatchFirstMessageTimeStamp;
- (void)didSetAttachingDIContext;
- (id)initWithDIContext:;
- (id)addSubscriberForAll:;
- (id)addSubscriber:forMessage:;
- (void)combineDisposableForAddSubscriber:forMessages:;
- (void)combineDisposableForAddSubscriber:forMessages:needReplay:;
- (void)addSubscriber:forWRDSMessage:firstCallbackWithSubkey:;
- (void)asyncQueryWRDSMessage:withSubkey:completion:;
- (id)addSubscriber:forMessages:;
- (double)messageClientStartConnectTimeStamp;
- (void)setMessageClientStartConnectTimeStamp:;
- (double)messageClientDispatchFirstMessageTimeStamp;
- (void)setMessageClientDispatchFirstMessageTimeStamp:;
- (void)addSubscriber:forWRDSMessages:;
- (void)unsubscribe:forMessage:;
- (void)unsubscribeForAll:;
- (void)addFakeMessage:;
- (void)addSyncStreamInfoMessage:;
- (id)dispatcher;
- (void)dispatchMessage:;
@end
