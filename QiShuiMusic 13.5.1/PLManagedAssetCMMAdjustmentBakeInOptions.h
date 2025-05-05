@interface PLManagedAssetCMMAdjustmentBakeInOptions : NSObject
@property (nonatomic) BOOL shouldBakeInIfLivePhotoPlaybackDisabled;
@property (nonatomic) BOOL shouldBakeInIfLivePhotoMuted;
@property (nonatomic) BOOL shouldBakeInIfAdjustedByThirdParty;
@property (nonatomic) BOOL shouldBakeInIfCropped;
@property (nonatomic) BOOL shouldBakeInIfTimelineTrimmed;
@property (nonatomic) BOOL shouldBakeInIfPortraitDepthEffectEnabled;
@property (nonatomic) BOOL shouldBakeInIfContainsPenultimateResources;
@property (nonatomic) BOOL flattenLivePhotoToStillIfNeeded;
- (void)setShouldBakeInIfContainsPenultimateResources:;
- (BOOL)shouldBakeInIfCropped;
- (void)setShouldBakeInIfLivePhotoPlaybackDisabled:;
- (BOOL)shouldBakeInIfLivePhotoPlaybackDisabled;
- (BOOL)shouldBakeInIfLivePhotoMuted;
- (BOOL)shouldBakeInIfAdjustedByThirdParty;
- (void)setShouldBakeInIfCropped:;
- (void)setShouldBakeInIfAdjustedByThirdParty:;
- (BOOL)shouldBakeInIfContainsPenultimateResources;
- (BOOL)shouldBakeInIfPortraitDepthEffectEnabled;
- (void)setShouldBakeInIfLivePhotoMuted:;
- (void)setShouldBakeInIfTimelineTrimmed:;
- (BOOL)shouldBakeInIfTimelineTrimmed;
- (void)setShouldBakeInIfPortraitDepthEffectEnabled:;
- (BOOL)flattenLivePhotoToStillIfNeeded;
- (void)setFlattenLivePhotoToStillIfNeeded:;
@end
