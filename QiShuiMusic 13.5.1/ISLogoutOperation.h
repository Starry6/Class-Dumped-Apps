@interface ISLogoutOperation : ISOperation
@property (nonatomic) SSAccount account;
@property (nonatomic) NSString logKey;
- (id)account;
- (void)setAccount:;
- (id)_copyAuthenticationContext;
- (void)setLogKey:;
- (id)logKey;
- (void)run;
- (void).cxx_destruct;
- (id)initWithAccount:logKey:;
- (id)_createDisableBookkeeperRequestPropertiesWithURL:;
- (id)_createLogoutRequestProperties;
- (void)_disableAutomaticDownloadKinds;
- (void)_disableBookkeeper;
- (id)_sbsyncData;
- (void)_sendLogoutRequest;
@end
