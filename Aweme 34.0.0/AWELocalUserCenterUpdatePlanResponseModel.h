@interface AWELocalUserCenterUpdatePlanResponseModel : AWEBaseApiModel
@property (nonatomic) NSArray tableNames;
@property (nonatomic) NSDictionary tableMetas;
@property (nonatomic) NSArray reportConfigs;
- (id)tableMetas;
- (void)setTableMetas:;
- (id)reportConfigs;
- (void)setReportConfigs:;
- (void).cxx_destruct;
- (id)tableNames;
- (void)setTableNames:;
+ (id)reportConfigsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
