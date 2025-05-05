@interface NEVPNConnection : NSObject
@property (nonatomic) BOOL installed;
@property (nonatomic) BOOL installNotify;
@property (nonatomic) NSError lastDisconnectError;
@property (nonatomic) q status;
@property (nonatomic) NSDate connectedDate;
@property (nonatomic) NEVPNManager manager;
- (void)dealloc;
- (id)manager;
- (void).cxx_destruct;
- (id)connectedDate;
- (long long)status;
- (BOOL)installed;
- (BOOL)startVPNTunnelWithOptions:andReturnError:;
- (void)stopVPNTunnel;
- (BOOL)startVPNTunnelAndReturnError:;
- (void)fetchLastDisconnectErrorWithCompletionHandler:;
- (void)fetchExtendedStatusWithCompletionHandler:;
- (void)fetchStatisticsWithCompletionHandler:;
- (void)setInstalled:;
- (BOOL)installNotify;
- (void)setInstallNotify:;
- (id)lastDisconnectError;
+ (id)createDisconnectErrorWithDomain:code:;
+ (id)createConnectionForEnabledEnterpriseConfiguration;
+ (id)createConnectionForEnabledEnterpriseConfigurationWithName:;
@end
