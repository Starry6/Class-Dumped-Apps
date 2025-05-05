@interface IESEffectSearchRecommendResponseModel : MTLModel
@property (nonatomic) NSArray recommendModels;
@property (nonatomic) NSString searchTips;
@property (nonatomic) NSString imprID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)recommendModels;
- (id)imprID;
- (id)searchTips;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:;
@end
