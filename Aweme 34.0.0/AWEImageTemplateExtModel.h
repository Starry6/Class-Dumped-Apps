@interface AWEImageTemplateExtModel : MTLModel
@property (nonatomic) AWETemplateAuthorModel author;
@property (nonatomic) q fragmentCount;
@property (nonatomic) AWEImageTemplateLimitationsModel limitations;
@property (nonatomic) NSArray qualityTags;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)limitations;
- (void)setLimitations:;
- (id)qualityTags;
- (void)setQualityTags:;
- (id)author;
- (long long)fragmentCount;
- (void).cxx_destruct;
- (void)setAuthor:;
- (void)setFragmentCount:;
+ (id)authorJSONTransformer;
+ (id)limitationsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
