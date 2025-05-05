@interface IESMyEffectModel : MTLModel
@property (nonatomic) NSArray collection;
@property (nonatomic) NSString type;
@property (nonatomic) NSArray effects;
@property (nonatomic) NSArray bindEffects;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setBindEffects:;
- (id)bindEffects;
- (id)collection;
- (void)setCollection:;
- (id)effects;
- (void)setType:;
- (id)type;
- (void).cxx_destruct;
- (void)setEffects:;
- (void)updateEffects;
+ (id)bindEffectsJSONTransformer;
+ (id)collectionJSONTransformer;
+ (id)effectsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
