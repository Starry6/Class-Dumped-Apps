@interface SSMetricsEventTableEntity : SSSQLiteEntity
- (void)dealloc;
- (id)reportingDictionary;
- (id)reportingJSON;
- (void).cxx_destruct;
- (id)reportingCanaryIdentifier;
+ (id)databaseTable;
@end
