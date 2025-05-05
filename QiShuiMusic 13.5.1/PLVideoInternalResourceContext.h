@interface PLVideoInternalResourceContext : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)hasAdjustments;
- (void).cxx_destruct;
- (id)initWithManagedObjectContext:asset:;
- (id)backingResourceForVideoResource:;
- (BOOL)isPhotoIris;
- (double)sizeThresholdForHighQuality;
- (id)videoResourcesMatchingVersions:;
- (id)onDemandInstallAdjustedFullSizeVideoComplementResourceIfPresent;
- (BOOL)validateResource:;
- (void)repairResource:;
- (BOOL)shouldUseNonAdjustedVersion;
@end
