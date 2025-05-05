@interface IESLiveSaaSPreviewIMMessageManager : NSObject
@property (nonatomic) NSNumber currentRoomID;
@property (nonatomic) IESLiveSaaSPreviewIMMessageActionCreator messageCreator;
- (void)addSubscriber:forMessageNames:;
- (void)connectWithRoomID:;
- (id)currentRoomID;
- (id)messageCreator;
- (void)setCurrentRoomID:;
- (void)setMessageCreator:;
- (void)disconnect;
- (void).cxx_destruct;
@end
