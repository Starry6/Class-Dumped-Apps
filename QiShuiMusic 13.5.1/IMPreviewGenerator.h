@interface IMPreviewGenerator : NSObject
+ (id)UTITypes;
+ (BOOL)shouldScaleUpPreview;
+ (BOOL)shouldShadePreview;
+ (id)newPreviewFromSourceURL:withPreviewConstraints:error:;
+ (id)sizePreviewAtSourceURL:withPreviewConstraints:error:;
+ (BOOL)writesToDisk;
+ (id)generateAndPersistPreviewFromSourceURL:balloonBundleID:withPreviewConstraints:outSize:error:;
+ (id)generateAndPersistMetadataFromSourceURL:withPreviewConstraints:error:;
+ (id)previewExtension;
+ (id)metadataExtension;
+ (double)maxUpScale;
+ (BOOL)generatesPreview;
+ (BOOL)generatesMetadata;
+ (id)newCroppedAndRescaledImageFromImage:constraints:targetPxSize:;
+ (id)thumbnailFillSizeForWidth:imageSize:scale:;
+ (id)_scaledTargetRectForSize:andThumbnailSize:;
@end
