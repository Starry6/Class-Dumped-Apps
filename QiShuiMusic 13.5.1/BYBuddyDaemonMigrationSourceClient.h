@interface BYBuddyDaemonMigrationSourceClient : NSObject
@property (nonatomic) NSXPCConnection connection;
@property (nonatomic) <BYDeviceMigrationDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)cancel;
- (void)setDelegate:;
- (void)_connectToDaemon;
- (id)delegate;
- (id)connection;
- (void).cxx_destruct;
- (void)setConnection:;
- (void)didFinishWithError:;
- (void)didUpdateProgress:;
- (void)didChangeConnectionInformation:;
- (void)registerAsUserInterfaceHost:;
- (void)launchSetupForMigration;
- (void)setFileTransferTemplate:;
+ (id)clientInterface;
@end
