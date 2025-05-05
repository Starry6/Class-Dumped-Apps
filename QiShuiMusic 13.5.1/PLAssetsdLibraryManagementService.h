@interface PLAssetsdLibraryManagementService : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (void)setSystemPhotoLibraryURL:sandboxExtension:options:reply:;
- (void)getActivePhotoLibrariesWithReply:;
- (void)getPhotoLibraryURLsWithLibraryURL:reply:;
- (void)closeAndDeletePhotoLibraryAtURL:reply:;
- (void)closePhotoLibraryAtURL:reply:;
- (void)resetSyndicationLibraryWithReply:;
- (id)initWithConnectionAuthorization:bundleController:;
- (void)_closePhotoLibraryAtURL:delete:reply:;
- (BOOL)_deleteLibraryFromFilesystemAtURL:error:;
@end
