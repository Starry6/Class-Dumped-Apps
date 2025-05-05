@interface BDAlbumPrivacyCertEntryUtil : NSObject
+ (void)requestPhotoLibraryPermission:withCert:;
+ (void)requestPhotoLibraryPermissionForWriteAlbum:withCert:;
@end
