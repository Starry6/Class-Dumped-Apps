@interface CJPayHybridPerformanceModel : NSObject
@property (nonatomic) double callAPITime;
@property (nonatomic) double createFinishdedTime;
@property (nonatomic) double startLoadURLTime;
@property (nonatomic) double pageStartedTime;
@property (nonatomic) double pageLoadFinishedTime;
- (double)pageStartedTime;
- (void)setCallAPITime:;
- (double)callAPITime;
- (double)createFinishdedTime;
- (long long)hybridContainerCreatedFinishedTime;
- (long long)hybridContainerPrepareTime;
- (long long)hybridPageLoadFinishedTime;
- (long long)hybridPageStartedTime;
- (long long)hybridStartURLLoadTime;
- (double)pageLoadFinishedTime;
- (void)setCreateFinishdedTime:;
- (void)setPageLoadFinishedTime:;
- (void)setPageStartedTime:;
- (void)setStartLoadURLTime:;
- (double)startLoadURLTime;
@end
