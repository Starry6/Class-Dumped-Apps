@interface CPMSStateReader : NSObject
+ (id)log;
+ (id)copyCPMSControlStateSnapshots;
+ (id)copyCPMSPmaxState:;
+ (id)getCPMSControlStateSnapshotDictionary:;
+ (id)getPowerBudgetDictionary:;
+ (id)timescaleDisplayName:;
@end
