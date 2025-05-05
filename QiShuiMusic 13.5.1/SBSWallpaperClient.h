@interface SBSWallpaperClient : FBSServiceFacilityClient
- (BOOL)setWallpaperColorName:forVariants:;
- (BOOL)setWallpaperGradient:forVariants:;
- (id)initWithIdentifier:calloutQueue:;
- (void)fetchThumbnailForVariant:completionHandler:;
- (void)fetchMaximalLockScreenContentCutoutBoundsForOrientation:completionHandler:;
- (void)fetchOriginalVideoURLForVariant:completionHandler:;
- (id)initWithCalloutQueue:;
- (void)triggerPosterSignificantEventWithCompletion:;
- (BOOL)setWallpaperWithVideoWithWallpaperMode:cropRect:wallpaperMode:;
- (void)fetchContentCutoutBoundsForVariant:orientation:completionHandler:;
- (void)fetchOriginalImageForVariant:completionHandler:;
- (void)_fetchLockScreenBoundsCheckOfType:orientation:completionHandler:;
- (BOOL)setWallpaperColor:darkColor:forVariants:;
- (void)fetchObscurableBoundsForOrientation:completionHandler:;
- (void)restoreDefaultWallpaperWithCompletion:;
- (void)fetchLimitedOcclusionBoundsForOrientation:completionHandler:;
- (void)fetchLockScreenContentCutoutBoundsForOrientation:completionHandler:;
- (void)fetchLockScreenTimeBoundsForOrientation:completionHandler:;
@end
