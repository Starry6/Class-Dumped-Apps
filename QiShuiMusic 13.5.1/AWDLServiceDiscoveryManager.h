@interface AWDLServiceDiscoveryManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (BOOL)_usingAWDLDiscoveryManagerProxy:onSuccess:error:;
- (void)connectionInvalidated;
- (void)_destroyConnection;
- (BOOL)queryAirPlayConnectivityWithConfiguration:error:;
- (BOOL)clearTrafficRegistration:error:;
- (BOOL)_requiresConnection;
- (void)invalidatedActiveTrafficRegistration:;
- (BOOL)setTrafficRegistration:error:;
- (void).cxx_destruct;
- (void)_retryConnection;
- (BOOL)suspendAWDLWithError:;
- (BOOL)resumeAWDLWithError:;
- (void)_removeFirstTrafficRegistrationMatching:;
@end
