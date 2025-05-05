@interface IESECLiveListCategoryModel : MTLModel
@property (nonatomic) NSArray tabModels;
@property (nonatomic) Q tabValidMinGoodsCount;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setTabModels:;
- (void)setTabValidMinGoodsCount:;
- (id)tabModels;
- (unsigned long long)tabValidMinGoodsCount;
- (void).cxx_destruct;
+ (id)tabModelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
