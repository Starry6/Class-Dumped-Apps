@interface PHImportLibraryAsset : PHImportAsset
- (BOOL)canDelete;
- (BOOL)canReference;
- (id)nameKey;
- (BOOL)shouldPreserveUUID;
- (void)configureSidecarTypeForExtension:;
- (id)initWithSource:url:type:supportedMediaType:uuid:;
- (BOOL)isSidecar;
- (BOOL)isRender;
- (BOOL)isBase;
- (id)makeImportIdentifier;
+ (BOOL)isValidAsSidecar:;
@end
