@interface IESECFeedSearchBannerItemModel : IESECBaseApiModel
@property (nonatomic) NSArray words;
- (void).cxx_destruct;
- (id)words;
- (void)setWords:;
+ (id)wordsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
