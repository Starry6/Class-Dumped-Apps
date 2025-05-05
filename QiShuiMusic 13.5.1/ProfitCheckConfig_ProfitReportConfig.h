@interface ProfitCheckConfig_ProfitReportConfig : IESLivePBBaseMessage
@property (nonatomic) q profitType;
@property (nonatomic) q duration;
@property (nonatomic) q reportType;
+ (id)descriptor;
@end
