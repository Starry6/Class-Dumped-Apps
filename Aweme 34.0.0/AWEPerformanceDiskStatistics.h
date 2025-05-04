@interface AWEPerformanceDiskStatistics : NSObject
@property (nonatomic) Q appSize;
@property (nonatomic) double totalSize;
@property (nonatomic) double freeSize;
- (double)folderSizeAtPath:;
- (void)setAppSize:;
- (void)calculateOverallSizeWithProgress:completion:;
- (BOOL)useAllocatedDiskSize;
- (void)calculateSizeInPaths:completion:;
- (void)_calculateOverallSizeWithProgress:completion:;
- (void)setFreeSize:;
- (double)totalSize;
- (double)freeSize;
- (void)setTotalSize:;
- (unsigned long long)appSize;
+ (id)appropriateSize:;
+ (BOOL)useNewSizeFormat;
@end
