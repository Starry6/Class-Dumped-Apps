@interface ARSceneReconstructionOptions : NSObject
@property (nonatomic) q voxelSize;
@property (nonatomic) q bucketsCount;
@property (nonatomic) q preset;
@property (nonatomic) BOOL deterministicMode;
@property (nonatomic) BOOL lowQosSchedulingEnabled;
@property (nonatomic) BOOL enableOccupancyMapping;
- (void)setPreset:;
- (id)init;
- (long long)preset;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (long long)bucketsCount;
- (long long)voxelSize;
- (void)setVoxelSize:;
- (BOOL)deterministicMode;
- (void)setDeterministicMode:;
- (BOOL)lowQosSchedulingEnabled;
- (void)setLowQosSchedulingEnabled:;
- (void)setBucketsCount:;
- (BOOL)enableOccupancyMapping;
- (void)setEnableOccupancyMapping:;
@end
