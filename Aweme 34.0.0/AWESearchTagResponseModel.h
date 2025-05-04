@interface AWESearchTagResponseModel : AWEBaseApiModel
@property (nonatomic) NSArray tagInfos;
- (id)tagInfos;
- (void)setTagInfos:;
- (void).cxx_destruct;
+ (id)tagInfosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
