@interface HMInstance : NSObject
@property (nonatomic) HMInstanceConfig config;
@property (nonatomic) @? sequenceNumberGenerator;
- (void)aggregateData:;
- (void)buildHermasInstance;
- (void)deleteSemifinishedRecords:WithSpanIdList:;
- (void)finishSemiSpanRecord:;
- (void)finishSemiTraceRecord:WithSpanIdList:;
- (BOOL)isDropData;
- (void)launchReportForSemi;
- (id)nodeWithCondition:;
- (void)recordCache:;
- (void)recordData:;
- (void)recordData:priority:;
- (id)recorderWithPriority:;
- (id)searchWithCondition:;
- (id)sequenceNumberGenerator;
- (void)setSequenceNumberGenerator:;
- (void)startSemiSpanRecord:;
- (void)startSemiTraceRecord:;
- (void)stopAggregate:;
- (void)stopCache;
- (void)updateReportHeader:;
- (id)initWithConfig:;
- (void).cxx_destruct;
- (id)config;
- (id).cxx_construct;
- (BOOL)isServerAvailable;
@end
