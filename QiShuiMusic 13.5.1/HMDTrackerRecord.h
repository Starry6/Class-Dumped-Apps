@interface HMDTrackerRecord : NSObject
@property (nonatomic) Q localID;
@property (nonatomic) Q sequenceCode;
@property (nonatomic) NSString sessionID;
@property (nonatomic) double timestamp;
@property (nonatomic) double inAppTime;
@property (nonatomic) Q enableUpload;
@property (nonatomic) NSString osVersion;
@property (nonatomic) NSString appVersion;
@property (nonatomic) NSString buildVersion;
@property (nonatomic) NSString sdkVersion;
@property (nonatomic) q netQualityType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)environmentInfo;
- (unsigned long long)enableUpload;
- (double)inAppTime;
- (long long)netQualityType;
- (void)recoverWithSessionRecord:;
- (unsigned long long)sequenceCode;
- (void)setEnableUpload:;
- (void)setInAppTime:;
- (void)setNetQualityType:;
- (void)setSequenceCode:;
- (void)setSessionID:;
- (void)setAppVersion:;
- (void)setBuildVersion:;
- (id)buildVersion;
- (id)sessionID;
- (id)appVersion;
- (id)init;
- (id)osVersion;
- (void)setOsVersion:;
- (void)setTimestamp:;
- (void).cxx_destruct;
- (double)timestamp;
- (unsigned long long)localID;
- (id)sdkVersion;
- (void)setSdkVersion:;
- (id)reportDictionary;
- (void)setLocalID:;
+ (unsigned long long)cleanupWeight;
+ (id)tableName;
+ (id)newRecord;
@end
