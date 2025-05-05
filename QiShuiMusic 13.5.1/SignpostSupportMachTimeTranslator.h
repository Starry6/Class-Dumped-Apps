@interface SignpostSupportMachTimeTranslator : NSObject
@property (nonatomic) NSMutableArray translationRanges;
@property (nonatomic) NSMutableArray startMachAbsoluteTimes;
@property (nonatomic) NSMutableArray startMachContinuousTimes;
@property (nonatomic) Q maxEntries;
@property (nonatomic) NSObject<OS_dispatch_queue> synchronizationQueue;
@property (nonatomic) BOOL isMonitoringSleepWake;
@property (nonatomic) BOOL containsContinuousTimeJumps;
- (id)init;
- (void)setSynchronizationQueue:;
- (id)initWithDataRepresentation:;
- (unsigned long long)maxEntries;
- (id)initWithDictionaryRepresentation:;
- (void)setMaxEntries:;
- (id)synchronizationQueue;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)dataRepresentation;
- (unsigned long long)machAbsoluteTimeForMachContinuousTime:;
- (unsigned long long)machContinuousTimeForMachAbsoluteTime:;
- (BOOL)containsContinuousTimeJumps;
- (id)serializableDictionaryRepresentation;
- (void)addTimestampPairWithMachAbsoluteTime:machContinuousTime:;
- (id)translationRanges;
- (id)startMachAbsoluteTimes;
- (id)startMachContinuousTimes;
- (BOOL)isMonitoringSleepWake;
- (void)setIsMonitoringSleepWake:;
@end
