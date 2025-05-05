@interface PLAssetsdLibraryManagementClient : PLAssetsdBaseClient
- (BOOL)setSystemPhotoLibraryURL:error:;
- (void)getPhotoLibraryURLsWithLibraryURL:reply:;
- (BOOL)removePhotoLibraryURL:error:;
- (BOOL)closeAndDeletePhotoLibraryAtURL:error:;
- (BOOL)closePhotoLibraryAtURL:error:;
- (BOOL)overrideSystemPhotoLibraryURL:error:;
- (id)activePhotoLibraries:;
- (BOOL)resetSyndicationLibrary:;
@end
