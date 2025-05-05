@interface BYBuddyDaemonProximitySourceClient : NSObject
@property (nonatomic) NSXPCConnection connection;
@property (nonatomic) <BYBuddyDaemonProximitySourceProtocol> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)connectToDaemon;
- (void)setDelegate:;
- (void)receivedData:;
- (id)delegate;
- (id)connection;
- (void).cxx_destruct;
- (void)setConnection:;
- (void)invalidate;
- (void)syncProgress:;
- (void)syncCompletedWithErrors:;
- (void)finishedWithError:;
- (void)backupProgress:estimatedTimeRemaining:;
- (void)backupCompletedWithError:;
- (void)activateWithSharingChannel:;
+ (id)proximitySourceClientInterface;
@end
