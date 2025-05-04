@interface AWELocalUserDataReportConfig : AWEBaseApiModel
@property (nonatomic) NSString tableName;
@property (nonatomic) double reportTime;
- (id)tableName;
- (void)setTableName:;
- (void).cxx_destruct;
- (double)reportTime;
- (void)setReportTime:;
+ (id)JSONKeyPathsByPropertyKey;
@end
