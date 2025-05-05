@interface VNClustererContextBase : NSObject
- (void).cxx_destruct;
- (BOOL)_checkInitInputs:cachePath:checkType:requestRevision:error:;
- (id)initWithType:cachePath:state:readOnly:threshold:requestRevision:error:;
- (id)initWithType:cachePath:state:readOnly:threshold:requestRevision:torsoprintRequestRevision:error:;
- (id)initWithType:cachePath:state:readOnly:threshold:torsoThreshold:requestRevision:error:;
- (id)initWithType:cachePath:state:readOnly:threshold:torsoThreshold:requestRevision:torsoprintRequestRevision:error:;
- (id)_createGreedyClusterer:state:error:;
- (void)_initializeGreedyClustererOptions:;
@end
