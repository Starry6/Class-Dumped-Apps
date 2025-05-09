@interface HMDCrashMetaData : HMDCrashModel
@property (nonatomic) NSString arch;
@property (nonatomic) NSString deviceModel;
@property (nonatomic) NSString appVersion;
@property (nonatomic) NSString bundleVersion;
@property (nonatomic) NSString osVersion;
@property (nonatomic) NSString osFullVersion;
@property (nonatomic) NSString osBuildVersion;
@property (nonatomic) NSString UUID;
@property (nonatomic) NSString processName;
@property (nonatomic) Q processID;
@property (nonatomic) double startTime;
@property (nonatomic) NSString bundleID;
@property (nonatomic) Q physicalMemory;
@property (nonatomic) NSString sdkVersion;
@property (nonatomic) NSString commitID;
@property (nonatomic) BOOL isAppExtension;
@property (nonatomic) NSString appExtensionType;
@property (nonatomic) BOOL isMacARM;
@property (nonatomic) Q exceptionMainAddress;
- (id)appExtensionType;
- (id)arch;
- (id)commitID;
- (unsigned long long)exceptionMainAddress;
- (BOOL)isMacARM;
- (id)osFullVersion;
- (void)setAppExtensionType:;
- (void)setArch:;
- (void)setCommitID:;
- (void)setExceptionMainAddress:;
- (void)setIsAppExtension:;
- (void)setIsMacARM:;
- (void)setOsFullVersion:;
- (void)setBundleVersion:;
- (void)setAppVersion:;
- (id)deviceModel;
- (void)updateWithDictionary:;
- (unsigned long long)processID;
- (id)appVersion;
- (id)bundleVersion;
- (BOOL)isAppExtension;
- (id)osVersion;
- (void)setOsBuildVersion:;
- (void)setUUID:;
- (void)setProcessID:;
- (void)setStartTime:;
- (double)startTime;
- (id)processName;
- (void)setOsVersion:;
- (void).cxx_destruct;
- (void)setProcessName:;
- (id)osBuildVersion;
- (void)setDeviceModel:;
- (id)UUID;
- (id)bundleID;
- (void)setBundleID:;
- (unsigned long long)physicalMemory;
- (id)sdkVersion;
- (void)setPhysicalMemory:;
- (void)setSdkVersion:;
@end
