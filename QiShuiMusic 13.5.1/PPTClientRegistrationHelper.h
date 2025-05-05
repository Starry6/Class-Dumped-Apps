@interface PPTClientRegistrationHelper : NSObject
@property (nonatomic) NSXPCConnection connectionToServer;
- (void)setConnectionToServer:;
- (id)createXPCConnection;
- (void).cxx_destruct;
- (void)closeXPCConnection;
- (BOOL)permissionsForSubsystem:category:;
- (id)connectionToServer;
@end
