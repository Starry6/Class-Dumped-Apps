@interface BDHMBlankDetectionResultModel : NSObject
@property (nonatomic) BOOL isBlank;
@property (nonatomic) q snapshotDuration;
@property (nonatomic) q blankDtectionDuration;
@property (nonatomic) q totalDuration;
- (long long)blankDtectionDuration;
- (void)setBlankDtectionDuration:;
- (void)setSnapshotDuration:;
- (long long)snapshotDuration;
- (BOOL)isBlank;
- (long long)totalDuration;
- (void)setIsBlank:;
- (void)setTotalDuration:;
@end
