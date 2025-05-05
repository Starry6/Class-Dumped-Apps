@interface IESLiveSaaSHybridIMMessageHandler : NSObject
@property (nonatomic) NSNumber currentRoomID;
@property (nonatomic) IESLiveSaasIMVenueMessageActionCreator messageCreator;
- (void)addSubscriber:forMessageNames:;
- (void)connectWithRoomID:;
- (id)currentRoomID;
- (void)disconnectWithRoomID:;
- (id)messageCreator;
- (void)setCurrentRoomID:;
- (void)setMessageCreator:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
