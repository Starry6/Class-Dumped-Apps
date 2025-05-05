@interface MFAPSManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)connection:didReceivePublicToken:;
- (void)connection:didReceiveIncomingMessage:;
- (id)init;
- (void).cxx_destruct;
- (void)connect;
- (id)copyDiagnosticInformation;
- (void)setLaunchMachServiceName:;
- (void)startWatchingForTopic:;
- (void)stopWatchingForTopic:;
- (void)swapTopic:forNewTopic:;
- (id)copyDeviceToken;
- (void)_startAPS_nts;
- (void)_stopAPS_nts;
- (id)enabledTopicsWithTopics:;
+ (id)sharedManager;
+ (id)apsEnvironment;
+ (Class)APSConnection;
@end
