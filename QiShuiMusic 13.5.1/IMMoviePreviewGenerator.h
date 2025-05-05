@interface IMMoviePreviewGenerator : IMPreviewGenerator
+ (id)UTITypes;
+ (id)fetchUTITypes;
+ (BOOL)isAutoloopAsset:;
+ (id)createImageWithPlayButtonOverlay:scale:transferGUID:error:;
+ (id)newPreviewFromSourceURL:withPreviewConstraints:error:;
+ (id)sizePreviewAtSourceURL:withPreviewConstraints:error:;
+ (BOOL)writesToDisk;
+ (id)generateAndPersistPreviewFromSourceURL:balloonBundleID:withPreviewConstraints:outSize:error:;
+ (id)_avAssetForURL:;
@end
