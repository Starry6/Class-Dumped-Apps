@interface AWELiveCustomMessageManager : NSObject
@property (nonatomic) IESLiveIMVenueMessageActionCreator messageCreator;
@property (nonatomic) NSNumber currentRoomID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)currentRoomID;
- (BOOL)connectWithRoomID:scene:customParams:;
- (BOOL)connectWithRoomID:service:method:customParams:;
- (BOOL)disconnectWithRoomID:;
- (void)addSubscriber:forMessageNames:;
- (id)toJSONFromMessage:;
- (void)setCurrentRoomID:;
- (id)messageCreator;
- (void)setMessageCreator:;
- (void)dealloc;
- (void).cxx_destruct;
@end
