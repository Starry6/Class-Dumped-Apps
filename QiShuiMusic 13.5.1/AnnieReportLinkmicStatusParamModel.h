@interface AnnieReportLinkmicStatusParamModel : IESLiveBridgeModel
@property (nonatomic) NSNumber reportType;
@property (nonatomic) NSDictionary reportInfo;
- (id)reportInfo;
- (void)setReportInfo:;
- (void)setReportType:;
- (void).cxx_destruct;
- (id)reportType;
+ (id)modelCustomPropertyMapper;
@end
