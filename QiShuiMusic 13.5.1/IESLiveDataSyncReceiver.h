@interface IESLiveDataSyncReceiver : NSObject
@property (nonatomic) <IESLiveWRDSMessageSubscriber> subscriber;
@property (nonatomic) # syncDataClass;
@property (nonatomic) <IESLiveIMMessageReciever> nextReceiver;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didRecieveMessages:;
- (void)didRecievePacket:;
- (id)nextReceiver;
- (void)setNextReceiver:;
- (void)setSyncDataClass:;
- (id)subscriber;
- (void).cxx_destruct;
- (void)setSubscriber:;
- (Class)syncDataClass;
@end
