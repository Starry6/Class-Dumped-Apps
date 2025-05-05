@interface MPSWorkloadStatistics : NSObject
@property (nonatomic) double float32Ops;
@property (nonatomic) double float16Ops;
@property (nonatomic) double integerOps;
@property (nonatomic) double deviceMemoryBytesRead;
@property (nonatomic) double deviceMemoryBytesWrite;
@property (nonatomic) double threadgroupMemoryBytesRead;
@property (nonatomic) double threadgroupMemoryBytesWrite;
- (id)init;
- (void)dealloc;
- (double)float32Ops;
- (void)setFloat32Ops:;
- (double)float16Ops;
- (void)setFloat16Ops:;
- (double)integerOps;
- (void)setIntegerOps:;
- (double)deviceMemoryBytesRead;
- (void)setDeviceMemoryBytesRead:;
- (double)deviceMemoryBytesWrite;
- (void)setDeviceMemoryBytesWrite:;
- (double)threadgroupMemoryBytesRead;
- (void)setThreadgroupMemoryBytesRead:;
- (double)threadgroupMemoryBytesWrite;
- (void)setThreadgroupMemoryBytesWrite:;
+ (id)new;
@end
