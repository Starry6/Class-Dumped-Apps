@interface STSetupClient : NSObject
@property (nonatomic) NSXPCConnection connection;
- (id)init;
- (void)dealloc;
- (id)connection;
- (void).cxx_destruct;
- (id)currentConfigurationForUser:error:;
- (BOOL)applyUpdatedConfiguration:error:;
- (void)collectPasscodeFromUserWithCompletionHandler:;
+ (id)_newConnection;
@end
