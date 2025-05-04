@interface AWESocialItemModel : MTLModel
@property (nonatomic) q itemType;
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) AWEStory24BlurModel story24BlurModel;
@property (nonatomic) AWEStory24CoverModel story24Model;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)awemeModel;
- (void)setAwemeModel:;
- (id)story24Model;
- (id)story24BlurModel;
- (void)setStory24BlurModel:;
- (void)setStory24Model:;
- (long long)itemType;
- (void)setItemType:;
- (void).cxx_destruct;
+ (id)awemeModelJSONTransformer;
+ (id)story24BlurModelJSONTransformer;
+ (id)story24ModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
