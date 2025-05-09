@interface BURaptorTrackerModel : NSObject
@property (nonatomic) NSString trackID;
@property (nonatomic) q index;
@property (nonatomic) NSString value;
@property (nonatomic) NSString gen_time;
@property (nonatomic) q encrypt;
@property (nonatomic) q sending;
@property (nonatomic) NSDictionary eventDataDict;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)customDebugInfo;
- (BOOL)isApplogTracker;
- (id)keyDictionayKey;
- (id)_pbu_decryptWithValue:;
- (id)_pbu_encryptWithParams:;
- (void)_pbu_updateEventDataDictWithDict:;
- (void)appendEventDataDict_custom_extra_ad_data_WithDict:;
- (id)debugTrackerArray;
- (id)eventDataDict;
- (id)eventExtraInfoDict;
- (id)eventExtraInfoKey;
- (id)gen_time;
- (id)initWithEventDataDict:index:;
- (BOOL)isDebugTracker;
- (BOOL)isRealTimeTracker;
- (BOOL)isStationShowOrClick;
- (BOOL)isStatsTracker;
- (id)keyDictionayValue;
- (id)keyValueInfo;
- (id)realTimeTrackerArray;
- (void)setEncrypt:;
- (void)setEventDataDict:;
- (void)setGen_time:;
- (void)updateEventDataDict_custom_extra_ad_data_WithDict:;
- (long long)index;
- (void)setValue:;
- (void)setSending:;
- (void)setIndex:;
- (void).cxx_destruct;
- (id)trackID;
- (id)description;
- (id)value;
- (void)setTrackID:;
- (long long)sending;
- (long long)encrypt;
+ (id)b1u2_primaryKey;
+ (id)b1u2_databaseName;
+ (id)b1u2_ignoreProperties;
+ (id)b1u2_tableName;
@end
