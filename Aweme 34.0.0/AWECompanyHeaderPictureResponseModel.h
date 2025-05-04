@interface AWECompanyHeaderPictureResponseModel : AWEBaseApiModel
@property (nonatomic) AWEModuleMap moduleMap;
- (id)moduleMap;
- (void)setModuleMap:;
- (void).cxx_destruct;
+ (id)moduleMapJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
