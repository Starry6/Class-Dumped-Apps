@interface IMAnimatedImagePreviewGenerator : IMPreviewGenerator
+ (id)UTITypes;
+ (BOOL)writesToDisk;
+ (id)generateAndPersistPreviewFromSourceURL:balloonBundleID:withPreviewConstraints:outSize:error:;
@end
