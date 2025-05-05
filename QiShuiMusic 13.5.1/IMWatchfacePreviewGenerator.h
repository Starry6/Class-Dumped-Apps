@interface IMWatchfacePreviewGenerator : IMImagePreviewGenerator
+ (BOOL)_isAvailable;
+ (id)UTITypes;
+ (BOOL)writesToDisk;
+ (id)generateAndPersistPreviewFromSourceURL:balloonBundleID:withPreviewConstraints:outSize:error:;
+ (Class)greenfieldUtilitiesClass;
+ (BOOL)decorateWatchfacePreview:andWriteToURL:imagePxSize:;
@end
