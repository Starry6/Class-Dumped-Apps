@interface SignpostMetrics : NSObject
@property (nonatomic) NSData binarySnapshot;
@property (nonatomic) NSNumber cpuTimeNsec;
@property (nonatomic) NSNumber dirtyMemoryKB;
@property (nonatomic) NSNumber dirtyMemoryLifetimePeakKB;
@property (nonatomic) NSNumber storageDirtiedKB;
@property (nonatomic) NSNumber cpuInstructionsKI;
- (id)debugDescription;
- (void).cxx_destruct;
- (id)description;
- (id)initWithSnapshotDict:data:;
- (id)binarySnapshot;
- (id)cpuTimeNsec;
- (id)dirtyMemoryKB;
- (id)dirtyMemoryLifetimePeakKB;
- (id)storageDirtiedKB;
- (id)cpuInstructionsKI;
+ (id)_newMetricsFromData:;
+ (id)newMetricsForSignpostEvent:;
+ (id)_deltaDescription:;
@end
