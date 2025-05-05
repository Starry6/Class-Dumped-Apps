@interface PLVideoChoosingAndAvailabilitySupport : NSObject
@property (nonatomic) <PLVideoResourceContext> context;
@property (nonatomic) <PLVideoChoosingAssetInformation> assetInformation;
@property (nonatomic) <PLVideoChoosingOptions> options;
@property (nonatomic) {CGSize=dd} size;
@property (nonatomic) NSArray resourcesNeedingRepair;
- (id)context;
- (id)options;
- (void).cxx_destruct;
- (id)size;
- (id)chooseResourceWithLoadingMode:needsAdjustmentData:error:;
- (id)initWithContext:assetInformation:options:size:;
- (id)resourcesNeedingRepair;
- (id)_acceptableResourceVersions;
- (unsigned int)_videoQualityLevelForRequestFallbackToMediumPolicy:;
- (id)_ensureOriginalsAreHighestQuality:;
- (BOOL)_checkIsReallyLocallyAvailableAndAddToRepairListIfNeeded:;
- (long long)_optimalLoadingModeForResource:;
- (id)assetInformation;
@end
