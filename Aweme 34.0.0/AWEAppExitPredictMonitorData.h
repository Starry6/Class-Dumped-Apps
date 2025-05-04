@interface AWEAppExitPredictMonitorData : NSObject
@property (nonatomic) q waitCount;
@property (nonatomic) NSString runKey;
@property (nonatomic) NSString s_result;
@property (nonatomic) NSString ss_result;
@property (nonatomic) NSDictionary extData;
- (void)setRunKey:;
- (id)extData;
- (void)setExtData:;
- (long long)waitCount;
- (id)runKey;
- (id)s_result;
- (id)ss_result;
- (id)getReportData;
- (void)setWaitCount:;
- (void)setS_result:;
- (void)setSs_result:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithCoder:;
@end
