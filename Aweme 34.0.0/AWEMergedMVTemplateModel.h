@interface AWEMergedMVTemplateModel : MTLModel
@property (nonatomic) Q templateID;
@property (nonatomic) q templateType;
@property (nonatomic) AWEAweMVTemplateModel cutSameMvModel;
@property (nonatomic) NSArray urlPrefix;
@property (nonatomic) AWEClassicMVModel classicMvModel;
@property (nonatomic) Q templateSource;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)cutSameMvModel;
- (id)classicMvModel;
- (void)setUrlPrefix:;
- (void)setCutSameMvModel:;
- (void)setClassicMvModel:;
- (unsigned long long)templateID;
- (void)setTemplateID:;
- (long long)templateType;
- (void).cxx_destruct;
- (void)setTemplateType:;
- (id)urlPrefix;
- (void)setTemplateSource:;
- (unsigned long long)templateSource;
+ (id)cutSameMvModelJSONTransformer;
+ (id)classicMvModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
