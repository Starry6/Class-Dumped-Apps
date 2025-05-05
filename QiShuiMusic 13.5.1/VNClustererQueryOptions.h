@interface VNClustererQueryOptions : VNClustererOptions
- (id)initWithType:cachePath:state:threshold:torsoThreshold:requestRevision:;
- (id)initWithType:cachePath:state:threshold:requestRevision:;
- (id)initWithType:cachePath:state:threshold:torsoThreshold:requestRevision:torsoprintRequestRevision:;
- (id)initWithType:cachePath:state:threshold:;
- (id)initWithType:cachePath:state:threshold:torsoThreshold:;
@end
