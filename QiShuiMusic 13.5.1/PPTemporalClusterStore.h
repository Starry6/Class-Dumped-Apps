@interface PPTemporalClusterStore : NSObject
- (id)init;
- (BOOL)iterRankedTemporalClustersForStartDate:endDate:error:block:;
@end
