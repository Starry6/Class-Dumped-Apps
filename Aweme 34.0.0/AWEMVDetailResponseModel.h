@interface AWEMVDetailResponseModel : AWEBaseApiModel
@property (nonatomic) AWEAweMVTemplateModel templateModel;
- (void).cxx_destruct;
- (void)setTemplateModel:;
- (id)templateModel;
+ (id)templateModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
