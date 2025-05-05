@interface TKTokenDriverContext : TKTokenBaseContext
@property (nonatomic) TKTokenDriver driver;
@property (nonatomic) NSXPCListenerEndpoint configurationEndpoint;
@property (nonatomic) TKTokenConfigurationConnection configurationConnection;
@property (nonatomic) double idleTimeout;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)driver;
- (void)setup;
- (void).cxx_destruct;
- (double)idleTimeout;
- (id)configurationEndpoint;
- (void)acquireTokenWithInstanceID:reply:;
- (void)acquireTokenWithSlot:AID:reply:;
- (void)configureWithReply:;
- (void)auditAuthOperation:auditToken:success:;
- (void)setConfigurationEndpoint:reply:;
- (void)releaseTokenWithInstanceID:reply:;
- (id)configurationConnection;
- (id)configurationForTokenID:;
- (BOOL)startRequestWithError:;
@end
