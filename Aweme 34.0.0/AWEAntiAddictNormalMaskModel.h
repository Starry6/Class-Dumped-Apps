@interface AWEAntiAddictNormalMaskModel : MTLModel
@property (nonatomic) NSArray relaxDayMaterials;
@property (nonatomic) NSArray relaxNightMaterials;
@property (nonatomic) NSArray sleepMaterials;
@property (nonatomic) NSArray blockMaterials;
@property (nonatomic) NSArray blockNightMaterials;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)blockMaterials;
- (id)blockNightMaterials;
- (id)relaxDayMaterials;
- (id)relaxNightMaterials;
- (id)sleepMaterials;
- (void).cxx_destruct;
+ (id)relaxDayMaterialsJSONTransformer;
+ (id)relaxNightMaterialsJSONTransformer;
+ (id)sleepMaterialsJSONTransformer;
+ (id)blockMaterialsJSONTransformer;
+ (id)blockNightMaterialsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
