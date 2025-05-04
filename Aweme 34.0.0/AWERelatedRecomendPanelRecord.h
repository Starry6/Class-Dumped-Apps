@interface AWERelatedRecomendPanelRecord : NSObject
@property (nonatomic) MMKV mmkv;
@property (nonatomic) double beginOfToday;
@property (nonatomic) Q showTimesToday;
@property (nonatomic) Q noInterestTimes;
@property (nonatomic) Q continuousNoConsuptionTimes;
@property (nonatomic) NSArray awemeIdRecord;
- (void)setMmkv:;
- (id)mmkv;
- (double)beginOfToday;
- (void)setShowTimesToday:;
- (void)setBeginOfToday:;
- (id)awemeIdRecord;
- (id)subarrayWithRange:ofArray:;
- (void)setAwemeIdRecord:;
- (void)checkCrossDay;
- (void)addRecordForAwemeId:;
- (unsigned long long)showTimesToday;
- (unsigned long long)noInterestTimes;
- (void)setNoInterestTimes:;
- (unsigned long long)continuousNoConsuptionTimes;
- (void)setContinuousNoConsuptionTimes:;
- (void).cxx_destruct;
+ (id)dateOfHour:date:;
+ (id)dateOfHour:minute:date:;
+ (id)currentDate;
+ (double)currentTimestamp;
@end
