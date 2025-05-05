@interface RTIInputSystemServiceUISession : RTIInputSystemServiceSession
- (id)bundleIdentifier;
- (id)valueForEntitlement:;
- (int)pid;
- (void).cxx_destruct;
- (id)initWithConnection:remoteProcess:;
+ (id)sessionWithConnection:remoteProcess:;
@end
