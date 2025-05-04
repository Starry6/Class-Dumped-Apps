@interface AWEImageTemplateExtraInfoModel : MTLModel
@property (nonatomic) AWEImageTemplateAuthorInfoModel templateAuthor;
@property (nonatomic) q fragmentCount;
@property (nonatomic) AWEImageTemplateLitmitModel imageTemplateLimit;
@property (nonatomic) NSArray qualityTags;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)qualityTags;
- (void)setQualityTags:;
- (void)setTemplateAuthor:;
- (id)templateAuthor;
- (id)imageTemplateLimit;
- (void)setImageTemplateLimit:;
- (long long)fragmentCount;
- (void).cxx_destruct;
- (void)setFragmentCount:;
+ (id)templateAuthorJSONTransformer;
+ (id)imageTemplateLimitJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
