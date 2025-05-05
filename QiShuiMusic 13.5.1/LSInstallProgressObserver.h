@interface LSInstallProgressObserver : NSObject
@property (nonatomic) NSXPCConnection connection;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)removeObserver;
- (void)installationFailedForApplication:reply:;
- (unsigned long long)hash;
- (void)sendNotification:forApplications:withPlugins:;
- (id)connection;
- (void).cxx_destruct;
- (void)_lsPing:reply:;
- (void)setConnection:;
- (void)installationEndedForApplication:withState:;
- (void)addObserver;
- (id)description;
- (void)sendNotification:forApplicationWithBundleIdentifier:completion:;
- (id)initWithConnection:;
- (void)createInstallProgressForApplication:withPhase:andPublishingString:reply:;
@end
