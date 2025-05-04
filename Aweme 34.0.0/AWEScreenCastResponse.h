@interface AWEScreenCastResponse : AWEBaseApiModel
@property (nonatomic) NSArray castVideoInfos;
- (id)castVideoInfos;
- (void)setCastVideoInfos:;
- (void).cxx_destruct;
+ (id)castVideoInfosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
