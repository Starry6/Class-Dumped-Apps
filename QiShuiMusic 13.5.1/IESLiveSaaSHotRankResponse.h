@interface IESLiveSaaSHotRankResponse : BDDynamicMTLModel
@property (nonatomic) NSArray models;
@property (nonatomic) NSNumber updatedAt;
@property (nonatomic) NSString topImageUrl;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setModels:;
- (id)models;
- (void).cxx_destruct;
- (id)updatedAt;
- (void)setUpdatedAt:;
+ (id)modelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
