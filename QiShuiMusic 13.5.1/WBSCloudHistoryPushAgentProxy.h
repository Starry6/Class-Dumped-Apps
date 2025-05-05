@interface WBSCloudHistoryPushAgentProxy : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (void)queryMemoryFootprint:;
- (void)getPushNotifications:;
- (void).cxx_destruct;
- (void)clearAcknowledgedPushNotifications;
- (id)queryMemoryFootprintWithError:;
- (void)acknowledgePendingPushNotifications;
@end
