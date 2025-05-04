@interface AWEInteractionModernPOIStickerInfoModel : MTLModel
@property (nonatomic) Q currentEffectIndex;
@property (nonatomic) NSArray effects;
@property (nonatomic) NSString currentPath;
@property (nonatomic) Q loadingEffectIndex;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)currentEffectIndex;
- (void)setCurrentEffectIndex:;
- (void)setLoadingEffectIndex:;
- (unsigned long long)loadingEffectIndex;
- (id)effects;
- (void).cxx_destruct;
- (void)setCurrentPath:;
- (id)currentPath;
- (void)setEffects:;
+ (id)effectsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
