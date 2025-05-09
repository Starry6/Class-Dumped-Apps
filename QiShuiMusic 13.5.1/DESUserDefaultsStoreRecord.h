@interface DESUserDefaultsStoreRecord : NSObject
@property (nonatomic) NSString recordID;
@property (nonatomic) NSString completionDateKey;
@property (nonatomic) NSDate lastCompletionDate;
@property (nonatomic) q performCount;
@property (nonatomic) NSDictionary debugInfo;
@property (nonatomic) NSNumber periodInSeconds;
@property (nonatomic) NSNumber maxTimeLimitInSeconds;
- (id)debugInfo;
- (id)recordID;
- (void).cxx_destruct;
- (id)description;
- (void)setDebugInfo:;
- (id)initWithRecordID:;
- (id)completionDateKey;
- (id)lastCompletionDate;
- (void)setLastCompletionDate:;
- (id)performCountKey;
- (long long)performCount;
- (void)setPerformCount:;
- (id)debugInfoKey;
- (id)periodKey;
- (id)periodInSeconds;
- (void)setPeriodInSeconds:;
- (id)maxTimeLimitKey;
- (id)maxTimeLimitInSeconds;
- (void)setMaxTimeLimitInSeconds:;
+ (void)purgeObsoleted;
+ (id)schedulerWakeupPeriodInSeconds;
+ (void)setSchedulerWakeupPeriodInSeconds:;
@end
