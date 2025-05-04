@interface AWEEffectDataManager : NSObject
@property (nonatomic) AWEEffectFilterDataManager effectFilterDataManager;
@property (nonatomic) HTSVideoSepcialEffect timeEffectManager;
@property (nonatomic) BOOL isFetching;
- (id)effectFilterPathBlock;
- (long long)downloadStatusOfEffect:;
- (id)timeEffectManager;
- (id)effectFilterDataManager;
- (void)addEffectToDownloadQueue:;
- (void)addEffectToDownloadQueue:preload:;
- (id)effectIdWithType:;
- (id)allTimeEffects;
- (void)resetTimeForbiddenStyle;
- (id)timeEffectWithType:;
- (id)timeEffectColorWithType:;
- (id)timeEffectDescriptionWithType:;
- (id)normalEffectWithID:;
- (id)builtinNormalEffects;
- (id)normalEffectPlatformModel;
- (double)effectDurationForNormalEffect:;
- (id)maskColorForNormalEffect:;
- (void)updateNormalEffects;
- (void)setEffectFilterDataManager:;
- (void)setTimeEffectManager:;
- (void).cxx_destruct;
- (BOOL)isFetching;
@end
