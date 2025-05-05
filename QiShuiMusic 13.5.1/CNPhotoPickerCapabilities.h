@interface CNPhotoPickerCapabilities : NSObject
+ (BOOL)allowsPhotoLibraryAccess;
+ (BOOL)allowsAvatarUI;
+ (BOOL)allowsAvatarStoreAccess;
+ (BOOL)allowsAvatarFaceTracking;
+ (BOOL)isCameraTCCEnabled;
+ (BOOL)allowsCameraAccess;
@end
