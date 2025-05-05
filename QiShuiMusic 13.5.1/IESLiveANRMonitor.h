@interface IESLiveANRMonitor : NSObject
@property (nonatomic) HMDANRSDKMonitor anrMonitor;
@property (nonatomic) double recordInterval;
@property (nonatomic) NSMutableArray anrRecords;
@property (nonatomic) IESLiveANRRecord summaryRecord;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)popRecentRecord;
- (id)anrMonitor;
- (id)anrRecords;
- (void)didBlockWithDuration:;
- (id)getSummaryRecord;
- (double)recordInterval;
- (void)setAnrMonitor:;
- (void)setAnrRecords:;
- (void)setRecordInterval:;
- (void)setSummaryRecord:;
- (id)summaryRecord;
- (void)updateRecordWithAnrDuration:;
- (id)init;
- (void)dealloc;
- (void)setup;
- (void).cxx_destruct;
@end
