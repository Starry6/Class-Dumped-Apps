@interface ML3DaemonClient : ML3Client
- (int)processID;
- (id)init;
- (id)name;
- (id)bundleID;
+ (id)sharedDaemonClient;
@end
