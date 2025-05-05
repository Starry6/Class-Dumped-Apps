@interface IESLiveSaaSMatchIMMessageManager : NSObject
@property (nonatomic) NSNumber currentRoomID;
@property (nonatomic) IESLiveSaaSPreviewIMMessageManager messageManager;
@property (nonatomic) BOOL banPreviewWebsocket;
- (void)addSubscriber:forMessageNames:;
- (BOOL)banPreviewWebsocket;
- (void)connectWithRoomID:;
- (id)currentRoomID;
- (id)messageManager;
- (void)setBanPreviewWebsocket:;
- (void)setCurrentRoomID:;
- (void)setMessageManager:;
- (id)init;
- (void)disconnect;
- (void).cxx_destruct;
@end
