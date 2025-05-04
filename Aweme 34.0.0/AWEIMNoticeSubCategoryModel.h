@interface AWEIMNoticeSubCategoryModel : IESIMBaseApiModel
@property (nonatomic) q identifier;
@property (nonatomic) NSString name;
@property (nonatomic) NSString traceParam;
- (id)traceParam;
- (void)setTraceParam:;
- (void)setIdentifier:;
- (long long)identifier;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
+ (id)JSONKeyPathsByPropertyKey;
@end
