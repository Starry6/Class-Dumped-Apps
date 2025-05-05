@interface ALAssetsLibraryPrivate : NSObject
@property (nonatomic) ALAssetsLibrary assetsLibrary;
@property (nonatomic) PLPhotoLibrary photoLibrary;
@property (nonatomic) BOOL isValid;
- (id)photoLibrary;
- (void)photoLibraryDidChange:;
- (void)dealloc;
- (void)setIsValid:;
- (BOOL)isValid;
- (id)assetsLibrary;
- (id)initWithAssetsLibrary:;
- (void)registerAlbum:assetGroupPrivate:;
- (void)setAssetsLibrary:;
@end
