@interface AMSMetricsFigaroEventModifier : NSObject
@property (nonatomic) NSDictionary fieldFilters;
@property (nonatomic) NSDictionary metricsDictionary;
@property (nonatomic) NSDictionary overrideDictionary;
@property (nonatomic) NSString sampleSessionKey;
@property (nonatomic) double flushInterval;
- (id)metricsDictionary;
- (id)_fieldFiltersFromOverrides:;
- (id)_createSampleSessionKey;
- (id)prepareEvent:;
- (id)overrideDictionary;
- (id)fieldFilters;
- (BOOL)shouldSkipEvent:;
- (double)flushInterval;
- (id)sampleSessionKey;
- (BOOL)_shouldSampleEvent:;
- (BOOL)shouldDropEvent:;
- (id)_encodedExperimentDataForTopic:;
- (BOOL)fieldFiltersMatchEvent:;
- (void).cxx_destruct;
- (id)initWithMetricsDictionary:overrideDictionary:;
- (id)_overridePropertyForKey:;
- (id)reportingURLForEvent:;
@end
