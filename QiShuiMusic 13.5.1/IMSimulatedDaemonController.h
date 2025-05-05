@interface IMSimulatedDaemonController : IMDaemonController
@property (nonatomic) NSArray listeners;
- (void)setListeners:;
- (id)listeners;
- (BOOL)connectToDaemonWithLaunch:;
- (BOOL)connectToDaemonWithLaunch:capabilities:blockUntilConnected:;
- (void)sendBalloonPayload:attachments:withMessageGUID:bundleID:;
- (unsigned int)capabilitiesForListenerID:;
- (void).cxx_destruct;
- (BOOL)isConnected;
+ (id)sharedInstance;
+ (id)dictionaryForChat:;
+ (void)beginSimulatingDaemon;
@end
