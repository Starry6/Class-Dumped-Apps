@interface IESLiveSaaSMessageCompoundTransport : NSObject
@property (nonatomic) NSArray transport;
@property (nonatomic) <IESLiveIMMessageReciever> messageReciever;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)messageReciever;
- (id)initWithTransPorts:;
- (void)setMessageReciever:;
- (id)transport;
- (void)setTransport:;
- (void)disconnect;
- (void)addTransport:;
- (void).cxx_destruct;
- (void)connect;
@end
