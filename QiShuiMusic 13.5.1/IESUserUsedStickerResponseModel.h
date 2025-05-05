@interface IESUserUsedStickerResponseModel : MTLModel
@property (nonatomic) NSArray effects;
@property (nonatomic) NSArray collection;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)collection;
- (void)setCollection:;
- (id)effects;
- (id)initWithDictionary:error:;
- (void).cxx_destruct;
- (void)setEffects:;
+ (id)collectionJSONTransformer;
+ (id)effectsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
