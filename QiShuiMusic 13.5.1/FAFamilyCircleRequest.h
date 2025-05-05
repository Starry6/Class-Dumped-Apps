@interface FAFamilyCircleRequest : NSObject
@property (nonatomic) <FAFamilyCircleRequestConnectionProvider> connectionProvider;
@property (nonatomic) NSString usernameOrDSID;
@property (nonatomic) NSString passwordOrToken;
- (id)serviceConnection;
- (id)init;
- (id)initWithConnectionProvider:;
- (id)requestOptions;
- (void).cxx_destruct;
- (id)connectionProvider;
- (void)setConnectionProvider:;
- (id)serviceRemoteObjectWithErrorHandler:;
- (id)synchronousRemoteObjectWithErrorHandler:;
- (id)usernameOrDSID;
- (void)setUsernameOrDSID:;
- (id)passwordOrToken;
- (void)setPasswordOrToken:;
@end
