@interface AWECodeGenNoticeSubCategoryModel : AWEBaseDataModel
@property (nonatomic) NSInteger modelID;
@property (nonatomic) NSString name;
@property (nonatomic) NSString traceParam;
- (id)traceParam;
- (void)setTraceParam:;
- (void)setModelID:;
- (int)modelID;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
+ (id)JSONKeyPathsByPropertyKey;
@end
