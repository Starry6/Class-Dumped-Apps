@interface HTSLiveMessageDispatchProviderAdapterImpl : IESLiveBaseAdapter
@property (nonatomic) double messageClientStartConnectTimeStamp;
@property (nonatomic) double messageClientDispatchFirstMessageTimeStamp;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)addSubscriber:forWRDSMessage:firstCallbackWithSubkey:;
- (id)addSubscriberForAll:;
- (void)combineDisposableForAddSubscriber:forMessages:;
- (id)dispatcher;
@end
