@interface AWEMVTemplateMergedDetailModel : MTLModel
@property (nonatomic) Q templateID;
@property (nonatomic) q type;
@property (nonatomic) AWEAweMVTemplateModel cutsameTemplate;
@property (nonatomic) AWEMvDetailModel classicalTemplate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)cutsameTemplate;
- (id)classicalTemplate;
- (void)setCutsameTemplate:;
- (void)setClassicalTemplate:;
- (unsigned long long)templateID;
- (void)setTemplateID:;
- (long long)type;
- (void)setType:;
- (void).cxx_destruct;
+ (id)cutsameTemplateJSONTransformer;
+ (id)classicalTemplateJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
