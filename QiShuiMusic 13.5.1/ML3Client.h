@interface ML3Client : NSObject
@property (nonatomic) NSXPCConnection connection;
@property (nonatomic) NSString bundleID;
@property (nonatomic) NSInteger processID;
@property (nonatomic) BOOL daemonClient;
- (int)processID;
- (id)init;
- (id)connection;
- (void).cxx_destruct;
- (id)description;
- (id)initWithConnection:;
- (id)bundleID;
- (BOOL)isDaemonClient;
+ (id)daemonClient;
+ (id)processClient;
@end
