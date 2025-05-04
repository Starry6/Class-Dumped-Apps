@interface AWEUserRecommendItemListResponse : AWEBaseApiModel
@property (nonatomic) NSArray userExtraList;
- (id)userExtraList;
- (void)setUserExtraList:;
- (void).cxx_destruct;
+ (id)userExtraListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
