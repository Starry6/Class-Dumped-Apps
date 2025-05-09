@interface HMDMemoryMonitorRecord : HMDMonitorRecord
@property (nonatomic) double totalMemory;
@property (nonatomic) double availableMemory;
@property (nonatomic) double usedMemory;
@property (nonatomic) double appUsedMemory;
@property (nonatomic) double pageUsedMemory;
@property (nonatomic) double customUsedMemory;
@property (nonatomic) Q memoryWarning;
@property (nonatomic) Q isBackground;
@property (nonatomic) NSArray dumpInfo;
- (double)availableMemory;
- (void)setTotalMemory:;
- (double)appUsedMemory;
- (double)customUsedMemory;
- (double)pageUsedMemory;
- (void)setAppUsedMemory:;
- (void)setAvailableMemory:;
- (void)setCustomUsedMemory:;
- (void)setDumpInfo:;
- (void)setMemoryWarning:;
- (void)setPageUsedMemory:;
- (void)setUsedMemory:;
- (double)totalMemory;
- (double)usedMemory;
- (unsigned long long)isBackground;
- (void)setIsBackground:;
- (void).cxx_destruct;
- (id)dumpInfo;
- (double)value;
- (unsigned long long)memoryWarning;
- (id)reportDictionary;
+ (id)aggregateDataWithRecords:;
+ (unsigned long long)cleanupWeight;
@end
