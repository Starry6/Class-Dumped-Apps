@interface AWESearchNewEffectsDetailItemModel : AWEBaseApiModel
@property (nonatomic) NSString ID;
@property (nonatomic) NSString name;
@property (nonatomic) NSNumber useCount;
@property (nonatomic) AWEURLModel iconURL;
@property (nonatomic) NSString desc;
@property (nonatomic) q effectType;
@property (nonatomic) q mvType;
- (long long)mvType;
- (void)setMvType:;
- (void)setID:;
- (id)ID;
- (void)setIconURL:;
- (id)useCount;
- (void)setUseCount:;
- (id)iconURL;
- (void)setDesc:;
- (id)desc;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
- (long long)effectType;
- (void)setEffectType:;
+ (id)iconURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
