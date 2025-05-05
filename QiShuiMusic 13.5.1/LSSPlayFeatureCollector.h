@interface LSSPlayFeatureCollector : LSSBaseFeatureCollector
@property (nonatomic) NSMutableArray timerSerialFeaturesList;
@property (nonatomic) NSMutableDictionary sessionInfoMap;
@property (nonatomic) NSMutableArray sessionIdArray;
@property (nonatomic) NSArray RTFeaturesList;
@property (nonatomic) NSMutableDictionary downloadSpeedInfo;
- (id)RTFeaturesList;
- (void)setEventCallBackInfo:eventInfo:;
- (id)fillInputFeature:projectKey:strategyConfigBundleName:extraInfo:;
- (id)changeFirstChar:;
- (id)downloadSpeedInfo;
- (id)fillInputRTFeature:projectKey:strategyConfigBundleName:extraInfo:;
- (id)initCollector;
- (void)initTimerSerialFeaturesList;
- (id)sessionIdArray;
- (id)sessionInfoMap;
- (void)setDownloadSpeedInfo:;
- (void)setRTFeaturesList:;
- (void)setSessionIdArray:;
- (void)setSessionInfoMap:;
- (void)setTimerSerialFeaturesList:;
- (void)setTimerSerialInfo;
- (id)timerSerialFeaturesList;
- (void)updateFeatureConfig:;
- (void).cxx_destruct;
+ (id)defaultFeatureCollector;
@end
