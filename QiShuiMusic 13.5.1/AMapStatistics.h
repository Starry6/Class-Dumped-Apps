@interface AMapStatistics : NSObject
@property (nonatomic) BOOL keyAuthorized;
@property (nonatomic) AMapFoundationKeychainManager keyChainManager;
@property (nonatomic) CTTelephonyNetworkInfo telephonyInfo;
@property (nonatomic) NSString mdiu;
@property (nonatomic) NSString amapIDFA;
@property (nonatomic) NSString diuLockToken;
@property (nonatomic) NSString xinfo21LockToken;
@property (nonatomic) NSString extLockToken;
@property (nonatomic) NSString xinfoLockToken;
@property (nonatomic) NSString platform;
@property (nonatomic) NSString appname;
@property (nonatomic) NSString appversion;
@property (nonatomic) NSString bundleid;
@property (nonatomic) NSString sysversion;
@property (nonatomic) NSString diu;
@property (nonatomic) NSString mac;
@property (nonatomic) NSString tid;
@property (nonatomic) NSString sim;
@property (nonatomic) NSString pkg;
@property (nonatomic) NSString model;
@property (nonatomic) NSString device;
@property (nonatomic) NSString ant;
@property (nonatomic) NSString nt;
@property (nonatomic) NSString mnc;
@property (nonatomic) NSString np;
@property (nonatomic) NSString wifi;
@property (nonatomic) NSString wifiname;
@property (nonatomic) NSString manufacture;
@property (nonatomic) NSString adiu;
@property (nonatomic) NSString imac;
- (id)appname;
- (id)bts;
- (id)keyChainManager;
- (id)pkg;
- (id)ram;
- (id)ant;
- (id)diu;
- (id)tel;
- (id)adiu;
- (id)amapIDFA;
- (id)appversion;
- (id)arch;
- (id)bttype;
- (id)currentDeviceModel;
- (id)diuLockToken;
- (id)extLockToken;
- (id)fetchSSIDInfo;
- (id)glrender;
- (id)imac;
- (id)infoDictionaryWithKeys:;
- (id)infoStringWithKeys:;
- (void)initProperty;
- (BOOL)keyAuthorized;
- (id)manufacture;
- (id)mdiu;
- (id)nt;
- (id)platinfoWithProduct:version:;
- (void)setAmapIDFA:;
- (void)setDiuLockToken:;
- (void)setExtLockToken:;
- (void)setKeyAuthorized:;
- (void)setKeyChainManager:;
- (void)setMdiu:;
- (void)setTelephonyInfo:;
- (void)setXinfo21LockToken:;
- (void)setXinfoLockToken:;
- (void)setupCoordinateWithLat:lon:;
- (id)sysversion;
- (id)telephonyInfo;
- (id)wifiname;
- (id)wifis;
- (id)xinfo;
- (id)xinfo21LockToken;
- (id)xinfoLockToken;
- (id)xinfo_21;
- (id)model;
- (id)wifi;
- (id)init;
- (id)lat;
- (id)mac;
- (id)resolution;
- (id)storage;
- (id)platform;
- (void).cxx_destruct;
- (id)device;
- (id)tid;
- (id)mnc;
- (id)bundleid;
- (id)gps;
- (id)sim;
- (id)lon;
- (id)np;
- (id)ext;
+ (id)tryToRestoreUTDIDValue;
+ (id)sharedStatistics;
@end
