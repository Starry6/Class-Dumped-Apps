@interface AWELocalUserDataReportResponseModel : AWEBaseApiModel
@property (nonatomic) NSString tableMeta;
@property (nonatomic) AWELocalUserDataReportConfig reportConfig;
- (id)reportConfig;
- (void)setReportConfig:;
- (id)tableMeta;
- (void)setTableMeta:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
