@interface ENExposureDaySummary : NSObject
@property (nonatomic) NSDate date;
@property (nonatomic) ENExposureSummaryItem confirmedTestSummary;
@property (nonatomic) ENExposureSummaryItem confirmedClinicalDiagnosisSummary;
@property (nonatomic) ENExposureSummaryItem recursiveSummary;
@property (nonatomic) ENExposureSummaryItem selfReportedSummary;
@property (nonatomic) ENExposureSummaryItem daySummary;
- (void)encodeWithXPCObject:;
- (id)initWithXPCObject:error:;
- (id)date;
- (void).cxx_destruct;
- (void)setDate:;
- (id)description;
- (id)daySummary;
- (void)setDaySummary:;
- (id)selfReportedSummary;
- (id)recursiveSummary;
- (void)roundDurations;
- (id)confirmedClinicalDiagnosisSummary;
- (id)confirmedTestSummary;
- (void)setConfirmedTestSummary:;
- (void)setConfirmedClinicalDiagnosisSummary:;
- (void)setRecursiveSummary:;
- (void)setSelfReportedSummary:;
@end
