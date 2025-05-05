@interface FeedbackLoggerFBFClient : NSObject
@property (nonatomic) NSXPCConnection daemonConnection;
@property (nonatomic) <FeedbackLoggerDaemonXPC> fbf;
@property (nonatomic) NSDistributedNotificationCenter notificationCenter;
@property (nonatomic) NSObject<OS_os_log> log;
- (void)setDaemonConnection:;
- (id)daemonConnection;
- (id)init;
- (id)log;
- (void)setNotificationCenter:;
- (id)notificationCenter;
- (void).cxx_destruct;
- (void)scheduleImmediateUploadWithHeaders:completion:;
- (id)fbf;
- (void)setFbf:;
@end
