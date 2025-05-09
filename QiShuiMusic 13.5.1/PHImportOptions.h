@interface PHImportOptions : NSObject
@property (nonatomic) NSString personId;
@property (nonatomic) PHImportSource importSource;
@property (nonatomic) PHPhotoLibrary library;
@property (nonatomic) s importedBy;
@property (nonatomic) BOOL omitImportComplete;
@property (nonatomic) BOOL allowUnsupported;
@property (nonatomic) PHLibraryScope libraryScope;
@property (nonatomic) PHAssetCollection destinationAlbum;
@property (nonatomic) PHCollectionList destinationFolder;
@property (nonatomic) BOOL preserveFolderStructure;
@property (nonatomic) BOOL hideProgress;
@property (nonatomic) BOOL skipAlertWhenFinished;
@property (nonatomic) BOOL shouldImportAsReferenced;
@property (nonatomic) BOOL allowDuplicates;
@property (nonatomic) BOOL skipDiskSpaceCheck;
@property (nonatomic) BOOL deleteAfterImport;
@property (nonatomic) C fileOperation;
@property (nonatomic) NSSortDescriptor sortDescriptor;
@property (nonatomic) C metadataAddMode;
@property (nonatomic) NSMutableDictionary userIptcMetadata;
- (id)init;
- (void)setLibrary:;
- (short)importedBy;
- (id)library;
- (void).cxx_destruct;
- (id)sortDescriptor;
- (id)description;
- (id)personId;
- (void)setPersonId:;
- (void)setHideProgress:;
- (void)setImportedBy:;
- (id)importSource;
- (BOOL)preserveFolderStructure;
- (void)setPreserveFolderStructure:;
- (BOOL)hideProgress;
- (BOOL)skipAlertWhenFinished;
- (void)setSkipAlertWhenFinished:;
- (unsigned char)fileOperation;
- (void)setFileOperation:;
- (BOOL)shouldImportAsReferenced;
- (void)setShouldImportAsReferenced:;
- (BOOL)allowDuplicates;
- (void)setAllowDuplicates:;
- (BOOL)skipDiskSpaceCheck;
- (void)setSkipDiskSpaceCheck:;
- (BOOL)deleteAfterImport;
- (void)setDeleteAfterImport:;
- (unsigned char)metadataAddMode;
- (void)setMetadataAddMode:;
- (BOOL)omitImportComplete;
- (void)setOmitImportComplete:;
- (BOOL)allowUnsupported;
- (void)setAllowUnsupported:;
- (id)destinationAlbum;
- (void)setDestinationAlbum:;
- (id)destinationFolder;
- (void)setDestinationFolder:;
- (void)setSortDescriptor:;
- (id)userIptcMetadata;
- (void)setUserIptcMetadata:;
- (void)setImportSource:;
- (id)libraryScope;
- (void)setLibraryScope:;
@end
