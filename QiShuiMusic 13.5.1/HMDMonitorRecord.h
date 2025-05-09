@interface HMDMonitorRecord : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) Q localID;
@property (nonatomic) Q sequenceCode;
@property (nonatomic) double timestamp;
@property (nonatomic) double inAppTime;
@property (nonatomic) Q isReported;
@property (nonatomic) Q enableUpload;
@property (nonatomic) q netQualityType;
@property (nonatomic) NSString scene;
@property (nonatomic) NSString customScene;
@property (nonatomic) NSString business;
@property (nonatomic) NSDictionary filters;
@property (nonatomic) NSDictionary extraInfos;
@property (nonatomic) NSString sessionID;
@property (nonatomic) NSString updateVersionCode;
@property (nonatomic) NSString osVersion;
@property (nonatomic) NSString appVersion;
@property (nonatomic) BOOL baseSample;
- (void)addInfo;
- (void)setCustomScene:;
- (BOOL)baseSample;
- (long long)compare:forKeyPath:;
- (id)customScene;
- (unsigned long long)enableUpload;
- (id)extraInfos;
- (double)inAppTime;
- (BOOL)needAggregate;
- (long long)netQualityType;
- (unsigned long long)sequenceCode;
- (void)setBaseSample:;
- (void)setEnableUpload:;
- (void)setExtraInfos:;
- (void)setInAppTime:;
- (void)setIsReported:;
- (void)setNetQualityType:;
- (void)setSequenceCode:;
- (void)setUpdateVersionCode:;
- (id)updateVersionCode;
- (void)setSessionID:;
- (void)setAppVersion:;
- (id)filters;
- (id)sessionID;
- (id)appVersion;
- (id)init;
- (id)osVersion;
- (void)setScene:;
- (void)setFilters:;
- (id)scene;
- (void)setOsVersion:;
- (void)setTimestamp:;
- (void).cxx_destruct;
- (unsigned long long)isReported;
- (double)timestamp;
- (double)value;
- (unsigned long long)localID;
- (id)business;
- (void)setBusiness:;
- (id)reportDictionary;
- (void)setLocalID:;
+ (id)aggregateDataForRecords:;
+ (id)aggregateDataWithRecords:;
+ (unsigned long long)cleanupWeight;
+ (id)getInjectedPatchFilters;
+ (id)reportDataForRecords:;
+ (id)tableName;
+ (id)newRecord;
@end
