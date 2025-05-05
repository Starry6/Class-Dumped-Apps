@interface BYSettingsManagerClient : NSObject
@property (nonatomic) NSXPCConnection connection;
- (id)init;
- (void)_connectToDaemon;
- (id)connection;
- (void).cxx_destruct;
- (void)setConnection:;
- (BOOL)hasStashedValuesOnDisk;
@end
