@interface CSJAdSDKStartMetric : NSObject
@property (nonatomic) double asyncTime;
@property (nonatomic) double startDate;
@property (nonatomic) double configUtilStartDate;
@property (nonatomic) double uaidStartDate;
@property (nonatomic) double configurationStartDate;
@property (nonatomic) double serviceStartDate;
@property (nonatomic) double fetchSettingsStartDate;
@property (nonatomic) double trackerStartDate;
@property (nonatomic) double dynamicLayoutStartDate;
@property (nonatomic) double ugenStartDate;
@property (nonatomic) double tncStartDate;
@property (nonatomic) double observerStartDate;
@property (nonatomic) double secSDKStartDate;
@property (nonatomic) double sofCharaSDKStartDate;
@property (nonatomic) double endDate;
- (double)secSDKStartDate;
- (double)asyncTime;
- (double)configUtilStartDate;
- (double)configurationStartDate;
- (double)dynamicLayoutStartDate;
- (double)fetchSettingsStartDate;
- (id)metricDictionary;
- (double)observerStartDate;
- (double)serviceStartDate;
- (void)setAsyncTime:;
- (void)setConfigUtilStartDate:;
- (void)setConfigurationStartDate:;
- (void)setDynamicLayoutStartDate:;
- (void)setFetchSettingsStartDate:;
- (void)setObserverStartDate:;
- (void)setSecSDKStartDate:;
- (void)setServiceStartDate:;
- (void)setSofCharaSDKStartDate:;
- (void)setTncStartDate:;
- (void)setTrackerStartDate:;
- (void)setUaidStartDate:;
- (void)setUgenStartDate:;
- (double)sofCharaSDKStartDate;
- (double)tncStartDate;
- (double)trackerStartDate;
- (double)uaidStartDate;
- (double)ugenStartDate;
- (double)startDate;
- (void)setStartDate:;
- (void)setEndDate:;
- (double)endDate;
@end
