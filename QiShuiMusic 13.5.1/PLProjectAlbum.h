@interface PLProjectAlbum : PLManagedAlbum
@property (nonatomic) NSData projectData;
@property (nonatomic) NSString projectDocumentType;
@property (nonatomic) NSString projectExtensionIdentifier;
@property (nonatomic) NSString projectRenderUuid;
- (BOOL)setProjectPreviewImageData:error:;
- (void)willSave;
- (BOOL)supportsAssetOrderKeys;
- (id)payloadForChangedKeys:;
- (BOOL)canPerformEditOperation:;
- (void)awakeFromInsert;
- (void)prepareForDeletion;
- (id)_previewImageFilename;
- (id)duplicateProjectPreviewImageData:error:;
- (id)projectPreviewImageData;
+ (id)entityName;
+ (id)albumSupportsAssetOrderKeysPredicate;
+ (id)insertIntoPhotoLibrary:withUUID:documentType:projectExtensionIdentifier:;
+ (id)validKindsForPersistence;
+ (BOOL)cleanupOrphanedProjectPreviewImagesInLibrary:error:;
@end
