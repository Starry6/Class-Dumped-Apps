@interface VEAlgorithmMVVideoSegInfo : NSObject
@property (nonatomic) float startTime;
@property (nonatomic) float endTime;
@property (nonatomic) NSString fragmentId;
@property (nonatomic) float cropRatio;
@property (nonatomic) NSString materialType;
@property (nonatomic) float sourceDuration;
@property (nonatomic) q groupId;
- (float)cropRatio;
- (id)fragmentId;
- (void)setCropRatio:;
- (void)setFragmentId:;
- (void)setSourceDuration:;
- (float)sourceDuration;
- (void)setStartTime:;
- (void)setEndTime:;
- (float)startTime;
- (float)endTime;
- (long long)groupId;
- (void).cxx_destruct;
- (void)setGroupId:;
- (id)materialType;
- (void)setMaterialType:;
@end
