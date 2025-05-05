@interface IMPassPreviewGenerator : IMImagePreviewGenerator
+ (BOOL)isSupported;
+ (id)temporaryDirectory;
+ (id)UTITypes;
+ (id)generateAndPersistMetadataFromSourceURL:withPreviewConstraints:error:;
+ (id)metadataExtension;
+ (BOOL)generatesPreview;
+ (BOOL)generatesMetadata;
+ (id)_dictionaryRepresentationForPassText:;
+ (id)_dictionaryRepresentationForColor:;
+ (id)previewFromSourceURL:withPreviewConstraints:error:;
@end
