@interface ABUDevice : NSObject
@property (nonatomic) NSString caid;
@property (nonatomic) NSString caidPre;
@property (nonatomic) NSString imsi;
@property (nonatomic) NSString carrierName;
@property (nonatomic) NSString MCC;
@property (nonatomic) NSString MNC;
@property (nonatomic) NSString ip;
@property (nonatomic) NSString ua;
@property (nonatomic) q networkTypeCode;
@property (nonatomic) NSString networkType;
@property (nonatomic) NSString timeZone;
@property (nonatomic) NSString countryCode;
@property (nonatomic) NSString city;
@property (nonatomic) NSString timeZoneName;
@property (nonatomic) NSString localeLanguage;
@property (nonatomic) NSNumber timeZoneOffset;
@property (nonatomic) NSString language;
@property (nonatomic) NSString IDFA;
@property (nonatomic) NSString vendor;
@property (nonatomic) NSNumber screenWidth;
@property (nonatomic) NSNumber screenHeight;
@property (nonatomic) NSString IDFV;
@property (nonatomic) NSNumber freeSpace;
@property (nonatomic) NSString totalSpace;
@property (nonatomic) NSNumber cpuNum;
@property (nonatomic) NSString deviceType;
@property (nonatomic) NSString deviceModel;
@property (nonatomic) NSString boot;
@property (nonatomic) NSString totalMem;
@property (nonatomic) NSString resolution;
@property (nonatomic) BOOL isJailBroken;
@property (nonatomic) q type;
@property (nonatomic) q os;
@property (nonatomic) NSString osVersion;
@property (nonatomic) NSString pb;
@property (nonatomic) NSString deviceName;
@property (nonatomic) NSString phoneName;
@property (nonatomic) NSDictionary dictValue;
@property (nonatomic) NSDictionary basicDictValue;
@property (nonatomic) NSDictionary networkDictValue;
@property (nonatomic) NSDictionary locationDictValue;
@property (nonatomic) NSDictionary userAllow;
@property (nonatomic) ABUApp app;
@property (nonatomic) NSString deviceId;
@property (nonatomic) NSString publisherDid;
@property (nonatomic) NSString customIDFA;
- (id)MNC;
- (id)IDFA;
- (long long)networkTypeCode;
- (id)MCC;
- (id)IDFV;
- (id)caidPre;
- (void)_convertDictionary;
- (void)_convertLocationDictionary:;
- (void)_convertNetworkDictionary:;
- (id)_getResolution;
- (id)_reachabilityStringWithType:;
- (void)_setupBasicDictionary;
- (id)basicDictValue;
- (id)boot;
- (id)caid;
- (id)customIDFA;
- (id)dictValue;
- (id)initWithUserAllow:;
- (BOOL)isJailBroken;
- (id)localeLanguage;
- (id)locationDictValue;
- (id)networkDictValue;
- (id)phoneName;
- (id)publisherDid;
- (void)setBasicDictValue:;
- (void)setCaid:;
- (void)setCaidPre:;
- (void)setCustomIDFA:;
- (void)setDictValue:;
- (void)setLocationDictValue:;
- (void)setNetworkDictValue:;
- (void)setPublisherDid:;
- (void)setUserAllow:;
- (id)totalMem;
- (id)ua;
- (void)updateUserAllow:;
- (id)userAllow;
- (long long)os;
- (id)city;
- (id)networkType;
- (id)deviceType;
- (id)deviceModel;
- (id)screenWidth;
- (id)countryCode;
- (id)app;
- (id)screenHeight;
- (id)deviceId;
- (void)setDeviceId:;
- (id)init;
- (id)osVersion;
- (id)toDictionary;
- (id)deviceName;
- (id)language;
- (id)resolution;
- (id)timeZoneOffset;
- (long long)type;
- (id)freeSpace;
- (id)carrierName;
- (void).cxx_destruct;
- (id)timeZone;
- (id)vendor;
- (id)imsi;
- (id)timeZoneName;
- (id)cpuNum;
- (id)ip;
- (id)pb;
- (id)totalSpace;
+ (void)initializeWithUserAllow:;
+ (void)updateUserAllow:;
+ (id)currentDevice;
@end
