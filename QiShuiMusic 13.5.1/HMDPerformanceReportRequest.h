@interface HMDPerformanceReportRequest : NSObject
@property (nonatomic) Q limitCount;
@property (nonatomic) Q limitCountFromMemory;
@property (nonatomic) NSArray dataAndConditions;
@property (nonatomic) NSArray dataOrConditions;
@property (nonatomic) {HMDRecordLocalIDRange=QQ} uploadingRange;
- (id)dataAndConditions;
- (id)dataOrConditions;
- (unsigned long long)limitCountFromMemory;
- (void)setDataAndConditions:;
- (void)setDataOrConditions:;
- (void)setLimitCountFromMemory:;
- (void)setUploadingRange:;
- (id)uploadingRange;
- (unsigned long long)limitCount;
- (void)setLimitCount:;
- (void).cxx_destruct;
@end
