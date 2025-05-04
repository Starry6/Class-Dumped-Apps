@interface AWEMusicRiskInfoModel : MTLModel
@property (nonatomic) NSString musicId;
@property (nonatomic) NSString logId;
@property (nonatomic) q riskResult;
@property (nonatomic) double timestamp;
- (void)setMusicId:;
- (id)musicId;
- (id)logId;
- (void)setLogId:;
- (long long)riskResult;
- (void)setRiskResult:;
- (double)timestamp;
- (void)setTimestamp:;
- (void).cxx_destruct;
@end
