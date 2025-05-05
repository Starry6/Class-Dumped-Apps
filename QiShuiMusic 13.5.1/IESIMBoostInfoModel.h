@interface IESIMBoostInfoModel : MTLModel
@property (nonatomic) q status;
@property (nonatomic) NSString result;
@property (nonatomic) IESIMURLModel iconURL;
@property (nonatomic) NSString schema;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setIconURL:;
- (id)result;
- (void)setStatus:;
- (id)schema;
- (void)setSchema:;
- (void).cxx_destruct;
- (id)iconURL;
- (long long)status;
- (void)setResult:;
+ (id)iconURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
