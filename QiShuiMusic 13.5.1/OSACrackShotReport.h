@interface OSACrackShotReport : OSAStackShotReport
@property (nonatomic) NSDictionary spindump;
@property (nonatomic) BOOL isSnapshotDisabled;
- (id)problemType;
- (BOOL)saveWithOptions:;
- (id)reportNamePrefix;
- (id)additionalIPSMetadata;
- (id)decode_reason:reason:;
- (void)generateLogAtLevel:withBlock:;
- (id)initForPid:exitSnapshot:reason:;
- (void).cxx_destruct;
- (BOOL)isSnapshotDisabled;
- (id)spindump;
- (id)initWithPid:procName:bundleID:exitSnapshot:reason:;
- (id)decode_cpuType;
- (void)setSpindump:;
@end
