@interface TIUserModelValues : NSObject
@property (nonatomic) NSString inputMode;
@property (nonatomic) TIAnalyticsMetricsContext context;
@property (nonatomic) <TIUserModelDataStoring> userModelDataStore;
@property (nonatomic) NSDictionary durableCounters;
@property (nonatomic) NSDictionary settingsDictionary;
- (id)inputMode;
- (id)context;
- (void)persistForDate:;
- (id)settingsDictionary;
- (void).cxx_destruct;
- (id)initWithInputMode:context:userModelDataStore:durableCounters:settingsDictionary:;
- (void)extendCountersForWeeklyMetricKeys:;
- (void)loadTransientCounter:forNumberOfDays:fromLoadedDate:;
- (id)getTransientCounterForKey:;
- (void)addInteger:toCounterWithKey:andCandidateLength:;
- (void)addDouble:toCounterWithKey:andCandidateLength:;
- (int)indexFromCandidateLength:forCounter:;
- (void)addToTransientCounterFromDatabaseEntry:withWeeklyMetricKeys:fromLoadedDate:;
- (void)addEntry:toCounter:forDaysPrior:;
- (id)countsFromTransientCounterWithName:forNumberOfDays:fromLoadedDate:;
- (id)aggregatedCountFromTransientCounterWithName:forNumberOfDays:fromLoadedDate:;
- (id)settingValueFromName:;
- (id)userModelDataStore;
- (id)durableCounters;
@end
