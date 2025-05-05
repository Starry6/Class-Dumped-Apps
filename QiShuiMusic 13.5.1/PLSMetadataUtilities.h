@interface PLSMetadataUtilities : NSObject
+ (BOOL)_writeDetails:forEntityNamed:toFilepath:withDefaultFilename:;
+ (id)_allAlbumsInPhotoLibrary:;
+ (id)dictionaryFromManagedObject:excludeAttributes:includingRelationships:excludeRelationshipAttributes:andSubRelationships:;
+ (id)_normalizeObjectForJSON:;
+ (id)_detailsForAsset:includingLocal:includingFingerprints:;
+ (void)writeJSONData:toFile:;
+ (void)_writeJSONForObjectDetails:toFile:;
+ (BOOL)initializeJSONFileAtPath:;
+ (void)serializeJSONFromObjectDetails:ToPath:;
+ (id)allAssetsDetailsWriteToPath:includingLocal:includingFingerprints:forAlbumTitled:library:;
+ (id)_detailsForAlbum:;
+ (id)allAlbumsDetailsWriteToPath:inLibrary:;
@end
