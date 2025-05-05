@interface IESCategoryVideoEffectsModel : MTLModel
@property (nonatomic) NSString version;
@property (nonatomic) NSString categoryKey;
@property (nonatomic) NSArray collection;
@property (nonatomic) NSArray effects;
@property (nonatomic) NSArray bindEffects;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)bindEffects;
- (id)collection;
- (id)effects;
- (id)version;
- (void).cxx_destruct;
- (id)categoryKey;
+ (id)bindEffectsJSONTransformer;
+ (id)collectionJSONTransformer;
+ (id)effectsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
