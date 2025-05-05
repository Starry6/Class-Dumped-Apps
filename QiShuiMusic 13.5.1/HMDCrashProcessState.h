@interface HMDCrashProcessState : HMDCrashModel
@property (nonatomic) Q freeBytes;
@property (nonatomic) Q appUsedBytes;
@property (nonatomic) Q totalBytes;
@property (nonatomic) Q usedBytes;
@property (nonatomic) Q usedVirtualMemory;
@property (nonatomic) Q totalVirtualMemory;
- (unsigned long long)appUsedBytes;
- (void)setAppUsedBytes:;
- (void)setTotalVirtualMemory:;
- (void)setUsedVirtualMemory:;
- (unsigned long long)totalVirtualMemory;
- (unsigned long long)usedVirtualMemory;
- (void)updateWithDictionary:;
- (unsigned long long)totalBytes;
- (unsigned long long)usedBytes;
- (void)setUsedBytes:;
- (unsigned long long)freeBytes;
- (void)setFreeBytes:;
- (void)setTotalBytes:;
@end
