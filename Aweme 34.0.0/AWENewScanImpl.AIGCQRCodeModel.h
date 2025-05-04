@interface AWENewScanImpl.AIGCQRCodeModel : MTLModel
@property (nonatomic) AWEURLModel codeURL;
@property (nonatomic) AWEURLModel backgroundURL;
@property (nonatomic) q type;
@property (nonatomic) q createTime;
- (id)codeURL;
- (void)setCodeURL:;
- (id)backgroundURL;
- (void)setBackgroundURL:;
- (id)initWithDictionary:error:;
- (id)init;
- (long long)createTime;
- (long long)type;
- (void)setCreateTime:;
- (void)setType:;
- (void).cxx_destruct;
- (id)initWithCoder:;
+ (id)codeURLJSONTransformer;
+ (id)backgroundURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
