@interface WBSCloudHistoryPushAgent : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)connection:didReceivePublicToken:;
- (void)connection:didReceiveToken:forTopic:identifier:;
- (void)connection:didReceiveIncomingMessage:;
- (id)init;
- (void)_setHasAcknowlegedPushNotifications:;
- (void)queryMemoryFootprint:;
- (BOOL)_hasUnacknowledgedPushNotifications;
- (void)getPushNotifications:;
- (void)_setHasUnacknowledgedPushNotifications:;
- (BOOL)listener:shouldAcceptNewConnection:;
- (void).cxx_destruct;
- (id)_pushTopic;
- (void)clearAcknowledgedPushNotifications;
- (void)acknowledgePendingPushNotifications;
- (BOOL)_hasAcknowledgedPushNotifications;
- (id)_userDefaults;
@end
