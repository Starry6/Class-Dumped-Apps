@interface UgenTemplateItem : NSObject
@property (nonatomic) <UgenTemplateDataSource> dataSource;
@property (nonatomic) NSDictionary templateInfo;
- (BOOL)checkValidVersion;
- (id)templateInfo;
- (void)setDataSource:;
- (void)setTemplateInfo:;
- (id)dataSource;
- (void).cxx_destruct;
@end
