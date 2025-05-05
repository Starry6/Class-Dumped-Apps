@interface IESLiveSaaSNewDataSyncReceiver : NSObject
@property (nonatomic) <HTSLiveSaaSMessageSubscriber> subscriber;
@property (nonatomic) <IESLiveIMMessageReciever> nextReceiver;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didRecieveMessages:;
- (void)didRecievePacket:;
- (id)nextReceiver;
- (void)setNextReceiver:;
- (id)subscriber;
- (id)init;
- (void).cxx_destruct;
- (void)setSubscriber:;
@end
