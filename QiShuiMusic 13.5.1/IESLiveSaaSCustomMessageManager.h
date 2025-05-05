@interface IESLiveSaaSCustomMessageManager : NSObject
@property (nonatomic) IESLiveSaaSCustomMessageActionCreator messageCreator;
@property (nonatomic) NSNumber currentRoomID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)addSubscriber:forMessageNames:;
- (BOOL)connectWithRoomID:scene:customParams:;
- (BOOL)connectWithRoomID:service:method:customParams:;
- (id)currentRoomID;
- (BOOL)disconnectWithRoomID:;
- (id)messageCreator;
- (void)setCurrentRoomID:;
- (void)setMessageCreator:;
- (void).cxx_destruct;
@end
