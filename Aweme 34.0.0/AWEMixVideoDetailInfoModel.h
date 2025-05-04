@interface AWEMixVideoDetailInfoModel : AWEBaseApiModel
@property (nonatomic) AWEMixVideoModel mixInfo;
- (id)mixInfo;
- (void)setMixInfo:;
- (void).cxx_destruct;
+ (id)mixInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
