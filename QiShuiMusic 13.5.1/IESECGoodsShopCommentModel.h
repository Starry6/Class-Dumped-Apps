@interface IESECGoodsShopCommentModel : MTLModel
@property (nonatomic) NSNumber totalCount;
@property (nonatomic) NSNumber goodCount;
@property (nonatomic) NSString goodRatio;
@property (nonatomic) NSNumber praiseRate;
@property (nonatomic) NSArray tags;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)goodCount;
- (id)goodRatio;
- (id)praiseRate;
- (void)setGoodCount:;
- (void)setGoodRatio:;
- (void)setPraiseRate:;
- (id)tags;
- (void)setTags:;
- (id)totalCount;
- (void).cxx_destruct;
- (void)setTotalCount:;
+ (id)tagsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
