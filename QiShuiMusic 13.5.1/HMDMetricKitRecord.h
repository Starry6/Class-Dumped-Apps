@interface HMDMetricKitRecord : HMDTrackerRecord
@property (nonatomic) NSInteger eventType;
@property (nonatomic) NSDictionary diagnostic;
@property (nonatomic) NSDictionary binaryImages;
@property (nonatomic) NSDictionary recentAppImages;
@property (nonatomic) NSDictionary historyAppImageInfo;
@property (nonatomic) NSDictionary metric;
- (id)recentAppImages;
- (id)historyAppImageInfo;
- (void)setBinaryImages:;
- (void)setHistoryAppImageInfo:;
- (void)setRecentAppImages:;
- (id)binaryImages;
- (int)eventType;
- (void)setEventType:;
- (void).cxx_destruct;
- (void)setMetric:;
- (id)metric;
- (id)diagnostic;
- (void)setDiagnostic:;
- (id)reportDictionary;
+ (id)tableName;
@end
