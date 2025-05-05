@interface SaaSIESECLiveMessageSubscriberIESECBridger : NSObject
@property (nonatomic) <HTSLiveSaaSMessageSubscriber> protoObj;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)protoObj;
- (void)setProtoObj:;
- (void).cxx_destruct;
- (void)messageReceived:;
+ (id)bridgedProtocol;
+ (id)bridgedInstanceWithObj:;
@end
