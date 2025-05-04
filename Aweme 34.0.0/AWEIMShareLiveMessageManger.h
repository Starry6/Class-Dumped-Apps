@interface AWEIMShareLiveMessageManger : NSObject
@property (nonatomic) NSHashTable subscribersForAll;
@property (nonatomic) NSNumber roomID;
@property (nonatomic) AWEIMShareLiveMessageActionCreator messageActionCreator;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)uninstallMessageChannel;
- (void)installCommonMessageWithRoomID:;
- (void)addCommonMessageubscrber:;
- (void)removeCommonMessageSubscrber:;
- (id)subscribersForAll;
- (void)setSubscribersForAll:;
- (void)startMessageIfNeed;
- (void)setMessageActionCreator:;
- (id)messageActionCreator;
- (void)loadNewMessageActionCreator;
- (void)enumerate:sendMessage:withDict:;
- (id)roomID;
- (id)init;
- (void).cxx_destruct;
- (void)dispatchMessage:;
- (void)setRoomID:;
- (void)messageReceived:;
@end
