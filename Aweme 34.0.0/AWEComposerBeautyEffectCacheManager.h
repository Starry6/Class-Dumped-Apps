@interface AWEComposerBeautyEffectCacheManager : NSObject
@property (nonatomic) NSDictionary resourceIDCacheKeyMapping;
@property (nonatomic) AWEComposerBeautyEffectViewModel effectViewModel;
- (BOOL)userHasModifiedBeautyConfigInCameraPage;
- (void)cleanUpUnifiedBeautyResource;
- (long long)currentGender;
- (void)applySecondaryComposerItemWithResourceID:gender:;
- (id)resourceIDsForAppliedEffectsForGender:;
- (id)effectViewModel;
- (void)setRatio:forEffectWithResourceID:tag:gender:;
- (double)ratioForEffectWithResourceID:tag:gender:;
- (void)updateWithBeautyEffectViewModel:;
- (void)setEffectViewModel:;
- (id)p_findEffectWrapperByResourceID:;
- (id)resourceIDCacheKeyMapping;
- (void)setResourceIDCacheKeyMapping:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedManager;
@end
