@interface DMMigrationPluginWrapperConnection : NSObject
@property (nonatomic) BOOL didReceivePid;
- (id)init;
- (void)handleMessage:;
- (void)resume;
- (int)pid;
- (void).cxx_destruct;
- (void)invalidate;
- (BOOL)didReceivePid;
- (void)runPluginAtPath:withParameters:completion:;
+ (id)connection;
@end
