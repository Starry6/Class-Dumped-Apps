@interface IMImagePreviewGenerator : IMPreviewGenerator
+ (id)UTITypes;
+ (id)fetchUTITypes;
+ (id)newPreviewFromSourceURL:withPreviewConstraints:error:;
+ (id)sizePreviewAtSourceURL:withPreviewConstraints:error:;
+ (BOOL)writesToDisk;
+ (id)generateAndPersistPreviewFromSourceURL:balloonBundleID:withPreviewConstraints:outSize:error:;
+ (id)cropAndScaleImageWithImageSource:withPreviewConstraints:;
+ (id)newThumbnailFillToSize:imagePxSize:imageSource:scale:;
@end
