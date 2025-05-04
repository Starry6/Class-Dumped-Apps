@interface AWEBoostInfoModel : MTLModel
@property (nonatomic) q status;
@property (nonatomic) NSString result;
@property (nonatomic) AWEURLModel iconURL;
@property (nonatomic) NSString schema;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)schema;
- (void)setIconURL:;
- (void)setResult:;
- (void)setSchema:;
- (void)setStatus:;
- (id)iconURL;
- (void).cxx_destruct;
- (long long)status;
- (id)result;
+ (id)iconURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
