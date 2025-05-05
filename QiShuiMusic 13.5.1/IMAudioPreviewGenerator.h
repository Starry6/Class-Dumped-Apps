@interface IMAudioPreviewGenerator : IMPreviewGenerator
+ (id)UTITypes;
+ (BOOL)writesToDisk;
+ (id)generateAndPersistMetadataFromSourceURL:withPreviewConstraints:error:;
+ (id)metadataExtension;
+ (BOOL)generatesPreview;
+ (BOOL)generatesMetadata;
+ (id)audioMedataForFileURL:;
@end
