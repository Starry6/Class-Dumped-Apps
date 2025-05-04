@interface AWEHPLandingClientAIManager : NSObject
@property (nonatomic) NSLock lock;
@property (nonatomic) BOOL hasSetup;
- (BOOL)hasSetup;
- (void)setHasSetup:;
- (void)p_addNotifications;
- (void)p_removeNotifications;
- (void)trySetup;
- (void)unsetup;
- (id)handlePitayaMessage:;
- (void)p_onLandingConfigChangedNotification:;
- (void)p_sendNotifyLandingConfigChangedEvent;
- (void)p_trackEventResultWithStatus:error:message:extra:;
- (id)handleGetLandingConfigWithMessage:;
- (id)handleGetTabStructWithMessage:;
- (id)handleGetCurrentLandingConfigWithMessage:;
- (id)handleUpdateLandingResultWithMessage:;
- (id)handleSendTrackWithMessage:;
- (id)handleGetTrackQueueWithMessage:;
- (id)p_generateTabStructWithNode:;
- (id)init;
- (void)dealloc;
- (void)setLock:;
- (id)lock;
- (void)setup;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
