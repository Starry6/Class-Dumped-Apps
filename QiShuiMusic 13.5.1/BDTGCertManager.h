@interface BDTGCertManager : NSObject
@property (nonatomic) NSString clientCert;
@property (nonatomic) NSString serverCert;
@property (nonatomic) NSString serverCertSN;
- (id)clientCert;
- (void)p_loadCachedCert;
- (void)removeClientCert;
- (id)serverCert;
- (id)serverCertSN;
- (void)setClientCert:;
- (void)setServerCert:;
- (void)setServerCertSN:;
- (void)updateClientCert:;
- (void)updateClientCert:serverCert:serverCertSN:;
- (id)init;
- (void).cxx_destruct;
+ (id)clientCert;
+ (void)removeClientCert;
+ (id)serverCert;
+ (id)serverCertSN;
+ (void)updateClientCert:;
+ (void)updateClientCert:serverCert:serverCertSN:;
+ (id)sharedInstance;
+ (void)start;
@end
