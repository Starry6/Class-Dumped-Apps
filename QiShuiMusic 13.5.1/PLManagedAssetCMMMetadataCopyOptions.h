@interface PLManagedAssetCMMMetadataCopyOptions : NSObject
@property (nonatomic) BOOL shouldCopyTitleDescriptionAndKeywords;
@property (nonatomic) BOOL shouldCopySpatialOverCaptureResources;
- (BOOL)shouldCopyTitleDescriptionAndKeywords;
- (void)setShouldCopyTitleDescriptionAndKeywords:;
- (BOOL)shouldCopySpatialOverCaptureResources;
- (void)setShouldCopySpatialOverCaptureResources:;
@end
