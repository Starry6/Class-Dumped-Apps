@interface CJPayAlogReportConfigModel : JSONModel
@property (nonatomic) BOOL reportEnable;
@property (nonatomic) q reportTimeInterval;
@property (nonatomic) q reportEnableInterval;
@property (nonatomic) NSArray eventWhiteList;
- (id)eventWhiteList;
- (BOOL)reportEnable;
- (long long)reportEnableInterval;
- (long long)reportTimeInterval;
- (void)setEventWhiteList:;
- (void)setReportEnable:;
- (void)setReportEnableInterval:;
- (void)setReportTimeInterval:;
- (void).cxx_destruct;
+ (id)keyMapper;
+ (BOOL)propertyIsOptional:;
@end
