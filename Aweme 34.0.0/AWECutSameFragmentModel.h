@interface AWECutSameFragmentModel : MTLModel
@property (nonatomic) BOOL isCartoon;
@property (nonatomic) NSNumber videoWidth;
@property (nonatomic) NSNumber videoHeight;
@property (nonatomic) NSNumber duration;
@property (nonatomic) NSString materialId;
@property (nonatomic) q cartoonType;
@property (nonatomic) Q realCartoonType;
@property (nonatomic) NSString gameplayAlgorithm;
@property (nonatomic) NSNumber abilityFlag;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)needReverse;
- (void)setNeedReverse:;
- (BOOL)isCartoon;
- (id)gameplayAlgorithm;
- (unsigned long long)accCartoonType;
- (unsigned long long)realCartoonType;
- (void)setCartoonType:;
- (void)setGameplayAlgorithm:;
- (long long)cartoonType;
- (id)abilityFlag;
- (void)setAbilityFlag:;
- (void)setIsCartoon:;
- (void)setVideoWidth:;
- (void)setDuration:;
- (void)setVideoHeight:;
- (id)videoWidth;
- (void).cxx_destruct;
- (id)videoHeight;
- (id)duration;
- (id)materialId;
- (void)setMaterialId:;
+ (id)JSONKeyPathsByPropertyKey;
@end
