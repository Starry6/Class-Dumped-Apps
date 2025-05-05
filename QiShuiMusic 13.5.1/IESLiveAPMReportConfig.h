@interface IESLiveAPMReportConfig : NSObject
@property (nonatomic) IESLiveFPSReportConfig fpsReportConfig;
@property (nonatomic) IESLiveMemoryReportConfig memoryReportConfig;
- (id)fpsReportConfig;
- (id)memoryReportConfig;
- (void)setFpsReportConfig:;
- (void)setMemoryReportConfig:;
- (id)toDic;
- (void).cxx_destruct;
- (id)copyWithZone:;
@end
