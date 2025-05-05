@interface MAPushNotificationController : NSObject
@property (nonatomic) NSXPCConnection serviceConnection;
@property (nonatomic) NSLock serviceConnectionLock;
- (id)serviceConnection;
- (id)init;
- (void)unsubscribeToChannelWithIdentifier:;
- (void)addSyntheticJobWithType:assetSpecifier:matchingAssetVersion:triggerInterval:;
- (id)_serviceConnection;
- (void)subscribedChannelIDsWithCompletion:;
- (id)synchronousProxy;
- (void)subscribeToChannelWithIdentifier:;
- (void)unsubscribeFromAllChannels;
- (void)setServiceConnection:;
- (void).cxx_destruct;
- (void)didReceivePushNotificationWithInfo:;
- (id)asyncProxy;
- (void)asyncSubscribeToChannelWithIdentifier:;
- (void)asyncUnsubscribeToChannelWithIdentifier:;
- (id)subscribedChannelIDs;
- (void)triggerNotificationWithPayload:;
- (id)pushJobDescriptions;
- (id)serviceConnectionLock;
- (void)setServiceConnectionLock:;
+ (id)sharedInstance;
@end
